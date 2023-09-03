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
            repeat($._endpoint_property),
            '</http>'
        ),

        _endpoint_attribute: $ => choice(
            $.uri_template,
            $.method,
        ),

        uri_template: $ => seq(
            'uri-template',
            '=',
            '"',
            $.identifier,
            '"'
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
            $.timeout,
            //TODO: add more endpoint properties 
        ),

        timeout: $ => seq(
            '<timeout>',
            field('duration', $.duration),
            field('response_action', $.response_action),
            '</timeout>'
        ),

        duration: $ => seq(
            '<duration>',
            field('number', $.number),
            '</duration>'
        ),

        response_action: $ => seq(
            '<responseAction>',
            $.boolean,
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
            'expression',
            '=',
            //TODO: add real expression grammar
            '"',
            $.identifier,
            '"'
        ),

        name: $ => seq(
            'name',
            '=',
            '"',
            $.identifier,
            '"'
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

        number: $ => /[0-9]+/,

        boolean: $ => choice(
            'true',
            'false',
        ),

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
    }
});
