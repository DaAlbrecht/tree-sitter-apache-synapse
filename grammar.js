module.exports = grammar({
    name: 'apachesynapse',

    rules: {
        // TODO: add the actual grammar rules
        source_file: $ => seq(
            optional($.xml_declaration),
            repeat($._definition),
        ),



        _definition: $ => choice(
            $.sequence_definition,
        ),

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
            // TODO: add more mediators
        ),

        respond: $ => seq(
            '<respond/>'
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
            choice(
                field('value', $.value),
                field('expression', $.expression),
            ),
            '/>'
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
            '<sequence>',
            //TODO: make own list of mediators
            optional(repeat($.mediator)),
            '</sequence>',
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
            field('else', $.else),
            '</filter>'
        ),

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
            $.method,
        ),


        method: $ => seq(
            'method',
            '=',
            '"',
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
            '"'
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

        blocking: $ => seq(
            'blocking',
            '=',
            '"',
            choice(
                'true',
                'false',
            ),
            '"'
        ),

        value: $ => seq(
            'value',
            '=',
            '"',
            $.identifier,
            '"'
        ),

        expression: $ => seq(
            attr('expression', choice(
                $.xpath,
                $.json_eval
            ))
        ),



        json_eval: $ => seq(
            'json-eval(',
            $.expression_string,
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

        identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,

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

        // xpath 
        xpath: $ => seq(
            repeat1(
                choice(
                    $._xpath_node,
                    $._xpath_selectors,
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
