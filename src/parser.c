#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 63
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 58
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_POUNDcdl = 1,
  anon_sym_COLON = 2,
  sym_comment = 3,
  anon_sym_mprt = 4,
  anon_sym_masm = 5,
  anon_sym_mdrw = 6,
  anon_sym_easm = 7,
  anon_sym_properties_COLON = 8,
  anon_sym_content_COLON = 9,
  anon_sym_metadata_COLON = 10,
  anon_sym_content_generate_COLON = 11,
  anon_sym_configuration_COLON = 12,
  anon_sym_active_COLON = 13,
  anon_sym_depends_DASHon_COLON = 14,
  anon_sym_AT = 15,
  anon_sym_exclude_DASHfrom_DASHbom_COLON = 16,
  anon_sym_hidden_COLON = 17,
  anon_sym_suppressed_COLON = 18,
  anon_sym_drawing_DASHof_COLON = 19,
  anon_sym_true = 20,
  anon_sym_false = 21,
  sym_integer = 22,
  anon_sym_DQUOTE = 23,
  sym_string_content = 24,
  sym_escape_sequence = 25,
  anon_sym_DOLLAR = 26,
  aux_sym_interpolation_token1 = 27,
  sym_identifier = 28,
  sym_source_file = 29,
  sym_version_directive = 30,
  sym_file_definition = 31,
  sym_file_directive = 32,
  sym_file_type = 33,
  sym_properties_block = 34,
  sym_property = 35,
  sym_content_property = 36,
  sym_metadata_property = 37,
  sym_content_generate_property = 38,
  sym_configuration_block = 39,
  sym_config_directive = 40,
  sym_active_modifier = 41,
  sym_depends_on_statement = 42,
  sym_config_selector = 43,
  sym_ref_modifier = 44,
  sym_exclude_from_bom_modifier = 45,
  sym_hidden_modifier = 46,
  sym_suppressed_modifier = 47,
  sym_drawing_of_statement = 48,
  sym_boolean = 49,
  sym_string = 50,
  sym_interpolation = 51,
  aux_sym_source_file_repeat1 = 52,
  aux_sym_file_definition_repeat1 = 53,
  aux_sym_properties_block_repeat1 = 54,
  aux_sym_configuration_block_repeat1 = 55,
  aux_sym_depends_on_statement_repeat1 = 56,
  aux_sym_string_repeat1 = 57,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUNDcdl] = "#cdl",
  [anon_sym_COLON] = ":",
  [sym_comment] = "comment",
  [anon_sym_mprt] = "mprt",
  [anon_sym_masm] = "masm",
  [anon_sym_mdrw] = "mdrw",
  [anon_sym_easm] = "easm",
  [anon_sym_properties_COLON] = "properties:",
  [anon_sym_content_COLON] = "content:",
  [anon_sym_metadata_COLON] = "metadata:",
  [anon_sym_content_generate_COLON] = "content_generate:",
  [anon_sym_configuration_COLON] = "configuration:",
  [anon_sym_active_COLON] = "active:",
  [anon_sym_depends_DASHon_COLON] = "depends-on:",
  [anon_sym_AT] = "@",
  [anon_sym_exclude_DASHfrom_DASHbom_COLON] = "exclude-from-bom:",
  [anon_sym_hidden_COLON] = "hidden:",
  [anon_sym_suppressed_COLON] = "suppressed:",
  [anon_sym_drawing_DASHof_COLON] = "drawing-of:",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_integer] = "integer",
  [anon_sym_DQUOTE] = "\"",
  [sym_string_content] = "string_content",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_DOLLAR] = "$",
  [aux_sym_interpolation_token1] = "interpolation_token1",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym_version_directive] = "version_directive",
  [sym_file_definition] = "file_definition",
  [sym_file_directive] = "file_directive",
  [sym_file_type] = "file_type",
  [sym_properties_block] = "properties_block",
  [sym_property] = "property",
  [sym_content_property] = "content_property",
  [sym_metadata_property] = "metadata_property",
  [sym_content_generate_property] = "content_generate_property",
  [sym_configuration_block] = "configuration_block",
  [sym_config_directive] = "config_directive",
  [sym_active_modifier] = "active_modifier",
  [sym_depends_on_statement] = "depends_on_statement",
  [sym_config_selector] = "config_selector",
  [sym_ref_modifier] = "ref_modifier",
  [sym_exclude_from_bom_modifier] = "exclude_from_bom_modifier",
  [sym_hidden_modifier] = "hidden_modifier",
  [sym_suppressed_modifier] = "suppressed_modifier",
  [sym_drawing_of_statement] = "drawing_of_statement",
  [sym_boolean] = "boolean",
  [sym_string] = "string",
  [sym_interpolation] = "interpolation",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_file_definition_repeat1] = "file_definition_repeat1",
  [aux_sym_properties_block_repeat1] = "properties_block_repeat1",
  [aux_sym_configuration_block_repeat1] = "configuration_block_repeat1",
  [aux_sym_depends_on_statement_repeat1] = "depends_on_statement_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_POUNDcdl] = anon_sym_POUNDcdl,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_comment] = sym_comment,
  [anon_sym_mprt] = anon_sym_mprt,
  [anon_sym_masm] = anon_sym_masm,
  [anon_sym_mdrw] = anon_sym_mdrw,
  [anon_sym_easm] = anon_sym_easm,
  [anon_sym_properties_COLON] = anon_sym_properties_COLON,
  [anon_sym_content_COLON] = anon_sym_content_COLON,
  [anon_sym_metadata_COLON] = anon_sym_metadata_COLON,
  [anon_sym_content_generate_COLON] = anon_sym_content_generate_COLON,
  [anon_sym_configuration_COLON] = anon_sym_configuration_COLON,
  [anon_sym_active_COLON] = anon_sym_active_COLON,
  [anon_sym_depends_DASHon_COLON] = anon_sym_depends_DASHon_COLON,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_exclude_DASHfrom_DASHbom_COLON] = anon_sym_exclude_DASHfrom_DASHbom_COLON,
  [anon_sym_hidden_COLON] = anon_sym_hidden_COLON,
  [anon_sym_suppressed_COLON] = anon_sym_suppressed_COLON,
  [anon_sym_drawing_DASHof_COLON] = anon_sym_drawing_DASHof_COLON,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_integer] = sym_integer,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_string_content] = sym_string_content,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [aux_sym_interpolation_token1] = aux_sym_interpolation_token1,
  [sym_identifier] = sym_identifier,
  [sym_source_file] = sym_source_file,
  [sym_version_directive] = sym_version_directive,
  [sym_file_definition] = sym_file_definition,
  [sym_file_directive] = sym_file_directive,
  [sym_file_type] = sym_file_type,
  [sym_properties_block] = sym_properties_block,
  [sym_property] = sym_property,
  [sym_content_property] = sym_content_property,
  [sym_metadata_property] = sym_metadata_property,
  [sym_content_generate_property] = sym_content_generate_property,
  [sym_configuration_block] = sym_configuration_block,
  [sym_config_directive] = sym_config_directive,
  [sym_active_modifier] = sym_active_modifier,
  [sym_depends_on_statement] = sym_depends_on_statement,
  [sym_config_selector] = sym_config_selector,
  [sym_ref_modifier] = sym_ref_modifier,
  [sym_exclude_from_bom_modifier] = sym_exclude_from_bom_modifier,
  [sym_hidden_modifier] = sym_hidden_modifier,
  [sym_suppressed_modifier] = sym_suppressed_modifier,
  [sym_drawing_of_statement] = sym_drawing_of_statement,
  [sym_boolean] = sym_boolean,
  [sym_string] = sym_string,
  [sym_interpolation] = sym_interpolation,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_file_definition_repeat1] = aux_sym_file_definition_repeat1,
  [aux_sym_properties_block_repeat1] = aux_sym_properties_block_repeat1,
  [aux_sym_configuration_block_repeat1] = aux_sym_configuration_block_repeat1,
  [aux_sym_depends_on_statement_repeat1] = aux_sym_depends_on_statement_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUNDcdl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_mprt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_masm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mdrw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_easm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_properties_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_content_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_metadata_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_content_generate_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_configuration_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_active_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_depends_DASHon_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exclude_DASHfrom_DASHbom_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hidden_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_suppressed_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_drawing_DASHof_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_interpolation_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_version_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_file_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_file_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_file_type] = {
    .visible = true,
    .named = true,
  },
  [sym_properties_block] = {
    .visible = true,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym_content_property] = {
    .visible = true,
    .named = true,
  },
  [sym_metadata_property] = {
    .visible = true,
    .named = true,
  },
  [sym_content_generate_property] = {
    .visible = true,
    .named = true,
  },
  [sym_configuration_block] = {
    .visible = true,
    .named = true,
  },
  [sym_config_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_active_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_depends_on_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_config_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_ref_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_exclude_from_bom_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_hidden_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_suppressed_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_drawing_of_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolation] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_file_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_properties_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_configuration_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_depends_on_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(127);
      ADVANCE_MAP(
        '"', 150,
        '#', 32,
        '$', 154,
        '/', 8,
        ':', 129,
        '@', 142,
        '\\', 126,
        'a', 33,
        'c', 84,
        'd', 42,
        'e', 22,
        'f', 23,
        'h', 65,
        'm', 28,
        'p', 95,
        's', 119,
        't', 96,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(150);
      if (lookahead == '$') ADVANCE(154);
      if (lookahead == '\\') ADVANCE(126);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(151);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(21);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(155);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(59);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(31);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(85);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(88);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(130);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(140);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(144);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(136);
      if (lookahead == '_') ADVANCE(62);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(137);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(141);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(146);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(135);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(145);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(139);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(138);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(143);
      END_STATE();
    case 20:
      if (lookahead == '\\') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 21:
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(104);
      if (lookahead == 'x') ADVANCE(34);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(106);
      if (lookahead == 'd') ADVANCE(97);
      if (lookahead == 'e') ADVANCE(114);
      if (lookahead == 'p') ADVANCE(98);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 31:
      if (lookahead == 'b') ADVANCE(87);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(35);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(113);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(105);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(29);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 57:
      if (lookahead == 'f') ADVANCE(64);
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 58:
      if (lookahead == 'f') ADVANCE(14);
      END_STATE();
    case 59:
      if (lookahead == 'f') ADVANCE(99);
      END_STATE();
    case 60:
      if (lookahead == 'g') ADVANCE(6);
      END_STATE();
    case 61:
      if (lookahead == 'g') ADVANCE(122);
      END_STATE();
    case 62:
      if (lookahead == 'g') ADVANCE(54);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 72:
      if (lookahead == 'm') ADVANCE(134);
      END_STATE();
    case 73:
      if (lookahead == 'm') ADVANCE(132);
      END_STATE();
    case 74:
      if (lookahead == 'm') ADVANCE(5);
      END_STATE();
    case 75:
      if (lookahead == 'm') ADVANCE(19);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 91:
      if (lookahead == 'p') ADVANCE(46);
      END_STATE();
    case 92:
      if (lookahead == 'p') ADVANCE(94);
      END_STATE();
    case 93:
      if (lookahead == 'p') ADVANCE(52);
      END_STATE();
    case 94:
      if (lookahead == 'p') ADVANCE(101);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 104:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 105:
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 106:
      if (lookahead == 's') ADVANCE(73);
      END_STATE();
    case 107:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 108:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 109:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 110:
      if (lookahead == 's') ADVANCE(109);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 119:
      if (lookahead == 'u') ADVANCE(92);
      END_STATE();
    case 120:
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 121:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 122:
      if (lookahead == 'u') ADVANCE(100);
      END_STATE();
    case 123:
      if (lookahead == 'v') ADVANCE(45);
      END_STATE();
    case 124:
      if (lookahead == 'w') ADVANCE(133);
      END_STATE();
    case 125:
      if (lookahead == 'w') ADVANCE(66);
      END_STATE();
    case 126:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(153);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_POUNDcdl);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_mprt);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_masm);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_mdrw);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_easm);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_properties_COLON);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_content_COLON);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_metadata_COLON);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_content_generate_COLON);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_configuration_COLON);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_active_COLON);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_depends_DASHon_COLON);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_exclude_DASHfrom_DASHbom_COLON);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_hidden_COLON);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_suppressed_COLON);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_drawing_DASHof_COLON);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_string_content);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(152);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 20},
  [56] = {.lex_state = 20},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUNDcdl] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_mprt] = ACTIONS(1),
    [anon_sym_masm] = ACTIONS(1),
    [anon_sym_mdrw] = ACTIONS(1),
    [anon_sym_easm] = ACTIONS(1),
    [anon_sym_properties_COLON] = ACTIONS(1),
    [anon_sym_content_COLON] = ACTIONS(1),
    [anon_sym_metadata_COLON] = ACTIONS(1),
    [anon_sym_content_generate_COLON] = ACTIONS(1),
    [anon_sym_configuration_COLON] = ACTIONS(1),
    [anon_sym_active_COLON] = ACTIONS(1),
    [anon_sym_depends_DASHon_COLON] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_exclude_DASHfrom_DASHbom_COLON] = ACTIONS(1),
    [anon_sym_hidden_COLON] = ACTIONS(1),
    [anon_sym_suppressed_COLON] = ACTIONS(1),
    [anon_sym_drawing_DASHof_COLON] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(58),
    [sym_version_directive] = STATE(32),
    [sym_file_definition] = STATE(35),
    [sym_file_type] = STATE(52),
    [aux_sym_source_file_repeat1] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUNDcdl] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [anon_sym_mprt] = ACTIONS(9),
    [anon_sym_masm] = ACTIONS(9),
    [anon_sym_mdrw] = ACTIONS(9),
    [anon_sym_easm] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      anon_sym_exclude_DASHfrom_DASHbom_COLON,
    ACTIONS(19), 1,
      anon_sym_hidden_COLON,
    ACTIONS(21), 1,
      anon_sym_suppressed_COLON,
    STATE(3), 1,
      sym_config_selector,
    STATE(7), 2,
      sym_ref_modifier,
      aux_sym_depends_on_statement_repeat1,
    STATE(21), 3,
      sym_exclude_from_bom_modifier,
      sym_hidden_modifier,
      sym_suppressed_modifier,
    ACTIONS(11), 10,
      ts_builtin_sym_end,
      anon_sym_mprt,
      anon_sym_masm,
      anon_sym_mdrw,
      anon_sym_easm,
      anon_sym_metadata_COLON,
      anon_sym_configuration_COLON,
      anon_sym_active_COLON,
      anon_sym_depends_DASHon_COLON,
      anon_sym_drawing_DASHof_COLON,
  [40] = 7,
    ACTIONS(17), 1,
      anon_sym_exclude_DASHfrom_DASHbom_COLON,
    ACTIONS(19), 1,
      anon_sym_hidden_COLON,
    ACTIONS(21), 1,
      anon_sym_suppressed_COLON,
    ACTIONS(25), 1,
      sym_comment,
    STATE(8), 2,
      sym_ref_modifier,
      aux_sym_depends_on_statement_repeat1,
    STATE(21), 3,
      sym_exclude_from_bom_modifier,
      sym_hidden_modifier,
      sym_suppressed_modifier,
    ACTIONS(23), 10,
      ts_builtin_sym_end,
      anon_sym_mprt,
      anon_sym_masm,
      anon_sym_mdrw,
      anon_sym_easm,
      anon_sym_metadata_COLON,
      anon_sym_configuration_COLON,
      anon_sym_active_COLON,
      anon_sym_depends_DASHon_COLON,
      anon_sym_drawing_DASHof_COLON,
  [74] = 7,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(32), 1,
      anon_sym_exclude_DASHfrom_DASHbom_COLON,
    ACTIONS(35), 1,
      anon_sym_hidden_COLON,
    ACTIONS(38), 1,
      anon_sym_suppressed_COLON,
    STATE(4), 2,
      sym_ref_modifier,
      aux_sym_depends_on_statement_repeat1,
    STATE(21), 3,
      sym_exclude_from_bom_modifier,
      sym_hidden_modifier,
      sym_suppressed_modifier,
    ACTIONS(27), 10,
      ts_builtin_sym_end,
      anon_sym_mprt,
      anon_sym_masm,
      anon_sym_mdrw,
      anon_sym_easm,
      anon_sym_metadata_COLON,
      anon_sym_configuration_COLON,
      anon_sym_active_COLON,
      anon_sym_depends_DASHon_COLON,
      anon_sym_drawing_DASHof_COLON,
  [108] = 1,
    ACTIONS(41), 19,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_mprt,
      anon_sym_masm,
      anon_sym_mdrw,
      anon_sym_easm,
      anon_sym_properties_COLON,
      anon_sym_content_COLON,
      anon_sym_metadata_COLON,
      anon_sym_content_generate_COLON,
      anon_sym_configuration_COLON,
      anon_sym_active_COLON,
      anon_sym_depends_DASHon_COLON,
      anon_sym_AT,
      anon_sym_exclude_DASHfrom_DASHbom_COLON,
      anon_sym_hidden_COLON,
      anon_sym_suppressed_COLON,
      anon_sym_drawing_DASHof_COLON,
      anon_sym_DQUOTE,
  [130] = 1,
    ACTIONS(43), 19,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_mprt,
      anon_sym_masm,
      anon_sym_mdrw,
      anon_sym_easm,
      anon_sym_properties_COLON,
      anon_sym_content_COLON,
      anon_sym_metadata_COLON,
      anon_sym_content_generate_COLON,
      anon_sym_configuration_COLON,
      anon_sym_active_COLON,
      anon_sym_depends_DASHon_COLON,
      anon_sym_AT,
      anon_sym_exclude_DASHfrom_DASHbom_COLON,
      anon_sym_hidden_COLON,
      anon_sym_suppressed_COLON,
      anon_sym_drawing_DASHof_COLON,
      anon_sym_DQUOTE,
  [152] = 7,
    ACTIONS(17), 1,
      anon_sym_exclude_DASHfrom_DASHbom_COLON,
    ACTIONS(19), 1,
      anon_sym_hidden_COLON,
    ACTIONS(21), 1,
      anon_sym_suppressed_COLON,
    ACTIONS(45), 1,
      sym_comment,
    STATE(4), 2,
      sym_ref_modifier,
      aux_sym_depends_on_statement_repeat1,
    STATE(21), 3,
      sym_exclude_from_bom_modifier,
      sym_hidden_modifier,
      sym_suppressed_modifier,
    ACTIONS(23), 10,
      ts_builtin_sym_end,
      anon_sym_mprt,
      anon_sym_masm,
      anon_sym_mdrw,
      anon_sym_easm,
      anon_sym_metadata_COLON,
      anon_sym_configuration_COLON,
      anon_sym_active_COLON,
      anon_sym_depends_DASHon_COLON,
      anon_sym_drawing_DASHof_COLON,
  [186] = 7,
    ACTIONS(17), 1,
      anon_sym_exclude_DASHfrom_DASHbom_COLON,
    ACTIONS(19), 1,
      anon_sym_hidden_COLON,
    ACTIONS(21), 1,
      anon_sym_suppressed_COLON,
    ACTIONS(45), 1,
      sym_comment,
    STATE(4), 2,
      sym_ref_modifier,
      aux_sym_depends_on_statement_repeat1,
    STATE(21), 3,
      sym_exclude_from_bom_modifier,
      sym_hidden_modifier,
      sym_suppressed_modifier,
    ACTIONS(47), 10,
      ts_builtin_sym_end,
      anon_sym_mprt,
      anon_sym_masm,
      anon_sym_mdrw,
      anon_sym_easm,
      anon_sym_metadata_COLON,
      anon_sym_configuration_COLON,
      anon_sym_active_COLON,
      anon_sym_depends_DASHon_COLON,
      anon_sym_drawing_DASHof_COLON,
  [220] = 7,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_content_COLON,
    ACTIONS(55), 1,
      anon_sym_metadata_COLON,
    ACTIONS(57), 1,
      anon_sym_content_generate_COLON,
    STATE(10), 2,
      sym_property,
      aux_sym_properties_block_repeat1,
    STATE(27), 3,
      sym_content_property,
      sym_metadata_property,
      sym_content_generate_property,
    ACTIONS(49), 8,
      ts_builtin_sym_end,
      anon_sym_mprt,
      anon_sym_masm,
      anon_sym_mdrw,
      anon_sym_easm,
      anon_sym_configuration_COLON,
      anon_sym_depends_DASHon_COLON,
      anon_sym_drawing_DASHof_COLON,
  [252] = 7,
    ACTIONS(53), 1,
      anon_sym_content_COLON,
    ACTIONS(55), 1,
      anon_sym_metadata_COLON,
    ACTIONS(57), 1,
      anon_sym_content_generate_COLON,
    ACTIONS(61), 1,
      sym_comment,
    STATE(11), 2,
      sym_property,
      aux_sym_properties_block_repeat1,
    STATE(27), 3,
      sym_content_property,
      sym_metadata_property,
      sym_content_generate_property,
    ACTIONS(59), 8,
      ts_builtin_sym_end,
      anon_sym_mprt,
      anon_sym_masm,
      anon_sym_mdrw,
      anon_sym_easm,
      anon_sym_configuration_COLON,
      anon_sym_depends_DASHon_COLON,
      anon_sym_drawing_DASHof_COLON,
  [284] = 7,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_content_COLON,
    ACTIONS(71), 1,
      anon_sym_metadata_COLON,
    ACTIONS(74), 1,
      anon_sym_content_generate_COLON,
    STATE(11), 2,
      sym_property,
      aux_sym_properties_block_repeat1,
    STATE(27), 3,
      sym_content_property,
      sym_metadata_property,
      sym_content_generate_property,
    ACTIONS(63), 8,
      ts_builtin_sym_end,
      anon_sym_mprt,
      anon_sym_masm,
      anon_sym_mdrw,
      anon_sym_easm,
      anon_sym_configuration_COLON,
      anon_sym_depends_DASHon_COLON,
      anon_sym_drawing_DASHof_COLON,
  [316] = 7,
    ACTIONS(55), 1,
      anon_sym_metadata_COLON,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_active_COLON,
    ACTIONS(83), 1,
      anon_sym_depends_DASHon_COLON,
    STATE(15), 2,
      sym_config_directive,
      aux_sym_configuration_block_repeat1,
    STATE(31), 3,
      sym_metadata_property,
      sym_active_modifier,
      sym_depends_on_statement,
    ACTIONS(77), 7,
      ts_builtin_sym_end,
      anon_sym_mprt,
      anon_sym_masm,
      anon_sym_mdrw,
      anon_sym_easm,
      anon_sym_configuration_COLON,
      anon_sym_drawing_DASHof_COLON,
  [347] = 9,
    ACTIONS(83), 1,
      anon_sym_depends_DASHon_COLON,
    ACTIONS(87), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_properties_COLON,
    ACTIONS(91), 1,
      anon_sym_configuration_COLON,
    ACTIONS(93), 1,
      anon_sym_drawing_DASHof_COLON,
    STATE(17), 1,
      sym_properties_block,
    STATE(16), 2,
      sym_file_directive,
      aux_sym_file_definition_repeat1,
    STATE(33), 3,
      sym_configuration_block,
      sym_depends_on_statement,
      sym_drawing_of_statement,
    ACTIONS(85), 5,
      ts_builtin_sym_end,
      anon_sym_mprt,
      anon_sym_masm,
      anon_sym_mdrw,
      anon_sym_easm,
  [382] = 7,
    ACTIONS(97), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_metadata_COLON,
    ACTIONS(103), 1,
      anon_sym_active_COLON,
    ACTIONS(106), 1,
      anon_sym_depends_DASHon_COLON,
    STATE(14), 2,
      sym_config_directive,
      aux_sym_configuration_block_repeat1,
    STATE(31), 3,
      sym_metadata_property,
      sym_active_modifier,
      sym_depends_on_statement,
    ACTIONS(95), 7,
      ts_builtin_sym_end,
      anon_sym_mprt,
      anon_sym_masm,
      anon_sym_mdrw,
      anon_sym_easm,
      anon_sym_configuration_COLON,
      anon_sym_drawing_DASHof_COLON,
  [413] = 7,
    ACTIONS(55), 1,
      anon_sym_metadata_COLON,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_active_COLON,
    ACTIONS(83), 1,
      anon_sym_depends_DASHon_COLON,
    STATE(14), 2,
      sym_config_directive,
      aux_sym_configuration_block_repeat1,
    STATE(31), 3,
      sym_metadata_property,
      sym_active_modifier,
      sym_depends_on_statement,
    ACTIONS(109), 7,
      ts_builtin_sym_end,
      anon_sym_mprt,
      anon_sym_masm,
      anon_sym_mdrw,
      anon_sym_easm,
      anon_sym_configuration_COLON,
      anon_sym_drawing_DASHof_COLON,
  [444] = 7,
    ACTIONS(83), 1,
      anon_sym_depends_DASHon_COLON,
    ACTIONS(87), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_configuration_COLON,
    ACTIONS(93), 1,
      anon_sym_drawing_DASHof_COLON,
    STATE(19), 2,
      sym_file_directive,
      aux_sym_file_definition_repeat1,
    STATE(33), 3,
      sym_configuration_block,
      sym_depends_on_statement,
      sym_drawing_of_statement,
    ACTIONS(111), 5,
      ts_builtin_sym_end,
      anon_sym_mprt,
      anon_sym_masm,
      anon_sym_mdrw,
      anon_sym_easm,
  [473] = 7,
    ACTIONS(83), 1,
      anon_sym_depends_DASHon_COLON,
    ACTIONS(87), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_configuration_COLON,
    ACTIONS(93), 1,
      anon_sym_drawing_DASHof_COLON,
    STATE(18), 2,
      sym_file_directive,
      aux_sym_file_definition_repeat1,
    STATE(33), 3,
      sym_configuration_block,
      sym_depends_on_statement,
      sym_drawing_of_statement,
    ACTIONS(111), 5,
      ts_builtin_sym_end,
      anon_sym_mprt,
      anon_sym_masm,
      anon_sym_mdrw,
      anon_sym_easm,
  [502] = 7,
    ACTIONS(83), 1,
      anon_sym_depends_DASHon_COLON,
    ACTIONS(87), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_configuration_COLON,
    ACTIONS(93), 1,
      anon_sym_drawing_DASHof_COLON,
    STATE(19), 2,
      sym_file_directive,
      aux_sym_file_definition_repeat1,
    STATE(33), 3,
      sym_configuration_block,
      sym_depends_on_statement,
      sym_drawing_of_statement,
    ACTIONS(113), 5,
      ts_builtin_sym_end,
      anon_sym_mprt,
      anon_sym_masm,
      anon_sym_mdrw,
      anon_sym_easm,
  [531] = 7,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_configuration_COLON,
    ACTIONS(123), 1,
      anon_sym_depends_DASHon_COLON,
    ACTIONS(126), 1,
      anon_sym_drawing_DASHof_COLON,
    STATE(19), 2,
      sym_file_directive,
      aux_sym_file_definition_repeat1,
    STATE(33), 3,
      sym_configuration_block,
      sym_depends_on_statement,
      sym_drawing_of_statement,
    ACTIONS(115), 5,
      ts_builtin_sym_end,
      anon_sym_mprt,
      anon_sym_masm,
      anon_sym_mdrw,
      anon_sym_easm,
  [560] = 1,
    ACTIONS(129), 14,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_mprt,
      anon_sym_masm,
      anon_sym_mdrw,
      anon_sym_easm,
      anon_sym_metadata_COLON,
      anon_sym_configuration_COLON,
      anon_sym_active_COLON,
      anon_sym_depends_DASHon_COLON,
      anon_sym_exclude_DASHfrom_DASHbom_COLON,
      anon_sym_hidden_COLON,
      anon_sym_suppressed_COLON,
      anon_sym_drawing_DASHof_COLON,
  [577] = 1,
    ACTIONS(131), 14,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_mprt,
      anon_sym_masm,
      anon_sym_mdrw,
      anon_sym_easm,
      anon_sym_metadata_COLON,
      anon_sym_configuration_COLON,
      anon_sym_active_COLON,
      anon_sym_depends_DASHon_COLON,
      anon_sym_exclude_DASHfrom_DASHbom_COLON,
      anon_sym_hidden_COLON,
      anon_sym_suppressed_COLON,
      anon_sym_drawing_DASHof_COLON,
  [594] = 1,
    ACTIONS(133), 14,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_mprt,
      anon_sym_masm,
      anon_sym_mdrw,
      anon_sym_easm,
      anon_sym_metadata_COLON,
      anon_sym_configuration_COLON,
      anon_sym_active_COLON,
      anon_sym_depends_DASHon_COLON,
      anon_sym_exclude_DASHfrom_DASHbom_COLON,
      anon_sym_hidden_COLON,
      anon_sym_suppressed_COLON,
      anon_sym_drawing_DASHof_COLON,
  [611] = 1,
    ACTIONS(135), 14,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_mprt,
      anon_sym_masm,
      anon_sym_mdrw,
      anon_sym_easm,
      anon_sym_metadata_COLON,
      anon_sym_configuration_COLON,
      anon_sym_active_COLON,
      anon_sym_depends_DASHon_COLON,
      anon_sym_exclude_DASHfrom_DASHbom_COLON,
      anon_sym_hidden_COLON,
      anon_sym_suppressed_COLON,
      anon_sym_drawing_DASHof_COLON,
  [628] = 1,
    ACTIONS(137), 14,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_mprt,
      anon_sym_masm,
      anon_sym_mdrw,
      anon_sym_easm,
      anon_sym_metadata_COLON,
      anon_sym_configuration_COLON,
      anon_sym_active_COLON,
      anon_sym_depends_DASHon_COLON,
      anon_sym_exclude_DASHfrom_DASHbom_COLON,
      anon_sym_hidden_COLON,
      anon_sym_suppressed_COLON,
      anon_sym_drawing_DASHof_COLON,
  [645] = 1,
    ACTIONS(139), 14,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_mprt,
      anon_sym_masm,
      anon_sym_mdrw,
      anon_sym_easm,
      anon_sym_metadata_COLON,
      anon_sym_configuration_COLON,
      anon_sym_active_COLON,
      anon_sym_depends_DASHon_COLON,
      anon_sym_exclude_DASHfrom_DASHbom_COLON,
      anon_sym_hidden_COLON,
      anon_sym_suppressed_COLON,
      anon_sym_drawing_DASHof_COLON,
  [662] = 1,
    ACTIONS(141), 13,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_mprt,
      anon_sym_masm,
      anon_sym_mdrw,
      anon_sym_easm,
      anon_sym_content_COLON,
      anon_sym_metadata_COLON,
      anon_sym_content_generate_COLON,
      anon_sym_configuration_COLON,
      anon_sym_active_COLON,
      anon_sym_depends_DASHon_COLON,
      anon_sym_drawing_DASHof_COLON,
  [678] = 1,
    ACTIONS(143), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_mprt,
      anon_sym_masm,
      anon_sym_mdrw,
      anon_sym_easm,
      anon_sym_content_COLON,
      anon_sym_metadata_COLON,
      anon_sym_content_generate_COLON,
      anon_sym_configuration_COLON,
      anon_sym_depends_DASHon_COLON,
      anon_sym_drawing_DASHof_COLON,
  [693] = 1,
    ACTIONS(145), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_mprt,
      anon_sym_masm,
      anon_sym_mdrw,
      anon_sym_easm,
      anon_sym_content_COLON,
      anon_sym_metadata_COLON,
      anon_sym_content_generate_COLON,
      anon_sym_configuration_COLON,
      anon_sym_depends_DASHon_COLON,
      anon_sym_drawing_DASHof_COLON,
  [708] = 1,
    ACTIONS(147), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_mprt,
      anon_sym_masm,
      anon_sym_mdrw,
      anon_sym_easm,
      anon_sym_content_COLON,
      anon_sym_metadata_COLON,
      anon_sym_content_generate_COLON,
      anon_sym_configuration_COLON,
      anon_sym_depends_DASHon_COLON,
      anon_sym_drawing_DASHof_COLON,
  [723] = 1,
    ACTIONS(149), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_mprt,
      anon_sym_masm,
      anon_sym_mdrw,
      anon_sym_easm,
      anon_sym_metadata_COLON,
      anon_sym_configuration_COLON,
      anon_sym_active_COLON,
      anon_sym_depends_DASHon_COLON,
      anon_sym_drawing_DASHof_COLON,
  [737] = 1,
    ACTIONS(151), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_mprt,
      anon_sym_masm,
      anon_sym_mdrw,
      anon_sym_easm,
      anon_sym_metadata_COLON,
      anon_sym_configuration_COLON,
      anon_sym_active_COLON,
      anon_sym_depends_DASHon_COLON,
      anon_sym_drawing_DASHof_COLON,
  [751] = 5,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    ACTIONS(155), 1,
      sym_comment,
    STATE(52), 1,
      sym_file_type,
    STATE(37), 2,
      sym_file_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(9), 4,
      anon_sym_mprt,
      anon_sym_masm,
      anon_sym_mdrw,
      anon_sym_easm,
  [771] = 1,
    ACTIONS(157), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_mprt,
      anon_sym_masm,
      anon_sym_mdrw,
      anon_sym_easm,
      anon_sym_configuration_COLON,
      anon_sym_depends_DASHon_COLON,
      anon_sym_drawing_DASHof_COLON,
  [783] = 1,
    ACTIONS(159), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_mprt,
      anon_sym_masm,
      anon_sym_mdrw,
      anon_sym_easm,
      anon_sym_configuration_COLON,
      anon_sym_depends_DASHon_COLON,
      anon_sym_drawing_DASHof_COLON,
  [795] = 5,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    ACTIONS(161), 1,
      sym_comment,
    STATE(52), 1,
      sym_file_type,
    STATE(36), 2,
      sym_file_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(9), 4,
      anon_sym_mprt,
      anon_sym_masm,
      anon_sym_mdrw,
      anon_sym_easm,
  [815] = 5,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
    ACTIONS(165), 1,
      sym_comment,
    STATE(52), 1,
      sym_file_type,
    STATE(36), 2,
      sym_file_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(168), 4,
      anon_sym_mprt,
      anon_sym_masm,
      anon_sym_mdrw,
      anon_sym_easm,
  [835] = 5,
    ACTIONS(161), 1,
      sym_comment,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    STATE(52), 1,
      sym_file_type,
    STATE(36), 2,
      sym_file_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(9), 4,
      anon_sym_mprt,
      anon_sym_masm,
      anon_sym_mdrw,
      anon_sym_easm,
  [855] = 5,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      sym_string_content,
    ACTIONS(177), 1,
      sym_escape_sequence,
    ACTIONS(179), 1,
      anon_sym_DOLLAR,
    STATE(41), 2,
      sym_interpolation,
      aux_sym_string_repeat1,
  [872] = 1,
    ACTIONS(181), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_mprt,
      anon_sym_masm,
      anon_sym_mdrw,
      anon_sym_easm,
  [881] = 5,
    ACTIONS(179), 1,
      anon_sym_DOLLAR,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
    ACTIONS(185), 1,
      sym_string_content,
    ACTIONS(187), 1,
      sym_escape_sequence,
    STATE(38), 2,
      sym_interpolation,
      aux_sym_string_repeat1,
  [898] = 5,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(191), 1,
      sym_string_content,
    ACTIONS(194), 1,
      sym_escape_sequence,
    ACTIONS(197), 1,
      anon_sym_DOLLAR,
    STATE(41), 2,
      sym_interpolation,
      aux_sym_string_repeat1,
  [915] = 2,
    ACTIONS(202), 1,
      sym_string_content,
    ACTIONS(200), 3,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      anon_sym_DOLLAR,
  [924] = 2,
    STATE(30), 1,
      sym_boolean,
    ACTIONS(204), 2,
      anon_sym_true,
      anon_sym_false,
  [932] = 2,
    STATE(23), 1,
      sym_boolean,
    ACTIONS(204), 2,
      anon_sym_true,
      anon_sym_false,
  [940] = 2,
    STATE(24), 1,
      sym_boolean,
    ACTIONS(204), 2,
      anon_sym_true,
      anon_sym_false,
  [948] = 2,
    STATE(25), 1,
      sym_boolean,
    ACTIONS(204), 2,
      anon_sym_true,
      anon_sym_false,
  [956] = 2,
    ACTIONS(206), 1,
      anon_sym_DQUOTE,
    STATE(49), 1,
      sym_string,
  [963] = 2,
    ACTIONS(206), 1,
      anon_sym_DQUOTE,
    STATE(22), 1,
      sym_string,
  [970] = 2,
    ACTIONS(206), 1,
      anon_sym_DQUOTE,
    STATE(26), 1,
      sym_string,
  [977] = 2,
    ACTIONS(206), 1,
      anon_sym_DQUOTE,
    STATE(12), 1,
      sym_string,
  [984] = 2,
    ACTIONS(206), 1,
      anon_sym_DQUOTE,
    STATE(2), 1,
      sym_string,
  [991] = 2,
    ACTIONS(206), 1,
      anon_sym_DQUOTE,
    STATE(13), 1,
      sym_string,
  [998] = 2,
    ACTIONS(206), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      sym_string,
  [1005] = 2,
    ACTIONS(206), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      sym_string,
  [1012] = 1,
    ACTIONS(208), 1,
      sym_identifier,
  [1016] = 1,
    ACTIONS(210), 1,
      aux_sym_interpolation_token1,
  [1020] = 1,
    ACTIONS(212), 1,
      sym_integer,
  [1024] = 1,
    ACTIONS(214), 1,
      ts_builtin_sym_end,
  [1028] = 1,
    ACTIONS(216), 1,
      sym_integer,
  [1032] = 1,
    ACTIONS(218), 1,
      anon_sym_DQUOTE,
  [1036] = 1,
    ACTIONS(220), 1,
      anon_sym_COLON,
  [1040] = 1,
    ACTIONS(222), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 74,
  [SMALL_STATE(5)] = 108,
  [SMALL_STATE(6)] = 130,
  [SMALL_STATE(7)] = 152,
  [SMALL_STATE(8)] = 186,
  [SMALL_STATE(9)] = 220,
  [SMALL_STATE(10)] = 252,
  [SMALL_STATE(11)] = 284,
  [SMALL_STATE(12)] = 316,
  [SMALL_STATE(13)] = 347,
  [SMALL_STATE(14)] = 382,
  [SMALL_STATE(15)] = 413,
  [SMALL_STATE(16)] = 444,
  [SMALL_STATE(17)] = 473,
  [SMALL_STATE(18)] = 502,
  [SMALL_STATE(19)] = 531,
  [SMALL_STATE(20)] = 560,
  [SMALL_STATE(21)] = 577,
  [SMALL_STATE(22)] = 594,
  [SMALL_STATE(23)] = 611,
  [SMALL_STATE(24)] = 628,
  [SMALL_STATE(25)] = 645,
  [SMALL_STATE(26)] = 662,
  [SMALL_STATE(27)] = 678,
  [SMALL_STATE(28)] = 693,
  [SMALL_STATE(29)] = 708,
  [SMALL_STATE(30)] = 723,
  [SMALL_STATE(31)] = 737,
  [SMALL_STATE(32)] = 751,
  [SMALL_STATE(33)] = 771,
  [SMALL_STATE(34)] = 783,
  [SMALL_STATE(35)] = 795,
  [SMALL_STATE(36)] = 815,
  [SMALL_STATE(37)] = 835,
  [SMALL_STATE(38)] = 855,
  [SMALL_STATE(39)] = 872,
  [SMALL_STATE(40)] = 881,
  [SMALL_STATE(41)] = 898,
  [SMALL_STATE(42)] = 915,
  [SMALL_STATE(43)] = 924,
  [SMALL_STATE(44)] = 932,
  [SMALL_STATE(45)] = 940,
  [SMALL_STATE(46)] = 948,
  [SMALL_STATE(47)] = 956,
  [SMALL_STATE(48)] = 963,
  [SMALL_STATE(49)] = 970,
  [SMALL_STATE(50)] = 977,
  [SMALL_STATE(51)] = 984,
  [SMALL_STATE(52)] = 991,
  [SMALL_STATE(53)] = 998,
  [SMALL_STATE(54)] = 1005,
  [SMALL_STATE(55)] = 1012,
  [SMALL_STATE(56)] = 1016,
  [SMALL_STATE(57)] = 1020,
  [SMALL_STATE(58)] = 1024,
  [SMALL_STATE(59)] = 1028,
  [SMALL_STATE(60)] = 1032,
  [SMALL_STATE(61)] = 1036,
  [SMALL_STATE(62)] = 1040,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_depends_on_statement, 2, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_depends_on_statement, 3, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_depends_on_statement_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_depends_on_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_depends_on_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_depends_on_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_depends_on_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_depends_on_statement, 4, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properties_block, 1, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_properties_block, 2, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_properties_block_repeat1, 2, 0, 0),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_properties_block_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_properties_block_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_properties_block_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_properties_block_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_block, 2, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_definition, 2, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_configuration_block_repeat1, 2, 0, 0),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_block_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_block_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_block_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_block_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_block, 3, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_definition, 3, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_definition, 4, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_definition_repeat1, 2, 0, 0),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref_modifier, 1, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_selector, 2, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exclude_from_bom_modifier, 2, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hidden_modifier, 2, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_suppressed_modifier, 2, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata_property, 3, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content_property, 2, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content_generate_property, 2, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_active_modifier, 2, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_directive, 1, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_directive, 1, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drawing_of_statement, 2, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_directive, 3, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 4, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 4, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [214] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_type, 1, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_cadsim(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
