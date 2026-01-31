/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "cadsim",

  extras: ($) => [/\s/],

  rules: {
    // cdl-file := [version-directive] (file-def | comment | blank-line)*
    source_file: ($) =>
      seq(
        optional($.version_directive),
        repeat(choice($.file_definition, $.comment)),
      ),

    // version-directive := "#cdl" ":" integer newline
    version_directive: ($) => seq("#cdl", ":", $.integer),

    // comment := "//" any-char* newline
    comment: ($) => token(seq("//", /.*/)),

    // file-def := file-type quoted-string newline [properties-block] (file-directive)*
    file_definition: ($) =>
      prec.right(
        seq(
          $.file_type,
          $.string,
          optional($.properties_block),
          repeat($.file_directive),
        ),
      ),

    // file-directive := configuration-block | depends-on-directive | drawing-directive | comment
    file_directive: ($) =>
      choice(
        $.configuration_block,
        $.depends_on_statement,
        $.drawing_of_statement,
        $.comment,
      ),

    // file-type := "mprt" | "masm" | "mdrw" | "easm"
    file_type: ($) => choice("mprt", "masm", "mdrw", "easm"),

    // properties-block := "properties:" newline (property | comment)*
    properties_block: ($) =>
      prec.right(seq("properties:", repeat(choice($.property, $.comment)))),

    // property := content-property | metadata-property | content-generate-property
    property: ($) =>
      choice(
        $.content_property,
        $.metadata_property,
        $.content_generate_property,
      ),

    // content-property := "content:" quoted-string
    content_property: ($) => seq("content:", $.string),

    // metadata-property := "metadata:" quoted-string "," quoted-string
    // Inline form: metadata: "key", "value"
    metadata_property: ($) => seq("metadata:", $.string, ",", $.string),

    // content-generate-property := "content_generate:" integer
    content_generate_property: ($) => seq("content_generate:", $.integer),

    // configuration-block := "configuration:" quoted-string newline (config-directive)*
    configuration_block: ($) =>
      prec.right(seq("configuration:", $.string, repeat($.config_directive))),

    // config-directive := active-modifier | metadata-property | depends-on-directive | comment
    config_directive: ($) =>
      choice(
        $.active_modifier,
        $.metadata_property,
        $.depends_on_statement,
        $.comment,
      ),

    // active-modifier := "active:" boolean
    active_modifier: ($) => seq("active:", $.boolean),

    // depends-on-directive := "depends-on:" quoted-string [config-selector] newline (ref-modifier | comment)*
    depends_on_statement: ($) =>
      prec.right(
        seq(
          "depends-on:",
          $.string,
          optional($.config_selector),
          repeat(choice($.ref_modifier, $.comment)),
        ),
      ),

    // config-selector := "@" quoted-string
    config_selector: ($) => seq("@", $.string),

    // ref-modifier := exclude-from-bom-modifier | hidden-modifier | suppressed-modifier
    ref_modifier: ($) =>
      choice(
        $.exclude_from_bom_modifier,
        $.hidden_modifier,
        $.suppressed_modifier,
      ),

    // exclude-from-bom-modifier := "exclude-from-bom:" boolean
    exclude_from_bom_modifier: ($) => seq("exclude-from-bom:", $.boolean),

    // hidden-modifier := "hidden:" boolean
    hidden_modifier: ($) => seq("hidden:", $.boolean),

    // suppressed-modifier := "suppressed:" boolean
    suppressed_modifier: ($) => seq("suppressed:", $.boolean),

    // drawing-directive := "drawing-of:" quoted-string
    drawing_of_statement: ($) => seq("drawing-of:", $.string),

    // boolean := "true" | "false"
    boolean: ($) => choice("true", "false"),

    // integer := [0-9]+
    integer: ($) => /[0-9]+/,

    // quoted-string := '"' (string-content | escape-sequence | interpolation)* '"'
    string: ($) =>
      seq(
        '"',
        repeat(choice($.string_content, $.escape_sequence, $.interpolation)),
        '"',
      ),

    // string-content := [^"\\$]+
    string_content: ($) => /[^"\\$]+/,

    // escape-sequence := "\\" any-char
    escape_sequence: ($) => /\\./,

    // interpolation := "$" identifier ":" quoted-string
    interpolation: ($) => seq("$", $.identifier, ":", /\\"[^"\\]*\\"/),

    // identifier := [A-Za-z_][A-Za-z0-9_]*
    identifier: ($) => /[A-Za-z_][A-Za-z0-9_]*/,
  },
});
