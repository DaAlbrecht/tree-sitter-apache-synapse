const JSON = require("tree-sitter-json/grammar")

module.exports = grammar(JSON, {
    name: 'apachesynapse',

    extras: $ => [
        $.comment,
        /\s+/,
    ],

    rules: {
        document: $ => seq(
            optional($.xml_declaration),
            repeat($._definition),
        ),

        _definition: $ => choice(
            $.sequence_definition,
            $.api_definition,
        ),

        api_definition: $ => seq(
            '<api',
            field('api_attributes', $.api_attributes),
            '>',
            repeat1(field('resource_definition', $.resource_definition)),
            '</api>',
        ),

        xmlns: $ => attr('xmlns', 'http://ws.apache.org/ns/synapse'),

        resource_definition: $ => seq(
            '<resource',
            field('methods', $.methods),
            choice(
                field('uri_template', $.uri_template),
                field('url_mapping', $.url_mapping),
            ),
            '>',
            optional(repeat($._mediation_sequences)),
            '</resource>',
        ),

        url_mapping: $ => attr('url-mapping', $.path),

        _mediation_sequences: $ => choice(
            field('in', $.in_sequence),
            field('out', $.out_sequence),
            field('fault', $.fault_sequence),

        ),

        in_sequence: $ => seq(
            '<inSequence>',
            optional(repeat($.mediator)),
            '</inSequence>',
        ),

        out_sequence: $ => seq(
            '<outSequence>',
            optional(repeat($.mediator)),
            '</outSequence>',
        ),

        fault_sequence: $ => seq(
            '<faultSequence>',
            optional(repeat($.mediator)),
            '</faultSequence>',
        ),

        methods: $ => repeat1(attr('methods', $.method)),

        uri_template: $ => attr('uri-template', $.path),

        api_attributes: $ => seq(
            field('xmlns', $.xmlns),
            field('name', $.name),
            field('context', $.context),
            optional(
                repeat(
                    choice(
                        attr('hostname', $.hostname),
                        attr('port', $.port),
                        attr('version', $.version),
                        attr('swagger', $.swagger),
                    ),
                ),
            ),
        ),

        context: $ => attr('context', $.path),

        path: $ => seq(
            /[a-zA-Z0-9_/]+/,
        ),

        hostname: $ => attr('hostname', $.identifier),

        port: $ => attr('port', $.number),

        version: $ => attr('version', $.identifier),

        swagger: $ => attr('swagger', $.identifier),


        sequence_definition: $ => seq(
            '<sequence',
            field('name', $.name),
            '>',
            optional(repeat($.mediator)),
            '</sequence>',
        ),

        mediator: $ => choice(
            $.log,
            $.respond,
            $.property,
            $.call,
            $.foreach,
            $.filter,
            $.aggregate,
            $.send,
            $.iterate,
            $.sequence,
            $.payload_factory,
            $.header
            // TODO: add more mediators
        ),

        respond: $ => seq(
            '<respond/>'
        ),

        send: $ => choice(
            '<send/>',
            seq(
                '<send',
                optional(field('blocking', $.blocking)),
                '>',
                field('endpoint', $.endpoint),
                '</send>'
            ),
        ),

        log: $ => choice(
            seq(
                '<log',
                field('level', $.level),
                '>',
                optional(repeat($.property)),
                '</log>'
            ),
            seq(
                '<log',
                field('level', $.level),
                '/>'
            )
        ),

        property: $ => seq(
            '<property',
            field('name', $.name),
            repeat($._property_attribute),
            '/>'
        ),

        _property_attribute: $ => choice(
            attr('scope', choice(
                'default',
                'axis2',
                'axis2-client',
                'operation',
                'transport',
                'registry',
                'synapse',
                'system',
                'env',
                'file'
            )),
            attr('action', choice(
                'set',
                'remove',
            )),
            choice(
                field('value', $.value),
                field('expression', $.expression),
            ),
            attr('type', choice(
                'STRING',
                'INTEGER',
                'BOOLEAN',
                'DOUBLE',
                'FLOAT',
                'LONG',
                'SHORT',
                'OM',
            )),
            attr('pattern', $.regex),
            attr('group', $.number),
        ),

        call: $ => seq(
            '<call',
            optional(field('name', $.name)),
            optional(field('blocking', $.blocking)),
            '>',
            choice(
                field('endpoint', $.endpoint),
                //endpoint reference
                field('endpoint_reference', $.endpoint_reference),
            ),
            '</call>'
        ),

        foreach: $ => seq(
            '<foreach',
            field('expression', $.expression),
            optional(field('id', $.id)),
            optional(field('sequence', attr('sequence', $.identifier))),
            '>',
            field('sequence', $.sequence),
            '</foreach>'
        ),

        filter: $ => seq(
            '<filter',
            choice(
                field('source', $.source),
                attr('xpath', $.xpath),

            ),
            '>',
            field('then', $.then),
            optional(field('else', $.else)),
            '</filter>'
        ),

        aggregate: $ => seq(
            choice(
                '<aggregate>',
                seq(
                    '<aggregate',
                    seq(
                        choice(
                            field('id', $.id),
                            //add the rest but the documentation is not clear
                        ),
                    ),
                    '>',
                ),
            ),
            optional(field('correlateOn', $.correlateOn)),
            optional(field('complete_condition', $.complete_condition)),
            optional(field('on_complete', $.on_complete)),
            '</aggregate>'
        ),

        iterate: $ => seq(
            '<iterate',
            repeat1(
                choice(
                    field('expression', $.expression),
                    field('sequential', $.sequential),
                    field('continueParent', $.continueParent),
                    field('preservePayload', $.preservePayload),
                    field('attachPath', $.attachPath),
                )
            ),
            '>',
            field('target', $.target),
            '</iterate>'
        ),

        payload_factory: $ => seq(
            '<payloadFactory',
            field('media_type', $.media_type),
            '>',
            field('format', $.format),
            field('args', $.args),
            '</payloadFactory>'
        ),

        //<header name=”string” (value=”string|{property}” | expression=”xpath|jsonpath”) [scope=default|transport] [action=set|remove]/>
        header: $ => seq(
            '<header',
            field('name', $.name),
            field('value', choice(
                $.value,
                $.expression,
            )),
            optional(field('header_scope', $.header_scope)),
            optional(field('header_action', $.header_action)),
            '/>'
        ),

        header_scope: $ => attr('scope', choice(
            'default',
            'transport',
        )),

        header_action: $ => attr('action', choice(
            'set',
            'remove',
        )),


        media_type: $ => attr('media-type', choice(
            'xml',
            'json',
        )),

        format: $ => seq(
            '<format',
            //TODO: add inline or registry
            '>',
            field('value', $._value),
            '</format>'
        ),

        _value: (_, previous) => choice(
            previous,
        ),


        args: $ => choice(
            '<args/>',
            seq(
                '<args>',
                optional(repeat(
                    seq(
                        '<arg',
                        field('arg', $.arg),
                        '/>'
                    ),
                )),
                '</args>',
            ),
        ),

        arg: $ => seq(
            optional(field('evaluator', $.evaluator)),
            choice(
                field('expression', $.expression),
                field('value', $.value),
            ),
        ),


        evaluator: $ => attr('evaluator', choice(
            'xml',
            'json',
        )),

        sequential: $ => attr('sequential', $.boolean),

        continueParent: $ => attr('continueParent', $.boolean),

        preservePayload: $ => attr('preservePayload', $.boolean),

        attachPath: $ => attr('attachPath', choice(
            $.xpath,
            $.json_eval,
        )),

        sequence: $ => choice(
            seq(
                '<sequence',
                optional(field('key', $.key)),
                '>',
                optional(repeat($.mediator)),
                '</sequence>'
            ),
            seq(
                '<sequence',
                optional(field('key', $.key)),
                '/>',
            ),
        ),

        target: $ => seq(
            '<target',
            optional(field('to', attr('to', $.identifier))),
            optional(field('soapAction', attr('soapAction', $.identifier))),
            optional(field('sequence', attr('sequence', $.identifier))),
            optional(field('endpoint', attr('endpoint', $.identifier))),
            '>',
            field('sequence', $.sequence),
            '</target>'
        ),

        correlateOn: $ => seq(
            '<correlateOn',
            field('expression', $.expression),
            '/>'
        ),

        complete_condition: $ => seq(
            '<completeCondition',
            optional(field('timeout', $.timeout)),
            '>',
            optional(field('message_count', $.message_count)),
            '</completeCondition>'
        ),

        on_complete: $ => seq(
            '<onComplete',
            field('expression', $.expression),
            optional(field('sequence', attr('sequence', $.identifier))),
            '>',
            optional(repeat($.mediator)),
            '</onComplete>'
        ),

        message_count: $ => seq(
            '<messageCount',
            field('min', $.min),
            field('max', $.max),
            '/>'
        ),

        min: $ => attr('min', $.number),

        max: $ => attr('max', $.number),

        key: $ => attr('key', $.identifier),


        then: $ => seq(
            '<then>',
            optional(repeat($.mediator)),
            '</then>'
        ),

        else: $ => seq(
            '<else>',
            optional(repeat($.mediator)),
            '</else>'
        ),

        source: $ => seq(
            attr('source', choice(
                $.json_eval,
                $.xpath,
            )),
            field('regex', $.regex),
        ),

        regex: $ => attr('regex', $.expression_string),

        endpoint: $ => seq(
            '<endpoint',
            optional(field('name', $.name)),
            //TODO: there are more attributes
            '>',
            field('endpoint_type', $._endpoint_type),
            '</endpoint>'
        ),

        _endpoint_type: $ => choice(
            $.http_endpoint,
            //TODO: add more endpoint types
        ),

        http_endpoint: $ => seq(
            '<http',
            // endpoint attributes the order does not matter but each attribute can only be used once 
            repeat($._endpoint_attribute),
            '>',
            repeat($.endpoint_error_property),
            '</http>'
        ),

        _endpoint_attribute: $ => choice(
            attr('uri-template', $.identifier),
            attr('method', $.method),
        ),

        method: $ =>
            choice(
                'GET',
                'POST',
                'PUT',
                'DELETE',
                'HEAD',
                'OPTIONS',
                'PATCH',
                'get',
                'post',
                'put',
                'delete',
                'head',
                'options',
                'patch',
            ),

        _endpoint_property: $ => choice(
            //TODO: add more endpoint properties 
        ),

        endpoint_error_property: $ => choice(
            $.timeout,
            $.suspend_on_failure,
            $.mark_for_suspending,
        ),

        timeout: $ => seq(
            '<timeout>',
            repeat($._timeout_property),
            '</timeout>'
        ),

        mark_for_suspending: $ => seq(
            '<markForSuspension>',
            repeat($._mark_for_suspending_property),
            '</markForSuspension>'
        ),

        _mark_for_suspending_property: $ => choice(
            $.error_codes,
            $.retries_before_suspending,
            $.retry_delay,
        ),

        retries_before_suspending: $ => seq(
            '<retriesBeforeSuspension>',
            field('number', $.number),
            '</retriesBeforeSuspension>'
        ),

        retry_delay: $ => seq(
            '<retryDelay>',
            field('number', $.number),
            '</retryDelay>'
        ),

        suspend_on_failure: $ => seq(
            '<suspendOnFailure>',
            repeat($._suspend_on_failure_property),
            '</suspendOnFailure>'
        ),

        _suspend_on_failure_property: $ => choice(
            $.initial_duration,
            $.progression_factor,
            $.maximum_duration,
            $.error_codes,
        ),

        initial_duration: $ => seq(
            '<initialDuration>',
            field('number', $.number),
            '</initialDuration>'
        ),

        progression_factor: $ => seq(
            '<progressionFactor>',
            field('number', $.number),
            '</progressionFactor>'
        ),

        maximum_duration: $ => seq(
            '<maximumDuration>',
            field('number', $.number),
            '</maximumDuration>'
        ),

        error_codes: $ => seq(
            '<errorCodes>',
            sepBy1(',', $.number),
            '</errorCodes>'
        ),

        _timeout_property: $ => choice(
            $.duration,
            $.response_action,
        ),

        duration: $ => seq(
            '<duration>',
            field('number', $.number),
            '</duration>'
        ),


        response_action: $ => seq(
            '<responseAction>',
            choice(
                'never',
                'discard',
                'fault',
            ),
            '</responseAction>'
        ),

        endpoint_reference: $ => seq(
            '<key',
            '=',
            '"',
            $.identifier,
            '"',
            '/>'
        ),

        blocking: $ =>
            attr(
                'blocking',
                choice(
                    'true',
                    'false',
                ),
            ),

        value: $ => attr('value', /[^"]*/),

        expression: $ => seq(
            attr('expression', choice(
                $.xpath,
                $.json_eval,
                $.json_path,
            ))
        ),



        json_eval: $ => seq(
            'json-eval(',
            $.json_path,
            ')'
        ),

        name: $ => seq(
            attr('name', $.identifier)
        ),

        id: $ => seq(
            attr('id', $.identifier)
        ),

        level: $ => seq(
            'level',
            '=',
            '"',
            choice(
                'full',
                'simple',
                'custom',
                'headers',
            ),
            '"'
        ),

        identifier: $ => /[a-zA-Z_][a-zA-Z0-9_.]*/,

        number: $ => choice(
            $._float,
            $._unsigned_int,
            $._int,
        ),

        _float: $ => /[0-9]+\.[0-9]+/,

        _unsigned_int: $ => /[0-9]+/,

        _int: $ => /-[0-9]+/,

        boolean: $ => choice(
            'true',
            'false',
        ),

        expression_string: $ => /[^"]*/,

        // xml declaration

        xml_declaration: $ => seq(
            '<?xml',
            $.version_info,
            optional($.encoding_declaration),
            '?>'
        ),

        version_info: $ => seq(
            'version',
            '=',
            $.version_number
        ),

        version_number: $ => /"1\.[0-9]+"/,

        encoding_declaration: $ => seq(
            'encoding',
            '=',
            $.encoding
        ),
        encoding: $ => /"UTF-8"/,

        comment: $ => token(seq('<!--', /[^-]+/, '-->')),

        // xpath scrappy implementation
        xpath: $ => seq(
            repeat1(
                choice(
                    $._xpath_node,
                    $._xpath_selectors,
                    $._xPath_extension_functions,
                    choice(
                        $._xpath_function,
                        seq(
                            'fn:',
                            $._xpath_function,
                        ),
                    ),
                    $._xpath_string,
                    $.string_literal,
                ),
            )
        ),

        _xpath_node: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,

        _xpath_selectors: $ => choice(
            '/',
            '//',
            '..',
            '.',
            '@',
        ),

        _xPath_extension_functions: $ => choice(
            $.base64_encode,
            $.base64_decode,
            $.get_property,
            $.synapse_xpath_property,
        ),

        _xpath_function: $ => choice(
            $.boolean_function,
            $.ceiling_function,
            $.choose_function,
            $.concat_function,
            $.contains_function,
            $.count_function,
            $.current_function,
            $.document_function,
            $.element_available_function,
            $.false_function,
            $.floor_function,
            $.format_number_function,
            $.function_available_function,
            $.generate_id_function,
            $.id_function,
            $.key_function,
            $.lang_function,
            $.last_function,
            $.local_name_function,
            $.name_function,
            $.namespace_uri_function,
            $.normalize_space_function,
            $.not_function,
            $.number_function,
            $.position_function,
            $.round_function,
            $.starts_with_function,
            $.string_function,
            $.string_length_function,
            $.substring_function,
            $.substring_after_function,
            $.substring_before_function,
            $.sum_function,
            $.system_property_function,
            $.translate_function,
            $.true_function,
            $.unparsed_entity_url_function,
        ),

        boolean_function: $ => xPathFunction('boolean', $.xpath),
        ceiling_function: $ => xPathFunction('ceiling', $.xpath),
        choose_function: $ => xPathFunction('choose', $.xpath),
        concat_function: $ => xPathFunction('concat', sepBy1(',', $.xpath)),
        contains_function: $ => xPathFunction('contains', $.xpath),
        count_function: $ => xPathFunction('count', $.xpath),
        current_function: $ => xPathFunction('current', $.xpath),
        document_function: $ => xPathFunction('document', $.xpath),
        element_available_function: $ => xPathFunction('element-available', $.xpath),
        false_function: $ => xPathFunction('false', $.xpath),
        floor_function: $ => xPathFunction('floor', $.xpath),
        format_number_function: $ => xPathFunction('format-number', $.xpath),
        function_available_function: $ => xPathFunction('function-available', $.xpath),
        generate_id_function: $ => xPathFunction('generate-id', $.xpath),
        id_function: $ => xPathFunction('id', $.xpath),
        key_function: $ => xPathFunction('key', $.xpath),
        lang_function: $ => xPathFunction('lang', $.xpath),
        last_function: $ => xPathFunction('last', $.xpath),
        local_name_function: $ => xPathFunction('local-name', $.xpath),
        name_function: $ => xPathFunction('name', $.xpath),
        namespace_uri_function: $ => xPathFunction('namespace-uri', $.xpath),
        normalize_space_function: $ => xPathFunction('normalize-space', $.xpath),
        not_function: $ => xPathFunction('not', $.xpath),
        number_function: $ => xPathFunction('number', $.xpath),
        position_function: $ => xPathFunction('position', $.xpath),
        round_function: $ => xPathFunction('round', $.xpath),
        starts_with_function: $ => xPathFunction('starts-with', $.xpath),
        string_function: $ => xPathFunction('string', $.xpath),
        string_length_function: $ => xPathFunction('string-length', $.xpath),
        substring_function: $ => xPathFunction('substring', $.xpath),
        substring_after_function: $ => xPathFunction('substring-after', $.xpath),
        substring_before_function: $ => xPathFunction('substring-before', $.xpath),
        sum_function: $ => xPathFunction('sum', $.xpath),
        system_property_function: $ => xPathFunction('system-property', $.xpath),
        translate_function: $ => xPathFunction('translate', $.xpath),
        true_function: $ => xPathFunction('true', $.xpath),
        unparsed_entity_url_function: $ => xPathFunction('unparsed-entity-url', $.xpath),

        base64_encode: $ => xPathFunction('base64Encode', $.xpath),

        base64_decode: $ => xPathFunction('base64Decode', $.xpath),

        get_property: $ => seq(
            'get-property(',
            '\'',
            $.identifier,
            '\'',
            ')'
        ),

        string_literal: $ => seq(
            '\'',
            /[a-zA-Z_][a-zA-Z0-9_.]*/,
            '\''
        ),

        _xpath_string: $ => /[a-zA-Z_][a-zA-Z0-9_.\s]*/,

        synapse_xpath_property: $ => seq(
            choice(
                '$body',
                '$header',
                '$axis2',
                '$ctx',
                '$trp',
                '$url',
                '$func',
                '$env',
            ),
            optional(seq(
                ':',
                $.identifier,
            )),
        ),

        //incorrect implementation of json path
        json_path: $ => seq(
            '$.',
            $.identifier,
            repeat(
                choice(
                    $.json_path_array,
                    $.json_path_object,
                )
            )
        ),

        json_path_array: $ => seq(
            '[',
            $.number,
            ']'
        ),

        json_path_object: $ => seq(
            '.',
            $.identifier
        ),
    }
});

function sepBy1(sep, rule) {
    return seq(rule, repeat(seq(sep, rule)))
}

function sepBy(sep, rule) {
    return optional(sepBy1(sep, rule))
}

function attr(name, rule) {
    return seq(name, '=', '"', rule, '"')
}

function xPathFunction(name, rule) {
    return seq(name, '(', rule, ')')
}
