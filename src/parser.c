#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 136
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 92
#define ALIAS_COUNT 0
#define TOKEN_COUNT 59
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 17

enum {
  anon_sym_LTsequence = 1,
  anon_sym_GT = 2,
  anon_sym_LT_SLASHsequence_GT = 3,
  anon_sym_LTrespond_SLASH_GT = 4,
  anon_sym_LTlog = 5,
  anon_sym_LT_SLASHlog_GT = 6,
  anon_sym_SLASH_GT = 7,
  anon_sym_LTproperty = 8,
  anon_sym_LTcall = 9,
  anon_sym_LT_SLASHcall_GT = 10,
  anon_sym_LTendpoint = 11,
  anon_sym_LT_SLASHendpoint_GT = 12,
  anon_sym_LThttp = 13,
  anon_sym_LT_SLASHhttp_GT = 14,
  anon_sym_uri_DASHtemplate = 15,
  anon_sym_EQ = 16,
  anon_sym_DQUOTE = 17,
  anon_sym_method = 18,
  anon_sym_GET = 19,
  anon_sym_POST = 20,
  anon_sym_PUT = 21,
  anon_sym_DELETE = 22,
  anon_sym_HEAD = 23,
  anon_sym_OPTIONS = 24,
  anon_sym_PATCH = 25,
  anon_sym_get = 26,
  anon_sym_post = 27,
  anon_sym_put = 28,
  anon_sym_delete = 29,
  anon_sym_head = 30,
  anon_sym_options = 31,
  anon_sym_patch = 32,
  anon_sym_LTtimeout_GT = 33,
  anon_sym_LT_SLASHtimeout_GT = 34,
  anon_sym_LTduration_GT = 35,
  anon_sym_LT_SLASHduration_GT = 36,
  anon_sym_LTresponseAction_GT = 37,
  anon_sym_LT_SLASHresponseAction_GT = 38,
  anon_sym_LTkey = 39,
  anon_sym_blocking = 40,
  anon_sym_true = 41,
  anon_sym_false = 42,
  anon_sym_value = 43,
  anon_sym_expression = 44,
  anon_sym_name = 45,
  anon_sym_level = 46,
  anon_sym_full = 47,
  anon_sym_simple = 48,
  anon_sym_custom = 49,
  anon_sym_headers = 50,
  sym_identifier = 51,
  sym_number = 52,
  anon_sym_LT_QMARKxml = 53,
  anon_sym_QMARK_GT = 54,
  anon_sym_version = 55,
  sym_version_number = 56,
  anon_sym_encoding = 57,
  sym_encoding = 58,
  sym_source_file = 59,
  sym__definition = 60,
  sym_sequence_definition = 61,
  sym_mediator = 62,
  sym_respond = 63,
  sym_log = 64,
  sym_property = 65,
  sym_call = 66,
  sym_endpoint = 67,
  sym__endpoint_type = 68,
  sym_http_endpoint = 69,
  sym__endpoint_attribute = 70,
  sym_uri_template = 71,
  sym_method = 72,
  sym__endpoint_property = 73,
  sym_timeout = 74,
  sym_duration = 75,
  sym_response_action = 76,
  sym_endpoint_reference = 77,
  sym_blocking = 78,
  sym_value = 79,
  sym_expression = 80,
  sym_name = 81,
  sym_level = 82,
  sym_boolean = 83,
  sym_xml_declaration = 84,
  sym_version_info = 85,
  sym_encoding_declaration = 86,
  aux_sym_source_file_repeat1 = 87,
  aux_sym_sequence_definition_repeat1 = 88,
  aux_sym_log_repeat1 = 89,
  aux_sym_http_endpoint_repeat1 = 90,
  aux_sym_http_endpoint_repeat2 = 91,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LTsequence] = "<sequence",
  [anon_sym_GT] = ">",
  [anon_sym_LT_SLASHsequence_GT] = "</sequence>",
  [anon_sym_LTrespond_SLASH_GT] = "<respond/>",
  [anon_sym_LTlog] = "<log",
  [anon_sym_LT_SLASHlog_GT] = "</log>",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_LTproperty] = "<property",
  [anon_sym_LTcall] = "<call",
  [anon_sym_LT_SLASHcall_GT] = "</call>",
  [anon_sym_LTendpoint] = "<endpoint",
  [anon_sym_LT_SLASHendpoint_GT] = "</endpoint>",
  [anon_sym_LThttp] = "<http",
  [anon_sym_LT_SLASHhttp_GT] = "</http>",
  [anon_sym_uri_DASHtemplate] = "uri-template",
  [anon_sym_EQ] = "=",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_method] = "method",
  [anon_sym_GET] = "GET",
  [anon_sym_POST] = "POST",
  [anon_sym_PUT] = "PUT",
  [anon_sym_DELETE] = "DELETE",
  [anon_sym_HEAD] = "HEAD",
  [anon_sym_OPTIONS] = "OPTIONS",
  [anon_sym_PATCH] = "PATCH",
  [anon_sym_get] = "get",
  [anon_sym_post] = "post",
  [anon_sym_put] = "put",
  [anon_sym_delete] = "delete",
  [anon_sym_head] = "head",
  [anon_sym_options] = "options",
  [anon_sym_patch] = "patch",
  [anon_sym_LTtimeout_GT] = "<timeout>",
  [anon_sym_LT_SLASHtimeout_GT] = "</timeout>",
  [anon_sym_LTduration_GT] = "<duration>",
  [anon_sym_LT_SLASHduration_GT] = "</duration>",
  [anon_sym_LTresponseAction_GT] = "<responseAction>",
  [anon_sym_LT_SLASHresponseAction_GT] = "</responseAction>",
  [anon_sym_LTkey] = "<key",
  [anon_sym_blocking] = "blocking",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_value] = "value",
  [anon_sym_expression] = "expression",
  [anon_sym_name] = "name",
  [anon_sym_level] = "level",
  [anon_sym_full] = "full",
  [anon_sym_simple] = "simple",
  [anon_sym_custom] = "custom",
  [anon_sym_headers] = "headers",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [anon_sym_LT_QMARKxml] = "<\?xml",
  [anon_sym_QMARK_GT] = "\?>",
  [anon_sym_version] = "version",
  [sym_version_number] = "version_number",
  [anon_sym_encoding] = "encoding",
  [sym_encoding] = "encoding",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_sequence_definition] = "sequence_definition",
  [sym_mediator] = "mediator",
  [sym_respond] = "respond",
  [sym_log] = "log",
  [sym_property] = "property",
  [sym_call] = "call",
  [sym_endpoint] = "endpoint",
  [sym__endpoint_type] = "_endpoint_type",
  [sym_http_endpoint] = "http_endpoint",
  [sym__endpoint_attribute] = "_endpoint_attribute",
  [sym_uri_template] = "uri_template",
  [sym_method] = "method",
  [sym__endpoint_property] = "_endpoint_property",
  [sym_timeout] = "timeout",
  [sym_duration] = "duration",
  [sym_response_action] = "response_action",
  [sym_endpoint_reference] = "endpoint_reference",
  [sym_blocking] = "blocking",
  [sym_value] = "value",
  [sym_expression] = "expression",
  [sym_name] = "name",
  [sym_level] = "level",
  [sym_boolean] = "boolean",
  [sym_xml_declaration] = "xml_declaration",
  [sym_version_info] = "version_info",
  [sym_encoding_declaration] = "encoding_declaration",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_sequence_definition_repeat1] = "sequence_definition_repeat1",
  [aux_sym_log_repeat1] = "log_repeat1",
  [aux_sym_http_endpoint_repeat1] = "http_endpoint_repeat1",
  [aux_sym_http_endpoint_repeat2] = "http_endpoint_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LTsequence] = anon_sym_LTsequence,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_SLASHsequence_GT] = anon_sym_LT_SLASHsequence_GT,
  [anon_sym_LTrespond_SLASH_GT] = anon_sym_LTrespond_SLASH_GT,
  [anon_sym_LTlog] = anon_sym_LTlog,
  [anon_sym_LT_SLASHlog_GT] = anon_sym_LT_SLASHlog_GT,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_LTproperty] = anon_sym_LTproperty,
  [anon_sym_LTcall] = anon_sym_LTcall,
  [anon_sym_LT_SLASHcall_GT] = anon_sym_LT_SLASHcall_GT,
  [anon_sym_LTendpoint] = anon_sym_LTendpoint,
  [anon_sym_LT_SLASHendpoint_GT] = anon_sym_LT_SLASHendpoint_GT,
  [anon_sym_LThttp] = anon_sym_LThttp,
  [anon_sym_LT_SLASHhttp_GT] = anon_sym_LT_SLASHhttp_GT,
  [anon_sym_uri_DASHtemplate] = anon_sym_uri_DASHtemplate,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_method] = anon_sym_method,
  [anon_sym_GET] = anon_sym_GET,
  [anon_sym_POST] = anon_sym_POST,
  [anon_sym_PUT] = anon_sym_PUT,
  [anon_sym_DELETE] = anon_sym_DELETE,
  [anon_sym_HEAD] = anon_sym_HEAD,
  [anon_sym_OPTIONS] = anon_sym_OPTIONS,
  [anon_sym_PATCH] = anon_sym_PATCH,
  [anon_sym_get] = anon_sym_get,
  [anon_sym_post] = anon_sym_post,
  [anon_sym_put] = anon_sym_put,
  [anon_sym_delete] = anon_sym_delete,
  [anon_sym_head] = anon_sym_head,
  [anon_sym_options] = anon_sym_options,
  [anon_sym_patch] = anon_sym_patch,
  [anon_sym_LTtimeout_GT] = anon_sym_LTtimeout_GT,
  [anon_sym_LT_SLASHtimeout_GT] = anon_sym_LT_SLASHtimeout_GT,
  [anon_sym_LTduration_GT] = anon_sym_LTduration_GT,
  [anon_sym_LT_SLASHduration_GT] = anon_sym_LT_SLASHduration_GT,
  [anon_sym_LTresponseAction_GT] = anon_sym_LTresponseAction_GT,
  [anon_sym_LT_SLASHresponseAction_GT] = anon_sym_LT_SLASHresponseAction_GT,
  [anon_sym_LTkey] = anon_sym_LTkey,
  [anon_sym_blocking] = anon_sym_blocking,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_value] = anon_sym_value,
  [anon_sym_expression] = anon_sym_expression,
  [anon_sym_name] = anon_sym_name,
  [anon_sym_level] = anon_sym_level,
  [anon_sym_full] = anon_sym_full,
  [anon_sym_simple] = anon_sym_simple,
  [anon_sym_custom] = anon_sym_custom,
  [anon_sym_headers] = anon_sym_headers,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [anon_sym_LT_QMARKxml] = anon_sym_LT_QMARKxml,
  [anon_sym_QMARK_GT] = anon_sym_QMARK_GT,
  [anon_sym_version] = anon_sym_version,
  [sym_version_number] = sym_version_number,
  [anon_sym_encoding] = anon_sym_encoding,
  [sym_encoding] = sym_encoding,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_sequence_definition] = sym_sequence_definition,
  [sym_mediator] = sym_mediator,
  [sym_respond] = sym_respond,
  [sym_log] = sym_log,
  [sym_property] = sym_property,
  [sym_call] = sym_call,
  [sym_endpoint] = sym_endpoint,
  [sym__endpoint_type] = sym__endpoint_type,
  [sym_http_endpoint] = sym_http_endpoint,
  [sym__endpoint_attribute] = sym__endpoint_attribute,
  [sym_uri_template] = sym_uri_template,
  [sym_method] = sym_method,
  [sym__endpoint_property] = sym__endpoint_property,
  [sym_timeout] = sym_timeout,
  [sym_duration] = sym_duration,
  [sym_response_action] = sym_response_action,
  [sym_endpoint_reference] = sym_endpoint_reference,
  [sym_blocking] = sym_blocking,
  [sym_value] = sym_value,
  [sym_expression] = sym_expression,
  [sym_name] = sym_name,
  [sym_level] = sym_level,
  [sym_boolean] = sym_boolean,
  [sym_xml_declaration] = sym_xml_declaration,
  [sym_version_info] = sym_version_info,
  [sym_encoding_declaration] = sym_encoding_declaration,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_sequence_definition_repeat1] = aux_sym_sequence_definition_repeat1,
  [aux_sym_log_repeat1] = aux_sym_log_repeat1,
  [aux_sym_http_endpoint_repeat1] = aux_sym_http_endpoint_repeat1,
  [aux_sym_http_endpoint_repeat2] = aux_sym_http_endpoint_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LTsequence] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHsequence_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTrespond_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTlog] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHlog_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTproperty] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTcall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHcall_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTendpoint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHendpoint_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LThttp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHhttp_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uri_DASHtemplate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_method] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POST] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PUT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DELETE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HEAD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OPTIONS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PATCH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_get] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_post] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_put] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_head] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_options] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_patch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTtimeout_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHtimeout_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTduration_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHduration_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTresponseAction_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHresponseAction_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTkey] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blocking] = {
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
  [anon_sym_value] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_expression] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_level] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_full] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_simple] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_custom] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_headers] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_QMARKxml] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_version] = {
    .visible = true,
    .named = false,
  },
  [sym_version_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_encoding] = {
    .visible = true,
    .named = false,
  },
  [sym_encoding] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_sequence_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_mediator] = {
    .visible = true,
    .named = true,
  },
  [sym_respond] = {
    .visible = true,
    .named = true,
  },
  [sym_log] = {
    .visible = true,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym_endpoint] = {
    .visible = true,
    .named = true,
  },
  [sym__endpoint_type] = {
    .visible = false,
    .named = true,
  },
  [sym_http_endpoint] = {
    .visible = true,
    .named = true,
  },
  [sym__endpoint_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym_uri_template] = {
    .visible = true,
    .named = true,
  },
  [sym_method] = {
    .visible = true,
    .named = true,
  },
  [sym__endpoint_property] = {
    .visible = false,
    .named = true,
  },
  [sym_timeout] = {
    .visible = true,
    .named = true,
  },
  [sym_duration] = {
    .visible = true,
    .named = true,
  },
  [sym_response_action] = {
    .visible = true,
    .named = true,
  },
  [sym_endpoint_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_blocking] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_level] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_xml_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_version_info] = {
    .visible = true,
    .named = true,
  },
  [sym_encoding_declaration] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sequence_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_log_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_http_endpoint_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_http_endpoint_repeat2] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_blocking = 1,
  field_duration = 2,
  field_endpoint = 3,
  field_endpoint_reference = 4,
  field_endpoint_type = 5,
  field_expression = 6,
  field_level = 7,
  field_name = 8,
  field_number = 9,
  field_response_action = 10,
  field_value = 11,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_blocking] = "blocking",
  [field_duration] = "duration",
  [field_endpoint] = "endpoint",
  [field_endpoint_reference] = "endpoint_reference",
  [field_endpoint_type] = "endpoint_type",
  [field_expression] = "expression",
  [field_level] = "level",
  [field_name] = "name",
  [field_number] = "number",
  [field_response_action] = "response_action",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 1},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 2},
  [10] = {.index = 14, .length = 2},
  [11] = {.index = 16, .length = 1},
  [12] = {.index = 17, .length = 3},
  [13] = {.index = 20, .length = 3},
  [14] = {.index = 23, .length = 2},
  [15] = {.index = 25, .length = 1},
  [16] = {.index = 26, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_level, 1},
  [2] =
    {field_name, 1},
    {field_value, 2},
  [4] =
    {field_expression, 2},
    {field_name, 1},
  [6] =
    {field_endpoint, 2},
  [7] =
    {field_endpoint_reference, 2},
  [8] =
    {field_blocking, 1},
    {field_endpoint, 3},
  [10] =
    {field_blocking, 1},
    {field_endpoint_reference, 3},
  [12] =
    {field_endpoint, 3},
    {field_name, 1},
  [14] =
    {field_endpoint_reference, 3},
    {field_name, 1},
  [16] =
    {field_endpoint_type, 2},
  [17] =
    {field_blocking, 2},
    {field_endpoint, 4},
    {field_name, 1},
  [20] =
    {field_blocking, 2},
    {field_endpoint_reference, 4},
    {field_name, 1},
  [23] =
    {field_endpoint_type, 3},
    {field_name, 1},
  [25] =
    {field_number, 1},
  [26] =
    {field_duration, 1},
    {field_response_action, 2},
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
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(264);
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '<') ADVANCE(8);
      if (lookahead == '=') ADVANCE(280);
      if (lookahead == '>') ADVANCE(266);
      if (lookahead == '?') ADVANCE(13);
      if (lookahead == 'D') ADVANCE(347);
      if (lookahead == 'G') ADVANCE(348);
      if (lookahead == 'H') ADVANCE(349);
      if (lookahead == 'O') ADVANCE(357);
      if (lookahead == 'P') ADVANCE(344);
      if (lookahead == 'b') ADVANCE(403);
      if (lookahead == 'c') ADVANCE(451);
      if (lookahead == 'd') ADVANCE(385);
      if (lookahead == 'e') ADVANCE(414);
      if (lookahead == 'f') ADVANCE(368);
      if (lookahead == 'g') ADVANCE(377);
      if (lookahead == 'h') ADVANCE(386);
      if (lookahead == 'l') ADVANCE(378);
      if (lookahead == 'm') ADVANCE(387);
      if (lookahead == 'n') ADVANCE(366);
      if (lookahead == 'o') ADVANCE(427);
      if (lookahead == 'p') ADVANCE(369);
      if (lookahead == 's') ADVANCE(396);
      if (lookahead == 't') ADVANCE(430);
      if (lookahead == 'u') ADVANCE(431);
      if (lookahead == 'v') ADVANCE(370);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(456);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(281);
      if (lookahead == '>') ADVANCE(266);
      if (lookahead == '?') ADVANCE(13);
      if (lookahead == 'D') ADVANCE(32);
      if (lookahead == 'G') ADVANCE(33);
      if (lookahead == 'H') ADVANCE(35);
      if (lookahead == 'O') ADVANCE(43);
      if (lookahead == 'P') ADVANCE(28);
      if (lookahead == 'b') ADVANCE(140);
      if (lookahead == 'd') ADVANCE(99);
      if (lookahead == 'e') ADVANCE(161);
      if (lookahead == 'f') ADVANCE(57);
      if (lookahead == 'g') ADVANCE(101);
      if (lookahead == 'h') ADVANCE(95);
      if (lookahead == 'l') ADVANCE(85);
      if (lookahead == 'm') ADVANCE(103);
      if (lookahead == 'n') ADVANCE(61);
      if (lookahead == 'o') ADVANCE(200);
      if (lookahead == 'p') ADVANCE(59);
      if (lookahead == 't') ADVANCE(212);
      if (lookahead == 'u') ADVANCE(207);
      if (lookahead == 'v') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == 'c') ADVANCE(254);
      if (lookahead == 'f') ADVANCE(256);
      if (lookahead == 'h') ADVANCE(96);
      if (lookahead == 's') ADVANCE(126);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(464);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(238);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(263);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == 'c') ADVANCE(53);
      if (lookahead == 'd') ADVANCE(248);
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead == 'h') ADVANCE(230);
      if (lookahead == 'k') ADVANCE(79);
      if (lookahead == 'l') ADVANCE(172);
      if (lookahead == 'p') ADVANCE(206);
      if (lookahead == 'r') ADVANCE(80);
      if (lookahead == 's') ADVANCE(81);
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(20);
      END_STATE();
    case 10:
      if (lookahead == '1') ADVANCE(7);
      if (lookahead == 'U') ADVANCE(51);
      END_STATE();
    case 11:
      if (lookahead == '8') ADVANCE(4);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(271);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(458);
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(270);
      END_STATE();
    case 15:
      if (lookahead == '>') ADVANCE(274);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(278);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(313);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(314);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(315);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(268);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(316);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(276);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(267);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(317);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(318);
      END_STATE();
    case 26:
      if (lookahead == 'A') ADVANCE(31);
      END_STATE();
    case 27:
      if (lookahead == 'A') ADVANCE(70);
      END_STATE();
    case 28:
      if (lookahead == 'A') ADVANCE(48);
      if (lookahead == 'O') ADVANCE(45);
      if (lookahead == 'U') ADVANCE(49);
      END_STATE();
    case 29:
      if (lookahead == 'A') ADVANCE(71);
      END_STATE();
    case 30:
      if (lookahead == 'C') ADVANCE(38);
      END_STATE();
    case 31:
      if (lookahead == 'D') ADVANCE(293);
      END_STATE();
    case 32:
      if (lookahead == 'E') ADVANCE(40);
      END_STATE();
    case 33:
      if (lookahead == 'E') ADVANCE(46);
      END_STATE();
    case 34:
      if (lookahead == 'E') ADVANCE(291);
      END_STATE();
    case 35:
      if (lookahead == 'E') ADVANCE(26);
      END_STATE();
    case 36:
      if (lookahead == 'E') ADVANCE(52);
      END_STATE();
    case 37:
      if (lookahead == 'F') ADVANCE(5);
      END_STATE();
    case 38:
      if (lookahead == 'H') ADVANCE(297);
      END_STATE();
    case 39:
      if (lookahead == 'I') ADVANCE(42);
      END_STATE();
    case 40:
      if (lookahead == 'L') ADVANCE(36);
      END_STATE();
    case 41:
      if (lookahead == 'N') ADVANCE(44);
      END_STATE();
    case 42:
      if (lookahead == 'O') ADVANCE(41);
      END_STATE();
    case 43:
      if (lookahead == 'P') ADVANCE(47);
      END_STATE();
    case 44:
      if (lookahead == 'S') ADVANCE(295);
      END_STATE();
    case 45:
      if (lookahead == 'S') ADVANCE(50);
      END_STATE();
    case 46:
      if (lookahead == 'T') ADVANCE(285);
      END_STATE();
    case 47:
      if (lookahead == 'T') ADVANCE(39);
      END_STATE();
    case 48:
      if (lookahead == 'T') ADVANCE(30);
      END_STATE();
    case 49:
      if (lookahead == 'T') ADVANCE(289);
      END_STATE();
    case 50:
      if (lookahead == 'T') ADVANCE(287);
      END_STATE();
    case 51:
      if (lookahead == 'T') ADVANCE(37);
      END_STATE();
    case 52:
      if (lookahead == 'T') ADVANCE(34);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(137);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(231);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(146);
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(235);
      if (lookahead == 'o') ADVANCE(216);
      if (lookahead == 'u') ADVANCE(228);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(240);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(245);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(132);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(115);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(83);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(177);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(60);
      if (lookahead == 'd') ADVANCE(257);
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead == 'h') ADVANCE(243);
      if (lookahead == 'l') ADVANCE(174);
      if (lookahead == 'r') ADVANCE(108);
      if (lookahead == 's') ADVANCE(109);
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(246);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(247);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(193);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(9);
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(307);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(283);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(122);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(202);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(330);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(322);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(305);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(336);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 111:
      if (lookahead == 'g') ADVANCE(269);
      END_STATE();
    case 112:
      if (lookahead == 'g') ADVANCE(320);
      END_STATE();
    case 113:
      if (lookahead == 'g') ADVANCE(462);
      END_STATE();
    case 114:
      if (lookahead == 'g') ADVANCE(14);
      END_STATE();
    case 115:
      if (lookahead == 'h') ADVANCE(311);
      END_STATE();
    case 116:
      if (lookahead == 'h') ADVANCE(181);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(6);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(184);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(186);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 132:
      if (lookahead == 'k') ADVANCE(121);
      END_STATE();
    case 133:
      if (lookahead == 'l') ADVANCE(457);
      END_STATE();
    case 134:
      if (lookahead == 'l') ADVANCE(273);
      END_STATE();
    case 135:
      if (lookahead == 'l') ADVANCE(332);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(334);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 138:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(218);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(253);
      END_STATE();
    case 147:
      if (lookahead == 'm') ADVANCE(338);
      END_STATE();
    case 148:
      if (lookahead == 'm') ADVANCE(133);
      END_STATE();
    case 149:
      if (lookahead == 'm') ADVANCE(97);
      END_STATE();
    case 150:
      if (lookahead == 'm') ADVANCE(197);
      END_STATE();
    case 151:
      if (lookahead == 'm') ADVANCE(201);
      END_STATE();
    case 152:
      if (lookahead == 'm') ADVANCE(86);
      END_STATE();
    case 153:
      if (lookahead == 'm') ADVANCE(106);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(459);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(328);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(224);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(67);
      if (lookahead == 'x') ADVANCE(199);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(214);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(225);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(239);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(249);
      END_STATE();
    case 176:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(196);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 180:
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 181:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 182:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 183:
      if (lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 184:
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 185:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 186:
      if (lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 187:
      if (lookahead == 'o') ADVANCE(251);
      END_STATE();
    case 188:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 189:
      if (lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 190:
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 191:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 192:
      if (lookahead == 'p') ADVANCE(277);
      END_STATE();
    case 193:
      if (lookahead == 'p') ADVANCE(176);
      END_STATE();
    case 194:
      if (lookahead == 'p') ADVANCE(173);
      END_STATE();
    case 195:
      if (lookahead == 'p') ADVANCE(16);
      END_STATE();
    case 196:
      if (lookahead == 'p') ADVANCE(93);
      END_STATE();
    case 197:
      if (lookahead == 'p') ADVANCE(144);
      END_STATE();
    case 198:
      if (lookahead == 'p') ADVANCE(179);
      END_STATE();
    case 199:
      if (lookahead == 'p') ADVANCE(211);
      END_STATE();
    case 200:
      if (lookahead == 'p') ADVANCE(244);
      END_STATE();
    case 201:
      if (lookahead == 'p') ADVANCE(143);
      END_STATE();
    case 202:
      if (lookahead == 'p') ADVANCE(191);
      END_STATE();
    case 203:
      if (lookahead == 'q') ADVANCE(250);
      END_STATE();
    case 204:
      if (lookahead == 'q') ADVANCE(255);
      END_STATE();
    case 205:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 206:
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 207:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(221);
      END_STATE();
    case 209:
      if (lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 210:
      if (lookahead == 'r') ADVANCE(215);
      END_STATE();
    case 211:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 212:
      if (lookahead == 'r') ADVANCE(252);
      END_STATE();
    case 213:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 214:
      if (lookahead == 's') ADVANCE(309);
      END_STATE();
    case 215:
      if (lookahead == 's') ADVANCE(340);
      END_STATE();
    case 216:
      if (lookahead == 's') ADVANCE(229);
      END_STATE();
    case 217:
      if (lookahead == 's') ADVANCE(241);
      END_STATE();
    case 218:
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 219:
      if (lookahead == 's') ADVANCE(194);
      END_STATE();
    case 220:
      if (lookahead == 's') ADVANCE(198);
      END_STATE();
    case 221:
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 222:
      if (lookahead == 's') ADVANCE(125);
      END_STATE();
    case 223:
      if (lookahead == 's') ADVANCE(222);
      END_STATE();
    case 224:
      if (lookahead == 's') ADVANCE(110);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(275);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(299);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(303);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(301);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(233);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(192);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(195);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 236:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 237:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 238:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 239:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 240:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 241:
      if (lookahead == 't') ADVANCE(180);
      END_STATE();
    case 242:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(234);
      END_STATE();
    case 244:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 245:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 246:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 248:
      if (lookahead == 'u') ADVANCE(205);
      END_STATE();
    case 249:
      if (lookahead == 'u') ADVANCE(236);
      END_STATE();
    case 250:
      if (lookahead == 'u') ADVANCE(92);
      END_STATE();
    case 251:
      if (lookahead == 'u') ADVANCE(237);
      END_STATE();
    case 252:
      if (lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 253:
      if (lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 254:
      if (lookahead == 'u') ADVANCE(217);
      END_STATE();
    case 255:
      if (lookahead == 'u') ADVANCE(105);
      END_STATE();
    case 256:
      if (lookahead == 'u') ADVANCE(141);
      END_STATE();
    case 257:
      if (lookahead == 'u') ADVANCE(213);
      END_STATE();
    case 258:
      if (lookahead == 'v') ADVANCE(102);
      END_STATE();
    case 259:
      if (lookahead == 'x') ADVANCE(148);
      END_STATE();
    case 260:
      if (lookahead == 'y') ADVANCE(319);
      END_STATE();
    case 261:
      if (lookahead == 'y') ADVANCE(272);
      END_STATE();
    case 262:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(262)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 263:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_LTsequence);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_LT_SLASHsequence_GT);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_LTrespond_SLASH_GT);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_LTlog);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_LT_SLASHlog_GT);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_LTproperty);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_LTcall);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_LT_SLASHcall_GT);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_LTendpoint);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_LT_SLASHendpoint_GT);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_LThttp);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_LT_SLASHhttp_GT);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_uri_DASHtemplate);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '1') ADVANCE(7);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_method);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_method);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_GET);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_GET);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_POST);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_POST);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_PUT);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_DELETE);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_PATCH);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_get);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_post);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_post);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_put);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_put);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_delete);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_head);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_head);
      if (lookahead == 'e') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_options);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_options);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_patch);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_patch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_LTtimeout_GT);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_LT_SLASHtimeout_GT);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_LTduration_GT);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_LT_SLASHduration_GT);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_LTresponseAction_GT);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_LT_SLASHresponseAction_GT);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_LTkey);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_blocking);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_blocking);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_value);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_expression);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_expression);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_level);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_level);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_full);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_full);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_simple);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_simple);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_custom);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_custom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_headers);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_headers);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(362);
      if (lookahead == 'O') ADVANCE(359);
      if (lookahead == 'U') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(406);
      if (lookahead == 'u') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(449);
      if (lookahead == 'o') ADVANCE(438);
      if (lookahead == 'u') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(410);
      if (lookahead == 'e') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(372);
      if (lookahead == 'x') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(456);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_LT_QMARKxml);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_version);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_version_number);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_encoding);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_encoding);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_encoding);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
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
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 262},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 262},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 262},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 262},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 262},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LTsequence] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHsequence_GT] = ACTIONS(1),
    [anon_sym_LTrespond_SLASH_GT] = ACTIONS(1),
    [anon_sym_LTlog] = ACTIONS(1),
    [anon_sym_LT_SLASHlog_GT] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_LTproperty] = ACTIONS(1),
    [anon_sym_LTcall] = ACTIONS(1),
    [anon_sym_LT_SLASHcall_GT] = ACTIONS(1),
    [anon_sym_LTendpoint] = ACTIONS(1),
    [anon_sym_LT_SLASHendpoint_GT] = ACTIONS(1),
    [anon_sym_LThttp] = ACTIONS(1),
    [anon_sym_LT_SLASHhttp_GT] = ACTIONS(1),
    [anon_sym_uri_DASHtemplate] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_method] = ACTIONS(1),
    [anon_sym_GET] = ACTIONS(1),
    [anon_sym_POST] = ACTIONS(1),
    [anon_sym_PUT] = ACTIONS(1),
    [anon_sym_DELETE] = ACTIONS(1),
    [anon_sym_HEAD] = ACTIONS(1),
    [anon_sym_OPTIONS] = ACTIONS(1),
    [anon_sym_PATCH] = ACTIONS(1),
    [anon_sym_get] = ACTIONS(1),
    [anon_sym_post] = ACTIONS(1),
    [anon_sym_put] = ACTIONS(1),
    [anon_sym_delete] = ACTIONS(1),
    [anon_sym_head] = ACTIONS(1),
    [anon_sym_options] = ACTIONS(1),
    [anon_sym_patch] = ACTIONS(1),
    [anon_sym_LTtimeout_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHtimeout_GT] = ACTIONS(1),
    [anon_sym_LTduration_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHduration_GT] = ACTIONS(1),
    [anon_sym_LTresponseAction_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHresponseAction_GT] = ACTIONS(1),
    [anon_sym_LTkey] = ACTIONS(1),
    [anon_sym_blocking] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_value] = ACTIONS(1),
    [anon_sym_expression] = ACTIONS(1),
    [anon_sym_name] = ACTIONS(1),
    [anon_sym_level] = ACTIONS(1),
    [anon_sym_full] = ACTIONS(1),
    [anon_sym_simple] = ACTIONS(1),
    [anon_sym_custom] = ACTIONS(1),
    [anon_sym_headers] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_LT_QMARKxml] = ACTIONS(1),
    [anon_sym_QMARK_GT] = ACTIONS(1),
    [anon_sym_version] = ACTIONS(1),
    [sym_version_number] = ACTIONS(1),
    [anon_sym_encoding] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(112),
    [sym__definition] = STATE(28),
    [sym_sequence_definition] = STATE(28),
    [sym_xml_declaration] = STATE(19),
    [aux_sym_source_file_repeat1] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LTsequence] = ACTIONS(5),
    [anon_sym_LT_QMARKxml] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(9), 14,
      anon_sym_GET,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_HEAD,
      anon_sym_OPTIONS,
      anon_sym_PATCH,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_head,
      anon_sym_options,
      anon_sym_patch,
  [17] = 7,
    ACTIONS(11), 1,
      anon_sym_LT_SLASHsequence_GT,
    ACTIONS(13), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(15), 1,
      anon_sym_LTlog,
    ACTIONS(17), 1,
      anon_sym_LTproperty,
    ACTIONS(19), 1,
      anon_sym_LTcall,
    STATE(5), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(27), 4,
      sym_respond,
      sym_log,
      sym_property,
      sym_call,
  [43] = 7,
    ACTIONS(21), 1,
      anon_sym_LT_SLASHsequence_GT,
    ACTIONS(23), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(26), 1,
      anon_sym_LTlog,
    ACTIONS(29), 1,
      anon_sym_LTproperty,
    ACTIONS(32), 1,
      anon_sym_LTcall,
    STATE(4), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(27), 4,
      sym_respond,
      sym_log,
      sym_property,
      sym_call,
  [69] = 7,
    ACTIONS(13), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(15), 1,
      anon_sym_LTlog,
    ACTIONS(17), 1,
      anon_sym_LTproperty,
    ACTIONS(19), 1,
      anon_sym_LTcall,
    ACTIONS(35), 1,
      anon_sym_LT_SLASHsequence_GT,
    STATE(4), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(27), 4,
      sym_respond,
      sym_log,
      sym_property,
      sym_call,
  [95] = 4,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      anon_sym_uri_DASHtemplate,
    ACTIONS(42), 1,
      anon_sym_method,
    STATE(6), 4,
      sym__endpoint_attribute,
      sym_uri_template,
      sym_method,
      aux_sym_http_endpoint_repeat1,
  [111] = 4,
    ACTIONS(45), 1,
      anon_sym_GT,
    ACTIONS(47), 1,
      anon_sym_uri_DASHtemplate,
    ACTIONS(49), 1,
      anon_sym_method,
    STATE(6), 4,
      sym__endpoint_attribute,
      sym_uri_template,
      sym_method,
      aux_sym_http_endpoint_repeat1,
  [127] = 4,
    ACTIONS(47), 1,
      anon_sym_uri_DASHtemplate,
    ACTIONS(49), 1,
      anon_sym_method,
    ACTIONS(51), 1,
      anon_sym_GT,
    STATE(7), 4,
      sym__endpoint_attribute,
      sym_uri_template,
      sym_method,
      aux_sym_http_endpoint_repeat1,
  [143] = 1,
    ACTIONS(53), 6,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LT_SLASHlog_GT,
      anon_sym_LTproperty,
      anon_sym_LTcall,
  [152] = 1,
    ACTIONS(55), 6,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LT_SLASHlog_GT,
      anon_sym_LTproperty,
      anon_sym_LTcall,
  [161] = 1,
    ACTIONS(57), 5,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
  [169] = 1,
    ACTIONS(59), 5,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
  [177] = 1,
    ACTIONS(61), 5,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
  [185] = 3,
    ACTIONS(5), 1,
      anon_sym_LTsequence,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    STATE(15), 3,
      sym__definition,
      sym_sequence_definition,
      aux_sym_source_file_repeat1,
  [197] = 3,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      anon_sym_LTsequence,
    STATE(15), 3,
      sym__definition,
      sym_sequence_definition,
      aux_sym_source_file_repeat1,
  [209] = 1,
    ACTIONS(70), 5,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
  [217] = 1,
    ACTIONS(72), 5,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
  [225] = 1,
    ACTIONS(74), 5,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
  [233] = 3,
    ACTIONS(5), 1,
      anon_sym_LTsequence,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    STATE(14), 3,
      sym__definition,
      sym_sequence_definition,
      aux_sym_source_file_repeat1,
  [245] = 1,
    ACTIONS(78), 5,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
  [253] = 3,
    ACTIONS(80), 1,
      anon_sym_LT_SLASHhttp_GT,
    ACTIONS(82), 1,
      anon_sym_LTtimeout_GT,
    STATE(31), 3,
      sym__endpoint_property,
      sym_timeout,
      aux_sym_http_endpoint_repeat2,
  [265] = 1,
    ACTIONS(84), 5,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
  [273] = 1,
    ACTIONS(86), 5,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
  [281] = 3,
    ACTIONS(82), 1,
      anon_sym_LTtimeout_GT,
    ACTIONS(88), 1,
      anon_sym_LT_SLASHhttp_GT,
    STATE(31), 3,
      sym__endpoint_property,
      sym_timeout,
      aux_sym_http_endpoint_repeat2,
  [293] = 3,
    ACTIONS(82), 1,
      anon_sym_LTtimeout_GT,
    ACTIONS(88), 1,
      anon_sym_LT_SLASHhttp_GT,
    STATE(21), 3,
      sym__endpoint_property,
      sym_timeout,
      aux_sym_http_endpoint_repeat2,
  [305] = 5,
    ACTIONS(90), 1,
      anon_sym_GT,
    ACTIONS(92), 1,
      anon_sym_blocking,
    ACTIONS(94), 1,
      anon_sym_name,
    STATE(44), 1,
      sym_name,
    STATE(111), 1,
      sym_blocking,
  [321] = 1,
    ACTIONS(96), 5,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
  [329] = 3,
    ACTIONS(5), 1,
      anon_sym_LTsequence,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    STATE(15), 3,
      sym__definition,
      sym_sequence_definition,
      aux_sym_source_file_repeat1,
  [341] = 1,
    ACTIONS(98), 5,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
  [349] = 1,
    ACTIONS(100), 5,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
  [357] = 3,
    ACTIONS(102), 1,
      anon_sym_LT_SLASHhttp_GT,
    ACTIONS(104), 1,
      anon_sym_LTtimeout_GT,
    STATE(31), 3,
      sym__endpoint_property,
      sym_timeout,
      aux_sym_http_endpoint_repeat2,
  [369] = 1,
    ACTIONS(107), 5,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
  [377] = 3,
    ACTIONS(82), 1,
      anon_sym_LTtimeout_GT,
    ACTIONS(109), 1,
      anon_sym_LT_SLASHhttp_GT,
    STATE(24), 3,
      sym__endpoint_property,
      sym_timeout,
      aux_sym_http_endpoint_repeat2,
  [389] = 4,
    ACTIONS(111), 1,
      anon_sym_value,
    ACTIONS(113), 1,
      anon_sym_expression,
    STATE(94), 1,
      sym_expression,
    STATE(97), 1,
      sym_value,
  [402] = 4,
    ACTIONS(115), 1,
      anon_sym_LTendpoint,
    ACTIONS(117), 1,
      anon_sym_LTkey,
    STATE(87), 1,
      sym_endpoint_reference,
    STATE(88), 1,
      sym_endpoint,
  [415] = 4,
    ACTIONS(115), 1,
      anon_sym_LTendpoint,
    ACTIONS(117), 1,
      anon_sym_LTkey,
    STATE(70), 1,
      sym_endpoint,
    STATE(71), 1,
      sym_endpoint_reference,
  [428] = 4,
    ACTIONS(115), 1,
      anon_sym_LTendpoint,
    ACTIONS(117), 1,
      anon_sym_LTkey,
    STATE(72), 1,
      sym_endpoint,
    STATE(74), 1,
      sym_endpoint_reference,
  [441] = 1,
    ACTIONS(119), 4,
      anon_sym_full,
      anon_sym_simple,
      anon_sym_custom,
      anon_sym_headers,
  [448] = 1,
    ACTIONS(121), 4,
      anon_sym_GT,
      anon_sym_blocking,
      anon_sym_value,
      anon_sym_expression,
  [455] = 3,
    ACTIONS(17), 1,
      anon_sym_LTproperty,
    ACTIONS(123), 1,
      anon_sym_LT_SLASHlog_GT,
    STATE(43), 2,
      sym_property,
      aux_sym_log_repeat1,
  [466] = 3,
    ACTIONS(17), 1,
      anon_sym_LTproperty,
    ACTIONS(125), 1,
      anon_sym_LT_SLASHlog_GT,
    STATE(40), 2,
      sym_property,
      aux_sym_log_repeat1,
  [477] = 4,
    ACTIONS(115), 1,
      anon_sym_LTendpoint,
    ACTIONS(117), 1,
      anon_sym_LTkey,
    STATE(89), 1,
      sym_endpoint,
    STATE(90), 1,
      sym_endpoint_reference,
  [490] = 3,
    ACTIONS(127), 1,
      anon_sym_LT_SLASHlog_GT,
    ACTIONS(129), 1,
      anon_sym_LTproperty,
    STATE(43), 2,
      sym_property,
      aux_sym_log_repeat1,
  [501] = 3,
    ACTIONS(92), 1,
      anon_sym_blocking,
    ACTIONS(132), 1,
      anon_sym_GT,
    STATE(85), 1,
      sym_blocking,
  [511] = 2,
    ACTIONS(134), 1,
      anon_sym_LThttp,
    STATE(99), 2,
      sym__endpoint_type,
      sym_http_endpoint,
  [519] = 1,
    ACTIONS(136), 3,
      anon_sym_GT,
      anon_sym_uri_DASHtemplate,
      anon_sym_method,
  [525] = 3,
    ACTIONS(138), 1,
      anon_sym_QMARK_GT,
    ACTIONS(140), 1,
      anon_sym_encoding,
    STATE(132), 1,
      sym_encoding_declaration,
  [535] = 2,
    ACTIONS(134), 1,
      anon_sym_LThttp,
    STATE(81), 2,
      sym__endpoint_type,
      sym_http_endpoint,
  [543] = 3,
    ACTIONS(94), 1,
      anon_sym_name,
    ACTIONS(142), 1,
      anon_sym_GT,
    STATE(102), 1,
      sym_name,
  [553] = 1,
    ACTIONS(144), 3,
      anon_sym_GT,
      anon_sym_uri_DASHtemplate,
      anon_sym_method,
  [559] = 2,
    STATE(131), 1,
      sym_boolean,
    ACTIONS(146), 2,
      anon_sym_true,
      anon_sym_false,
  [567] = 2,
    ACTIONS(94), 1,
      anon_sym_name,
    STATE(34), 1,
      sym_name,
  [574] = 2,
    ACTIONS(148), 1,
      anon_sym_version,
    STATE(47), 1,
      sym_version_info,
  [581] = 1,
    ACTIONS(150), 2,
      anon_sym_QMARK_GT,
      anon_sym_encoding,
  [586] = 1,
    ACTIONS(152), 2,
      ts_builtin_sym_end,
      anon_sym_LTsequence,
  [591] = 2,
    ACTIONS(154), 1,
      anon_sym_LTduration_GT,
    STATE(63), 1,
      sym_duration,
  [598] = 2,
    ACTIONS(156), 1,
      anon_sym_level,
    STATE(64), 1,
      sym_level,
  [605] = 1,
    ACTIONS(158), 2,
      ts_builtin_sym_end,
      anon_sym_LTsequence,
  [610] = 1,
    ACTIONS(160), 2,
      ts_builtin_sym_end,
      anon_sym_LTsequence,
  [615] = 1,
    ACTIONS(162), 2,
      anon_sym_LT_SLASHhttp_GT,
      anon_sym_LTtimeout_GT,
  [620] = 1,
    ACTIONS(164), 2,
      ts_builtin_sym_end,
      anon_sym_LTsequence,
  [625] = 2,
    ACTIONS(94), 1,
      anon_sym_name,
    STATE(77), 1,
      sym_name,
  [632] = 2,
    ACTIONS(166), 1,
      anon_sym_LTresponseAction_GT,
    STATE(125), 1,
      sym_response_action,
  [639] = 2,
    ACTIONS(168), 1,
      anon_sym_GT,
    ACTIONS(170), 1,
      anon_sym_SLASH_GT,
  [646] = 1,
    ACTIONS(172), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
  [651] = 1,
    ACTIONS(174), 2,
      anon_sym_true,
      anon_sym_false,
  [656] = 1,
    ACTIONS(176), 1,
      sym_identifier,
  [660] = 1,
    ACTIONS(178), 1,
      anon_sym_EQ,
  [664] = 1,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
  [668] = 1,
    ACTIONS(182), 1,
      anon_sym_LT_SLASHcall_GT,
  [672] = 1,
    ACTIONS(184), 1,
      anon_sym_LT_SLASHcall_GT,
  [676] = 1,
    ACTIONS(186), 1,
      anon_sym_LT_SLASHcall_GT,
  [680] = 1,
    ACTIONS(188), 1,
      anon_sym_EQ,
  [684] = 1,
    ACTIONS(190), 1,
      anon_sym_LT_SLASHcall_GT,
  [688] = 1,
    ACTIONS(192), 1,
      anon_sym_QMARK_GT,
  [692] = 1,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
  [696] = 1,
    ACTIONS(196), 1,
      anon_sym_GT,
  [700] = 1,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
  [704] = 1,
    ACTIONS(200), 1,
      sym_identifier,
  [708] = 1,
    ACTIONS(202), 1,
      anon_sym_EQ,
  [712] = 1,
    ACTIONS(204), 1,
      anon_sym_LT_SLASHendpoint_GT,
  [716] = 1,
    ACTIONS(206), 1,
      anon_sym_DQUOTE,
  [720] = 1,
    ACTIONS(208), 1,
      sym_identifier,
  [724] = 1,
    ACTIONS(210), 1,
      anon_sym_DQUOTE,
  [728] = 1,
    ACTIONS(212), 1,
      anon_sym_GT,
  [732] = 1,
    ACTIONS(214), 1,
      anon_sym_DQUOTE,
  [736] = 1,
    ACTIONS(216), 1,
      anon_sym_LT_SLASHcall_GT,
  [740] = 1,
    ACTIONS(218), 1,
      anon_sym_LT_SLASHcall_GT,
  [744] = 1,
    ACTIONS(220), 1,
      anon_sym_LT_SLASHcall_GT,
  [748] = 1,
    ACTIONS(222), 1,
      anon_sym_LT_SLASHcall_GT,
  [752] = 1,
    ACTIONS(224), 1,
      anon_sym_EQ,
  [756] = 1,
    ACTIONS(226), 1,
      anon_sym_DQUOTE,
  [760] = 1,
    ACTIONS(228), 1,
      anon_sym_DQUOTE,
  [764] = 1,
    ACTIONS(230), 1,
      anon_sym_SLASH_GT,
  [768] = 1,
    ACTIONS(232), 1,
      anon_sym_EQ,
  [772] = 1,
    ACTIONS(234), 1,
      anon_sym_EQ,
  [776] = 1,
    ACTIONS(236), 1,
      anon_sym_SLASH_GT,
  [780] = 1,
    ACTIONS(238), 1,
      anon_sym_LT_SLASHcall_GT,
  [784] = 1,
    ACTIONS(240), 1,
      anon_sym_LT_SLASHendpoint_GT,
  [788] = 1,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
  [792] = 1,
    ACTIONS(244), 1,
      anon_sym_GT,
  [796] = 1,
    ACTIONS(246), 1,
      anon_sym_GT,
  [800] = 1,
    ACTIONS(248), 1,
      anon_sym_EQ,
  [804] = 1,
    ACTIONS(250), 1,
      anon_sym_SLASH_GT,
  [808] = 1,
    ACTIONS(252), 1,
      anon_sym_SLASH_GT,
  [812] = 1,
    ACTIONS(254), 1,
      anon_sym_LT_SLASHendpoint_GT,
  [816] = 1,
    ACTIONS(256), 1,
      anon_sym_DQUOTE,
  [820] = 1,
    ACTIONS(258), 1,
      anon_sym_DQUOTE,
  [824] = 1,
    ACTIONS(260), 1,
      anon_sym_DQUOTE,
  [828] = 1,
    ACTIONS(262), 1,
      anon_sym_DQUOTE,
  [832] = 1,
    ACTIONS(264), 1,
      anon_sym_GT,
  [836] = 1,
    ACTIONS(266), 1,
      ts_builtin_sym_end,
  [840] = 1,
    ACTIONS(268), 1,
      anon_sym_LT_SLASHcall_GT,
  [844] = 1,
    ACTIONS(270), 1,
      anon_sym_SLASH_GT,
  [848] = 1,
    ACTIONS(272), 1,
      sym_number,
  [852] = 1,
    ACTIONS(274), 1,
      anon_sym_EQ,
  [856] = 1,
    ACTIONS(276), 1,
      anon_sym_LT_SLASHendpoint_GT,
  [860] = 1,
    ACTIONS(278), 1,
      anon_sym_EQ,
  [864] = 1,
    ACTIONS(280), 1,
      sym_identifier,
  [868] = 1,
    ACTIONS(282), 1,
      anon_sym_DQUOTE,
  [872] = 1,
    ACTIONS(284), 1,
      sym_encoding,
  [876] = 1,
    ACTIONS(286), 1,
      anon_sym_LT_SLASHcall_GT,
  [880] = 1,
    ACTIONS(288), 1,
      anon_sym_LT_SLASHduration_GT,
  [884] = 1,
    ACTIONS(290), 1,
      sym_identifier,
  [888] = 1,
    ACTIONS(292), 1,
      anon_sym_LT_SLASHtimeout_GT,
  [892] = 1,
    ACTIONS(294), 1,
      anon_sym_DQUOTE,
  [896] = 1,
    ACTIONS(296), 1,
      anon_sym_DQUOTE,
  [900] = 1,
    ACTIONS(298), 1,
      anon_sym_LT_SLASHendpoint_GT,
  [904] = 1,
    ACTIONS(300), 1,
      anon_sym_LTresponseAction_GT,
  [908] = 1,
    ACTIONS(302), 1,
      anon_sym_LT_SLASHresponseAction_GT,
  [912] = 1,
    ACTIONS(304), 1,
      anon_sym_LT_SLASHresponseAction_GT,
  [916] = 1,
    ACTIONS(306), 1,
      anon_sym_QMARK_GT,
  [920] = 1,
    ACTIONS(308), 1,
      anon_sym_EQ,
  [924] = 1,
    ACTIONS(310), 1,
      sym_version_number,
  [928] = 1,
    ACTIONS(312), 1,
      anon_sym_LT_SLASHtimeout_GT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 17,
  [SMALL_STATE(4)] = 43,
  [SMALL_STATE(5)] = 69,
  [SMALL_STATE(6)] = 95,
  [SMALL_STATE(7)] = 111,
  [SMALL_STATE(8)] = 127,
  [SMALL_STATE(9)] = 143,
  [SMALL_STATE(10)] = 152,
  [SMALL_STATE(11)] = 161,
  [SMALL_STATE(12)] = 169,
  [SMALL_STATE(13)] = 177,
  [SMALL_STATE(14)] = 185,
  [SMALL_STATE(15)] = 197,
  [SMALL_STATE(16)] = 209,
  [SMALL_STATE(17)] = 217,
  [SMALL_STATE(18)] = 225,
  [SMALL_STATE(19)] = 233,
  [SMALL_STATE(20)] = 245,
  [SMALL_STATE(21)] = 253,
  [SMALL_STATE(22)] = 265,
  [SMALL_STATE(23)] = 273,
  [SMALL_STATE(24)] = 281,
  [SMALL_STATE(25)] = 293,
  [SMALL_STATE(26)] = 305,
  [SMALL_STATE(27)] = 321,
  [SMALL_STATE(28)] = 329,
  [SMALL_STATE(29)] = 341,
  [SMALL_STATE(30)] = 349,
  [SMALL_STATE(31)] = 357,
  [SMALL_STATE(32)] = 369,
  [SMALL_STATE(33)] = 377,
  [SMALL_STATE(34)] = 389,
  [SMALL_STATE(35)] = 402,
  [SMALL_STATE(36)] = 415,
  [SMALL_STATE(37)] = 428,
  [SMALL_STATE(38)] = 441,
  [SMALL_STATE(39)] = 448,
  [SMALL_STATE(40)] = 455,
  [SMALL_STATE(41)] = 466,
  [SMALL_STATE(42)] = 477,
  [SMALL_STATE(43)] = 490,
  [SMALL_STATE(44)] = 501,
  [SMALL_STATE(45)] = 511,
  [SMALL_STATE(46)] = 519,
  [SMALL_STATE(47)] = 525,
  [SMALL_STATE(48)] = 535,
  [SMALL_STATE(49)] = 543,
  [SMALL_STATE(50)] = 553,
  [SMALL_STATE(51)] = 559,
  [SMALL_STATE(52)] = 567,
  [SMALL_STATE(53)] = 574,
  [SMALL_STATE(54)] = 581,
  [SMALL_STATE(55)] = 586,
  [SMALL_STATE(56)] = 591,
  [SMALL_STATE(57)] = 598,
  [SMALL_STATE(58)] = 605,
  [SMALL_STATE(59)] = 610,
  [SMALL_STATE(60)] = 615,
  [SMALL_STATE(61)] = 620,
  [SMALL_STATE(62)] = 625,
  [SMALL_STATE(63)] = 632,
  [SMALL_STATE(64)] = 639,
  [SMALL_STATE(65)] = 646,
  [SMALL_STATE(66)] = 651,
  [SMALL_STATE(67)] = 656,
  [SMALL_STATE(68)] = 660,
  [SMALL_STATE(69)] = 664,
  [SMALL_STATE(70)] = 668,
  [SMALL_STATE(71)] = 672,
  [SMALL_STATE(72)] = 676,
  [SMALL_STATE(73)] = 680,
  [SMALL_STATE(74)] = 684,
  [SMALL_STATE(75)] = 688,
  [SMALL_STATE(76)] = 692,
  [SMALL_STATE(77)] = 696,
  [SMALL_STATE(78)] = 700,
  [SMALL_STATE(79)] = 704,
  [SMALL_STATE(80)] = 708,
  [SMALL_STATE(81)] = 712,
  [SMALL_STATE(82)] = 716,
  [SMALL_STATE(83)] = 720,
  [SMALL_STATE(84)] = 724,
  [SMALL_STATE(85)] = 728,
  [SMALL_STATE(86)] = 732,
  [SMALL_STATE(87)] = 736,
  [SMALL_STATE(88)] = 740,
  [SMALL_STATE(89)] = 744,
  [SMALL_STATE(90)] = 748,
  [SMALL_STATE(91)] = 752,
  [SMALL_STATE(92)] = 756,
  [SMALL_STATE(93)] = 760,
  [SMALL_STATE(94)] = 764,
  [SMALL_STATE(95)] = 768,
  [SMALL_STATE(96)] = 772,
  [SMALL_STATE(97)] = 776,
  [SMALL_STATE(98)] = 780,
  [SMALL_STATE(99)] = 784,
  [SMALL_STATE(100)] = 788,
  [SMALL_STATE(101)] = 792,
  [SMALL_STATE(102)] = 796,
  [SMALL_STATE(103)] = 800,
  [SMALL_STATE(104)] = 804,
  [SMALL_STATE(105)] = 808,
  [SMALL_STATE(106)] = 812,
  [SMALL_STATE(107)] = 816,
  [SMALL_STATE(108)] = 820,
  [SMALL_STATE(109)] = 824,
  [SMALL_STATE(110)] = 828,
  [SMALL_STATE(111)] = 832,
  [SMALL_STATE(112)] = 836,
  [SMALL_STATE(113)] = 840,
  [SMALL_STATE(114)] = 844,
  [SMALL_STATE(115)] = 848,
  [SMALL_STATE(116)] = 852,
  [SMALL_STATE(117)] = 856,
  [SMALL_STATE(118)] = 860,
  [SMALL_STATE(119)] = 864,
  [SMALL_STATE(120)] = 868,
  [SMALL_STATE(121)] = 872,
  [SMALL_STATE(122)] = 876,
  [SMALL_STATE(123)] = 880,
  [SMALL_STATE(124)] = 884,
  [SMALL_STATE(125)] = 888,
  [SMALL_STATE(126)] = 892,
  [SMALL_STATE(127)] = 896,
  [SMALL_STATE(128)] = 900,
  [SMALL_STATE(129)] = 904,
  [SMALL_STATE(130)] = 908,
  [SMALL_STATE(131)] = 912,
  [SMALL_STATE(132)] = 916,
  [SMALL_STATE(133)] = 920,
  [SMALL_STATE(134)] = 924,
  [SMALL_STATE(135)] = 928,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_definition_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_definition_repeat1, 2), SHIFT_REPEAT(23),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_definition_repeat1, 2), SHIFT_REPEAT(57),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_definition_repeat1, 2), SHIFT_REPEAT(52),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_definition_repeat1, 2), SHIFT_REPEAT(26),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_http_endpoint_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_http_endpoint_repeat1, 2), SHIFT_REPEAT(95),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_http_endpoint_repeat1, 2), SHIFT_REPEAT(96),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, .production_id = 4),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, .production_id = 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 6, .production_id = 13),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5, .production_id = 7),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, .production_id = 6),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log, 5, .production_id = 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 6, .production_id = 12),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log, 3, .production_id = 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log, 4, .production_id = 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, .production_id = 5),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_respond, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mediator, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5, .production_id = 8),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5, .production_id = 9),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_http_endpoint_repeat2, 2),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_http_endpoint_repeat2, 2), SHIFT_REPEAT(56),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5, .production_id = 10),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 5),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_log_repeat1, 2),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_repeat1, 2), SHIFT_REPEAT(52),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 5),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uri_template, 5),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_info, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_definition, 5, .production_id = 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_definition, 4, .production_id = 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_declaration, 4),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timeout, 4, .production_id = 16),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_declaration, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_level, 5),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_encoding_declaration, 3),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endpoint, 4, .production_id = 11),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blocking, 5),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 5),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 5),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_endpoint, 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [266] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endpoint, 5, .production_id = 14),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_endpoint, 4),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endpoint_reference, 6),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_endpoint, 5),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration, 3, .production_id = 15),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_action, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_apachesynapse(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
