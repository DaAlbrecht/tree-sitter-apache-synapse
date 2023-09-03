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
            // TODO: add more mediators
        ),

        respond: $ => seq(
            '<respond/>'
        ),


        //log mediator can be self closing or have a body 
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
