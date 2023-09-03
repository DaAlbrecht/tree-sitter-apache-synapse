module.exports = grammar({
    name: 'apachesynapse',

    rules: {
        // TODO: add the actual grammar rules
        source_file: $ => repeat($._definition),

        _definition: $ => choice(
            $.sequence_definition,
        ),

        sequence_definition: $ => seq(
            '<sequence',
            field('name', $.identifier),
            // TODO: add more attributes
            '>',
            repeat($.mediator),
            '</sequence>'
        ),

        mediator: $ => choice(
            $.log,
            $.respond,
            // TODO: add more mediators
        ),

        log: $ => seq(
            '<log',
            field('level', $.identifier),
            // TODO: add more attributes
            '>',
        ),

        respond: $ => seq(
            '<respond/>'
        ),

        identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,
    }
});
