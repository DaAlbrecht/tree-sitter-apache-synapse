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
#define STATE_COUNT 257
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 163
#define ALIAS_COUNT 0
#define TOKEN_COUNT 103
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 15
#define MAX_ALIAS_SEQUENCE_LENGTH 13
#define PRODUCTION_ID_COUNT 23

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
  anon_sym_LTforeach = 11,
  anon_sym_sequence = 12,
  anon_sym_EQ = 13,
  anon_sym_DQUOTE = 14,
  anon_sym_LTsequence_GT = 15,
  anon_sym_LT_SLASHforeach_GT = 16,
  anon_sym_LTfilter = 17,
  anon_sym_xpath = 18,
  anon_sym_LT_SLASHfilter_GT = 19,
  anon_sym_LTthen_GT = 20,
  anon_sym_LT_SLASHthen_GT = 21,
  anon_sym_LTelse_GT = 22,
  anon_sym_LT_SLASHelse_GT = 23,
  anon_sym_source = 24,
  anon_sym_regex = 25,
  anon_sym_LTendpoint = 26,
  anon_sym_LT_SLASHendpoint_GT = 27,
  anon_sym_LThttp = 28,
  anon_sym_LT_SLASHhttp_GT = 29,
  anon_sym_uri_DASHtemplate = 30,
  anon_sym_method = 31,
  anon_sym_GET = 32,
  anon_sym_POST = 33,
  anon_sym_PUT = 34,
  anon_sym_DELETE = 35,
  anon_sym_HEAD = 36,
  anon_sym_OPTIONS = 37,
  anon_sym_PATCH = 38,
  anon_sym_get = 39,
  anon_sym_post = 40,
  anon_sym_put = 41,
  anon_sym_delete = 42,
  anon_sym_head = 43,
  anon_sym_options = 44,
  anon_sym_patch = 45,
  anon_sym_LTtimeout_GT = 46,
  anon_sym_LT_SLASHtimeout_GT = 47,
  anon_sym_LTmarkForSuspension_GT = 48,
  anon_sym_LT_SLASHmarkForSuspension_GT = 49,
  anon_sym_LTretriesBeforeSuspension_GT = 50,
  anon_sym_LT_SLASHretriesBeforeSuspension_GT = 51,
  anon_sym_LTretryDelay_GT = 52,
  anon_sym_LT_SLASHretryDelay_GT = 53,
  anon_sym_LTsuspendOnFailure_GT = 54,
  anon_sym_LT_SLASHsuspendOnFailure_GT = 55,
  anon_sym_LTinitialDuration_GT = 56,
  anon_sym_LT_SLASHinitialDuration_GT = 57,
  anon_sym_LTprogressionFactor_GT = 58,
  anon_sym_LT_SLASHprogressionFactor_GT = 59,
  anon_sym_LTmaximumDuration_GT = 60,
  anon_sym_LT_SLASHmaximumDuration_GT = 61,
  anon_sym_LTerrorCodes_GT = 62,
  anon_sym_COMMA = 63,
  anon_sym_LT_SLASHerrorCodes_GT = 64,
  anon_sym_LTduration_GT = 65,
  anon_sym_LT_SLASHduration_GT = 66,
  anon_sym_LTresponseAction_GT = 67,
  anon_sym_never = 68,
  anon_sym_discard = 69,
  anon_sym_fault = 70,
  anon_sym_LT_SLASHresponseAction_GT = 71,
  anon_sym_LTkey = 72,
  anon_sym_blocking = 73,
  anon_sym_true = 74,
  anon_sym_false = 75,
  anon_sym_value = 76,
  anon_sym_expression = 77,
  anon_sym_json_DASHeval_LPAREN = 78,
  anon_sym_RPAREN = 79,
  anon_sym_name = 80,
  anon_sym_id = 81,
  anon_sym_level = 82,
  anon_sym_full = 83,
  anon_sym_simple = 84,
  anon_sym_custom = 85,
  anon_sym_headers = 86,
  aux_sym_identifier_token1 = 87,
  sym__float = 88,
  sym__unsigned_int = 89,
  sym__int = 90,
  sym_expression_string = 91,
  anon_sym_LT_QMARKxml = 92,
  anon_sym_QMARK_GT = 93,
  anon_sym_version = 94,
  sym_version_number = 95,
  anon_sym_encoding = 96,
  sym_encoding = 97,
  anon_sym_SLASH = 98,
  anon_sym_SLASH_SLASH = 99,
  anon_sym_DOT_DOT = 100,
  anon_sym_DOT = 101,
  anon_sym_AT = 102,
  sym_source_file = 103,
  sym__definition = 104,
  sym_sequence_definition = 105,
  sym_mediator = 106,
  sym_respond = 107,
  sym_log = 108,
  sym_property = 109,
  sym_call = 110,
  sym_foreach = 111,
  sym_filter = 112,
  sym_then = 113,
  sym_else = 114,
  sym_source = 115,
  sym_regex = 116,
  sym_endpoint = 117,
  sym__endpoint_type = 118,
  sym_http_endpoint = 119,
  sym__endpoint_attribute = 120,
  sym_method = 121,
  sym_endpoint_error_property = 122,
  sym_timeout = 123,
  sym_mark_for_suspending = 124,
  sym__mark_for_suspending_property = 125,
  sym_retries_before_suspending = 126,
  sym_retry_delay = 127,
  sym_suspend_on_failure = 128,
  sym__suspend_on_failure_property = 129,
  sym_initial_duration = 130,
  sym_progression_factor = 131,
  sym_maximum_duration = 132,
  sym_error_codes = 133,
  sym__timeout_property = 134,
  sym_duration = 135,
  sym_response_action = 136,
  sym_endpoint_reference = 137,
  sym_blocking = 138,
  sym_value = 139,
  sym_expression = 140,
  sym_json_eval = 141,
  sym_name = 142,
  sym_id = 143,
  sym_level = 144,
  sym_identifier = 145,
  sym_number = 146,
  sym_xml_declaration = 147,
  sym_version_info = 148,
  sym_encoding_declaration = 149,
  sym_xpath = 150,
  sym__xpath_node = 151,
  sym__xpath_selectors = 152,
  aux_sym_source_file_repeat1 = 153,
  aux_sym_sequence_definition_repeat1 = 154,
  aux_sym_log_repeat1 = 155,
  aux_sym_http_endpoint_repeat1 = 156,
  aux_sym_http_endpoint_repeat2 = 157,
  aux_sym_timeout_repeat1 = 158,
  aux_sym_mark_for_suspending_repeat1 = 159,
  aux_sym_suspend_on_failure_repeat1 = 160,
  aux_sym_error_codes_repeat1 = 161,
  aux_sym_xpath_repeat1 = 162,
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
  [anon_sym_LTforeach] = "<foreach",
  [anon_sym_sequence] = "sequence",
  [anon_sym_EQ] = "=",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_LTsequence_GT] = "<sequence>",
  [anon_sym_LT_SLASHforeach_GT] = "</foreach>",
  [anon_sym_LTfilter] = "<filter",
  [anon_sym_xpath] = "xpath",
  [anon_sym_LT_SLASHfilter_GT] = "</filter>",
  [anon_sym_LTthen_GT] = "<then>",
  [anon_sym_LT_SLASHthen_GT] = "</then>",
  [anon_sym_LTelse_GT] = "<else>",
  [anon_sym_LT_SLASHelse_GT] = "</else>",
  [anon_sym_source] = "source",
  [anon_sym_regex] = "regex",
  [anon_sym_LTendpoint] = "<endpoint",
  [anon_sym_LT_SLASHendpoint_GT] = "</endpoint>",
  [anon_sym_LThttp] = "<http",
  [anon_sym_LT_SLASHhttp_GT] = "</http>",
  [anon_sym_uri_DASHtemplate] = "uri-template",
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
  [anon_sym_LTmarkForSuspension_GT] = "<markForSuspension>",
  [anon_sym_LT_SLASHmarkForSuspension_GT] = "</markForSuspension>",
  [anon_sym_LTretriesBeforeSuspension_GT] = "<retriesBeforeSuspension>",
  [anon_sym_LT_SLASHretriesBeforeSuspension_GT] = "</retriesBeforeSuspension>",
  [anon_sym_LTretryDelay_GT] = "<retryDelay>",
  [anon_sym_LT_SLASHretryDelay_GT] = "</retryDelay>",
  [anon_sym_LTsuspendOnFailure_GT] = "<suspendOnFailure>",
  [anon_sym_LT_SLASHsuspendOnFailure_GT] = "</suspendOnFailure>",
  [anon_sym_LTinitialDuration_GT] = "<initialDuration>",
  [anon_sym_LT_SLASHinitialDuration_GT] = "</initialDuration>",
  [anon_sym_LTprogressionFactor_GT] = "<progressionFactor>",
  [anon_sym_LT_SLASHprogressionFactor_GT] = "</progressionFactor>",
  [anon_sym_LTmaximumDuration_GT] = "<maximumDuration>",
  [anon_sym_LT_SLASHmaximumDuration_GT] = "</maximumDuration>",
  [anon_sym_LTerrorCodes_GT] = "<errorCodes>",
  [anon_sym_COMMA] = ",",
  [anon_sym_LT_SLASHerrorCodes_GT] = "</errorCodes>",
  [anon_sym_LTduration_GT] = "<duration>",
  [anon_sym_LT_SLASHduration_GT] = "</duration>",
  [anon_sym_LTresponseAction_GT] = "<responseAction>",
  [anon_sym_never] = "never",
  [anon_sym_discard] = "discard",
  [anon_sym_fault] = "fault",
  [anon_sym_LT_SLASHresponseAction_GT] = "</responseAction>",
  [anon_sym_LTkey] = "<key",
  [anon_sym_blocking] = "blocking",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_value] = "value",
  [anon_sym_expression] = "expression",
  [anon_sym_json_DASHeval_LPAREN] = "json-eval(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_name] = "name",
  [anon_sym_id] = "id",
  [anon_sym_level] = "level",
  [anon_sym_full] = "full",
  [anon_sym_simple] = "simple",
  [anon_sym_custom] = "custom",
  [anon_sym_headers] = "headers",
  [aux_sym_identifier_token1] = "identifier_token1",
  [sym__float] = "_float",
  [sym__unsigned_int] = "_unsigned_int",
  [sym__int] = "_int",
  [sym_expression_string] = "expression_string",
  [anon_sym_LT_QMARKxml] = "<\?xml",
  [anon_sym_QMARK_GT] = "\?>",
  [anon_sym_version] = "version",
  [sym_version_number] = "version_number",
  [anon_sym_encoding] = "encoding",
  [sym_encoding] = "encoding",
  [anon_sym_SLASH] = "/",
  [anon_sym_SLASH_SLASH] = "//",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_DOT] = ".",
  [anon_sym_AT] = "@",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_sequence_definition] = "sequence_definition",
  [sym_mediator] = "mediator",
  [sym_respond] = "respond",
  [sym_log] = "log",
  [sym_property] = "property",
  [sym_call] = "call",
  [sym_foreach] = "foreach",
  [sym_filter] = "filter",
  [sym_then] = "then",
  [sym_else] = "else",
  [sym_source] = "source",
  [sym_regex] = "regex",
  [sym_endpoint] = "endpoint",
  [sym__endpoint_type] = "_endpoint_type",
  [sym_http_endpoint] = "http_endpoint",
  [sym__endpoint_attribute] = "_endpoint_attribute",
  [sym_method] = "method",
  [sym_endpoint_error_property] = "endpoint_error_property",
  [sym_timeout] = "timeout",
  [sym_mark_for_suspending] = "mark_for_suspending",
  [sym__mark_for_suspending_property] = "_mark_for_suspending_property",
  [sym_retries_before_suspending] = "retries_before_suspending",
  [sym_retry_delay] = "retry_delay",
  [sym_suspend_on_failure] = "suspend_on_failure",
  [sym__suspend_on_failure_property] = "_suspend_on_failure_property",
  [sym_initial_duration] = "initial_duration",
  [sym_progression_factor] = "progression_factor",
  [sym_maximum_duration] = "maximum_duration",
  [sym_error_codes] = "error_codes",
  [sym__timeout_property] = "_timeout_property",
  [sym_duration] = "duration",
  [sym_response_action] = "response_action",
  [sym_endpoint_reference] = "endpoint_reference",
  [sym_blocking] = "blocking",
  [sym_value] = "value",
  [sym_expression] = "expression",
  [sym_json_eval] = "json_eval",
  [sym_name] = "name",
  [sym_id] = "id",
  [sym_level] = "level",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_xml_declaration] = "xml_declaration",
  [sym_version_info] = "version_info",
  [sym_encoding_declaration] = "encoding_declaration",
  [sym_xpath] = "xpath",
  [sym__xpath_node] = "_xpath_node",
  [sym__xpath_selectors] = "_xpath_selectors",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_sequence_definition_repeat1] = "sequence_definition_repeat1",
  [aux_sym_log_repeat1] = "log_repeat1",
  [aux_sym_http_endpoint_repeat1] = "http_endpoint_repeat1",
  [aux_sym_http_endpoint_repeat2] = "http_endpoint_repeat2",
  [aux_sym_timeout_repeat1] = "timeout_repeat1",
  [aux_sym_mark_for_suspending_repeat1] = "mark_for_suspending_repeat1",
  [aux_sym_suspend_on_failure_repeat1] = "suspend_on_failure_repeat1",
  [aux_sym_error_codes_repeat1] = "error_codes_repeat1",
  [aux_sym_xpath_repeat1] = "xpath_repeat1",
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
  [anon_sym_LTforeach] = anon_sym_LTforeach,
  [anon_sym_sequence] = anon_sym_sequence,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_LTsequence_GT] = anon_sym_LTsequence_GT,
  [anon_sym_LT_SLASHforeach_GT] = anon_sym_LT_SLASHforeach_GT,
  [anon_sym_LTfilter] = anon_sym_LTfilter,
  [anon_sym_xpath] = anon_sym_xpath,
  [anon_sym_LT_SLASHfilter_GT] = anon_sym_LT_SLASHfilter_GT,
  [anon_sym_LTthen_GT] = anon_sym_LTthen_GT,
  [anon_sym_LT_SLASHthen_GT] = anon_sym_LT_SLASHthen_GT,
  [anon_sym_LTelse_GT] = anon_sym_LTelse_GT,
  [anon_sym_LT_SLASHelse_GT] = anon_sym_LT_SLASHelse_GT,
  [anon_sym_source] = anon_sym_source,
  [anon_sym_regex] = anon_sym_regex,
  [anon_sym_LTendpoint] = anon_sym_LTendpoint,
  [anon_sym_LT_SLASHendpoint_GT] = anon_sym_LT_SLASHendpoint_GT,
  [anon_sym_LThttp] = anon_sym_LThttp,
  [anon_sym_LT_SLASHhttp_GT] = anon_sym_LT_SLASHhttp_GT,
  [anon_sym_uri_DASHtemplate] = anon_sym_uri_DASHtemplate,
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
  [anon_sym_LTmarkForSuspension_GT] = anon_sym_LTmarkForSuspension_GT,
  [anon_sym_LT_SLASHmarkForSuspension_GT] = anon_sym_LT_SLASHmarkForSuspension_GT,
  [anon_sym_LTretriesBeforeSuspension_GT] = anon_sym_LTretriesBeforeSuspension_GT,
  [anon_sym_LT_SLASHretriesBeforeSuspension_GT] = anon_sym_LT_SLASHretriesBeforeSuspension_GT,
  [anon_sym_LTretryDelay_GT] = anon_sym_LTretryDelay_GT,
  [anon_sym_LT_SLASHretryDelay_GT] = anon_sym_LT_SLASHretryDelay_GT,
  [anon_sym_LTsuspendOnFailure_GT] = anon_sym_LTsuspendOnFailure_GT,
  [anon_sym_LT_SLASHsuspendOnFailure_GT] = anon_sym_LT_SLASHsuspendOnFailure_GT,
  [anon_sym_LTinitialDuration_GT] = anon_sym_LTinitialDuration_GT,
  [anon_sym_LT_SLASHinitialDuration_GT] = anon_sym_LT_SLASHinitialDuration_GT,
  [anon_sym_LTprogressionFactor_GT] = anon_sym_LTprogressionFactor_GT,
  [anon_sym_LT_SLASHprogressionFactor_GT] = anon_sym_LT_SLASHprogressionFactor_GT,
  [anon_sym_LTmaximumDuration_GT] = anon_sym_LTmaximumDuration_GT,
  [anon_sym_LT_SLASHmaximumDuration_GT] = anon_sym_LT_SLASHmaximumDuration_GT,
  [anon_sym_LTerrorCodes_GT] = anon_sym_LTerrorCodes_GT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LT_SLASHerrorCodes_GT] = anon_sym_LT_SLASHerrorCodes_GT,
  [anon_sym_LTduration_GT] = anon_sym_LTduration_GT,
  [anon_sym_LT_SLASHduration_GT] = anon_sym_LT_SLASHduration_GT,
  [anon_sym_LTresponseAction_GT] = anon_sym_LTresponseAction_GT,
  [anon_sym_never] = anon_sym_never,
  [anon_sym_discard] = anon_sym_discard,
  [anon_sym_fault] = anon_sym_fault,
  [anon_sym_LT_SLASHresponseAction_GT] = anon_sym_LT_SLASHresponseAction_GT,
  [anon_sym_LTkey] = anon_sym_LTkey,
  [anon_sym_blocking] = anon_sym_blocking,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_value] = anon_sym_value,
  [anon_sym_expression] = anon_sym_expression,
  [anon_sym_json_DASHeval_LPAREN] = anon_sym_json_DASHeval_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_name] = anon_sym_name,
  [anon_sym_id] = anon_sym_id,
  [anon_sym_level] = anon_sym_level,
  [anon_sym_full] = anon_sym_full,
  [anon_sym_simple] = anon_sym_simple,
  [anon_sym_custom] = anon_sym_custom,
  [anon_sym_headers] = anon_sym_headers,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [sym__float] = sym__float,
  [sym__unsigned_int] = sym__unsigned_int,
  [sym__int] = sym__int,
  [sym_expression_string] = sym_expression_string,
  [anon_sym_LT_QMARKxml] = anon_sym_LT_QMARKxml,
  [anon_sym_QMARK_GT] = anon_sym_QMARK_GT,
  [anon_sym_version] = anon_sym_version,
  [sym_version_number] = sym_version_number,
  [anon_sym_encoding] = anon_sym_encoding,
  [sym_encoding] = sym_encoding,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_AT] = anon_sym_AT,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_sequence_definition] = sym_sequence_definition,
  [sym_mediator] = sym_mediator,
  [sym_respond] = sym_respond,
  [sym_log] = sym_log,
  [sym_property] = sym_property,
  [sym_call] = sym_call,
  [sym_foreach] = sym_foreach,
  [sym_filter] = sym_filter,
  [sym_then] = sym_then,
  [sym_else] = sym_else,
  [sym_source] = sym_source,
  [sym_regex] = sym_regex,
  [sym_endpoint] = sym_endpoint,
  [sym__endpoint_type] = sym__endpoint_type,
  [sym_http_endpoint] = sym_http_endpoint,
  [sym__endpoint_attribute] = sym__endpoint_attribute,
  [sym_method] = sym_method,
  [sym_endpoint_error_property] = sym_endpoint_error_property,
  [sym_timeout] = sym_timeout,
  [sym_mark_for_suspending] = sym_mark_for_suspending,
  [sym__mark_for_suspending_property] = sym__mark_for_suspending_property,
  [sym_retries_before_suspending] = sym_retries_before_suspending,
  [sym_retry_delay] = sym_retry_delay,
  [sym_suspend_on_failure] = sym_suspend_on_failure,
  [sym__suspend_on_failure_property] = sym__suspend_on_failure_property,
  [sym_initial_duration] = sym_initial_duration,
  [sym_progression_factor] = sym_progression_factor,
  [sym_maximum_duration] = sym_maximum_duration,
  [sym_error_codes] = sym_error_codes,
  [sym__timeout_property] = sym__timeout_property,
  [sym_duration] = sym_duration,
  [sym_response_action] = sym_response_action,
  [sym_endpoint_reference] = sym_endpoint_reference,
  [sym_blocking] = sym_blocking,
  [sym_value] = sym_value,
  [sym_expression] = sym_expression,
  [sym_json_eval] = sym_json_eval,
  [sym_name] = sym_name,
  [sym_id] = sym_id,
  [sym_level] = sym_level,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_xml_declaration] = sym_xml_declaration,
  [sym_version_info] = sym_version_info,
  [sym_encoding_declaration] = sym_encoding_declaration,
  [sym_xpath] = sym_xpath,
  [sym__xpath_node] = sym__xpath_node,
  [sym__xpath_selectors] = sym__xpath_selectors,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_sequence_definition_repeat1] = aux_sym_sequence_definition_repeat1,
  [aux_sym_log_repeat1] = aux_sym_log_repeat1,
  [aux_sym_http_endpoint_repeat1] = aux_sym_http_endpoint_repeat1,
  [aux_sym_http_endpoint_repeat2] = aux_sym_http_endpoint_repeat2,
  [aux_sym_timeout_repeat1] = aux_sym_timeout_repeat1,
  [aux_sym_mark_for_suspending_repeat1] = aux_sym_mark_for_suspending_repeat1,
  [aux_sym_suspend_on_failure_repeat1] = aux_sym_suspend_on_failure_repeat1,
  [aux_sym_error_codes_repeat1] = aux_sym_error_codes_repeat1,
  [aux_sym_xpath_repeat1] = aux_sym_xpath_repeat1,
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
  [anon_sym_LTforeach] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sequence] = {
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
  [anon_sym_LTsequence_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHforeach_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTfilter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xpath] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHfilter_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTthen_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHthen_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTelse_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHelse_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_source] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_regex] = {
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
  [anon_sym_LTmarkForSuspension_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHmarkForSuspension_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTretriesBeforeSuspension_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHretriesBeforeSuspension_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTretryDelay_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHretryDelay_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTsuspendOnFailure_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHsuspendOnFailure_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTinitialDuration_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHinitialDuration_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTprogressionFactor_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHprogressionFactor_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTmaximumDuration_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHmaximumDuration_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTerrorCodes_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHerrorCodes_GT] = {
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
  [anon_sym_never] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_discard] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fault] = {
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
  [anon_sym_json_DASHeval_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_id] = {
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
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__float] = {
    .visible = false,
    .named = true,
  },
  [sym__unsigned_int] = {
    .visible = false,
    .named = true,
  },
  [sym__int] = {
    .visible = false,
    .named = true,
  },
  [sym_expression_string] = {
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
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
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
  [sym_foreach] = {
    .visible = true,
    .named = true,
  },
  [sym_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_then] = {
    .visible = true,
    .named = true,
  },
  [sym_else] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym_regex] = {
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
  [sym_method] = {
    .visible = true,
    .named = true,
  },
  [sym_endpoint_error_property] = {
    .visible = true,
    .named = true,
  },
  [sym_timeout] = {
    .visible = true,
    .named = true,
  },
  [sym_mark_for_suspending] = {
    .visible = true,
    .named = true,
  },
  [sym__mark_for_suspending_property] = {
    .visible = false,
    .named = true,
  },
  [sym_retries_before_suspending] = {
    .visible = true,
    .named = true,
  },
  [sym_retry_delay] = {
    .visible = true,
    .named = true,
  },
  [sym_suspend_on_failure] = {
    .visible = true,
    .named = true,
  },
  [sym__suspend_on_failure_property] = {
    .visible = false,
    .named = true,
  },
  [sym_initial_duration] = {
    .visible = true,
    .named = true,
  },
  [sym_progression_factor] = {
    .visible = true,
    .named = true,
  },
  [sym_maximum_duration] = {
    .visible = true,
    .named = true,
  },
  [sym_error_codes] = {
    .visible = true,
    .named = true,
  },
  [sym__timeout_property] = {
    .visible = false,
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
  [sym_json_eval] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_id] = {
    .visible = true,
    .named = true,
  },
  [sym_level] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
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
  [sym_xpath] = {
    .visible = true,
    .named = true,
  },
  [sym__xpath_node] = {
    .visible = false,
    .named = true,
  },
  [sym__xpath_selectors] = {
    .visible = false,
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
  [aux_sym_timeout_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mark_for_suspending_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_suspend_on_failure_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_error_codes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_xpath_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_blocking = 1,
  field_else = 2,
  field_endpoint = 3,
  field_endpoint_reference = 4,
  field_endpoint_type = 5,
  field_expression = 6,
  field_id = 7,
  field_level = 8,
  field_name = 9,
  field_number = 10,
  field_regex = 11,
  field_sequence = 12,
  field_source = 13,
  field_then = 14,
  field_value = 15,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_blocking] = "blocking",
  [field_else] = "else",
  [field_endpoint] = "endpoint",
  [field_endpoint_reference] = "endpoint_reference",
  [field_endpoint_type] = "endpoint_type",
  [field_expression] = "expression",
  [field_id] = "id",
  [field_level] = "level",
  [field_name] = "name",
  [field_number] = "number",
  [field_regex] = "regex",
  [field_sequence] = "sequence",
  [field_source] = "source",
  [field_then] = "then",
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
  [14] = {.index = 23, .length = 1},
  [15] = {.index = 24, .length = 3},
  [16] = {.index = 27, .length = 2},
  [17] = {.index = 29, .length = 2},
  [18] = {.index = 31, .length = 1},
  [19] = {.index = 32, .length = 1},
  [20] = {.index = 33, .length = 2},
  [21] = {.index = 35, .length = 6},
  [22] = {.index = 41, .length = 7},
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
    {field_expression, 1},
  [24] =
    {field_else, 4},
    {field_source, 1},
    {field_then, 3},
  [27] =
    {field_endpoint_type, 3},
    {field_name, 1},
  [29] =
    {field_expression, 1},
    {field_id, 2},
  [31] =
    {field_regex, 5},
  [32] =
    {field_number, 1},
  [33] =
    {field_else, 8},
    {field_then, 7},
  [35] =
    {field_expression, 1},
    {field_sequence, 2},
    {field_sequence, 3},
    {field_sequence, 4},
    {field_sequence, 5},
    {field_sequence, 6},
  [41] =
    {field_expression, 1},
    {field_id, 2},
    {field_sequence, 3},
    {field_sequence, 4},
    {field_sequence, 5},
    {field_sequence, 6},
    {field_sequence, 7},
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
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(575);
      if (lookahead == '"') ADVANCE(591);
      if (lookahead == ')') ADVANCE(682);
      if (lookahead == ',') ADVANCE(658);
      if (lookahead == '-') ADVANCE(571);
      if (lookahead == '.') ADVANCE(861);
      if (lookahead == '/') ADVANCE(858);
      if (lookahead == '<') ADVANCE(8);
      if (lookahead == '=') ADVANCE(590);
      if (lookahead == '>') ADVANCE(578);
      if (lookahead == '?') ADVANCE(13);
      if (lookahead == '@') ADVANCE(862);
      if (lookahead == 'D') ADVANCE(703);
      if (lookahead == 'G') ADVANCE(704);
      if (lookahead == 'H') ADVANCE(705);
      if (lookahead == 'O') ADVANCE(713);
      if (lookahead == 'P') ADVANCE(700);
      if (lookahead == 'b') ADVANCE(774);
      if (lookahead == 'c') ADVANCE(835);
      if (lookahead == 'd') ADVANCE(754);
      if (lookahead == 'e') ADVANCE(786);
      if (lookahead == 'f') ADVANCE(722);
      if (lookahead == 'g') ADVANCE(740);
      if (lookahead == 'h') ADVANCE(741);
      if (lookahead == 'i') ADVANCE(735);
      if (lookahead == 'j') ADVANCE(817);
      if (lookahead == 'l') ADVANCE(742);
      if (lookahead == 'm') ADVANCE(755);
      if (lookahead == 'n') ADVANCE(723);
      if (lookahead == 'o') ADVANCE(803);
      if (lookahead == 'p') ADVANCE(726);
      if (lookahead == 'r') ADVANCE(743);
      if (lookahead == 's') ADVANCE(744);
      if (lookahead == 't') ADVANCE(809);
      if (lookahead == 'u') ADVANCE(807);
      if (lookahead == 'v') ADVANCE(725);
      if (lookahead == 'x') ADVANCE(802);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(845);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(591);
      if (lookahead == '.') ADVANCE(861);
      if (lookahead == '/') ADVANCE(857);
      if (lookahead == '<') ADVANCE(492);
      if (lookahead == '@') ADVANCE(862);
      if (lookahead == 'j') ADVANCE(817);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(856);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(681);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(517);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(573);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(143);
      if (lookahead == '?') ADVANCE(565);
      if (lookahead == 'c') ADVANCE(99);
      if (lookahead == 'd') ADVANCE(536);
      if (lookahead == 'e') ADVANCE(288);
      if (lookahead == 'f') ADVANCE(251);
      if (lookahead == 'h') ADVANCE(506);
      if (lookahead == 'i') ADVANCE(325);
      if (lookahead == 'k') ADVANCE(160);
      if (lookahead == 'l') ADVANCE(366);
      if (lookahead == 'm') ADVANCE(100);
      if (lookahead == 'p') ADVANCE(435);
      if (lookahead == 'r') ADVANCE(161);
      if (lookahead == 's') ADVANCE(162);
      if (lookahead == 't') ADVANCE(246);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(26);
      END_STATE();
    case 10:
      if (lookahead == '1') ADVANCE(7);
      if (lookahead == 'U') ADVANCE(97);
      END_STATE();
    case 11:
      if (lookahead == '8') ADVANCE(3);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(583);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(850);
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(582);
      END_STATE();
    case 15:
      if (lookahead == '>') ADVANCE(600);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(598);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(586);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(601);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(609);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(599);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(597);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(641);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(593);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(642);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(660);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(580);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(592);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(661);
      END_STATE();
    case 29:
      if (lookahead == '>') ADVANCE(607);
      END_STATE();
    case 30:
      if (lookahead == '>') ADVANCE(579);
      END_STATE();
    case 31:
      if (lookahead == '>') ADVANCE(657);
      END_STATE();
    case 32:
      if (lookahead == '>') ADVANCE(647);
      END_STATE();
    case 33:
      if (lookahead == '>') ADVANCE(659);
      END_STATE();
    case 34:
      if (lookahead == '>') ADVANCE(648);
      END_STATE();
    case 35:
      if (lookahead == '>') ADVANCE(662);
      END_STATE();
    case 36:
      if (lookahead == '>') ADVANCE(669);
      END_STATE();
    case 37:
      if (lookahead == '>') ADVANCE(651);
      END_STATE();
    case 38:
      if (lookahead == '>') ADVANCE(655);
      END_STATE();
    case 39:
      if (lookahead == '>') ADVANCE(652);
      END_STATE();
    case 40:
      if (lookahead == '>') ADVANCE(656);
      END_STATE();
    case 41:
      if (lookahead == '>') ADVANCE(649);
      END_STATE();
    case 42:
      if (lookahead == '>') ADVANCE(650);
      END_STATE();
    case 43:
      if (lookahead == '>') ADVANCE(643);
      END_STATE();
    case 44:
      if (lookahead == '>') ADVANCE(653);
      END_STATE();
    case 45:
      if (lookahead == '>') ADVANCE(644);
      END_STATE();
    case 46:
      if (lookahead == '>') ADVANCE(654);
      END_STATE();
    case 47:
      if (lookahead == '>') ADVANCE(645);
      END_STATE();
    case 48:
      if (lookahead == '>') ADVANCE(646);
      END_STATE();
    case 49:
      if (lookahead == '?') ADVANCE(565);
      if (lookahead == 's') ADVANCE(222);
      END_STATE();
    case 50:
      if (lookahead == 'A') ADVANCE(145);
      END_STATE();
    case 51:
      if (lookahead == 'A') ADVANCE(59);
      END_STATE();
    case 52:
      if (lookahead == 'A') ADVANCE(96);
      if (lookahead == 'O') ADVANCE(88);
      if (lookahead == 'U') ADVANCE(94);
      END_STATE();
    case 53:
      if (lookahead == 'A') ADVANCE(146);
      END_STATE();
    case 54:
      if (lookahead == 'B') ADVANCE(166);
      END_STATE();
    case 55:
      if (lookahead == 'B') ADVANCE(232);
      END_STATE();
    case 56:
      if (lookahead == 'C') ADVANCE(78);
      END_STATE();
    case 57:
      if (lookahead == 'C') ADVANCE(370);
      END_STATE();
    case 58:
      if (lookahead == 'C') ADVANCE(401);
      END_STATE();
    case 59:
      if (lookahead == 'D') ADVANCE(621);
      END_STATE();
    case 60:
      if (lookahead == 'D') ADVANCE(192);
      END_STATE();
    case 61:
      if (lookahead == 'D') ADVANCE(212);
      END_STATE();
    case 62:
      if (lookahead == 'D') ADVANCE(554);
      END_STATE();
    case 63:
      if (lookahead == 'D') ADVANCE(555);
      END_STATE();
    case 64:
      if (lookahead == 'D') ADVANCE(556);
      END_STATE();
    case 65:
      if (lookahead == 'D') ADVANCE(557);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(80);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(619);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(51);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(92);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(98);
      END_STATE();
    case 71:
      if (lookahead == 'F') ADVANCE(5);
      END_STATE();
    case 72:
      if (lookahead == 'F') ADVANCE(107);
      END_STATE();
    case 73:
      if (lookahead == 'F') ADVANCE(118);
      END_STATE();
    case 74:
      if (lookahead == 'F') ADVANCE(380);
      END_STATE();
    case 75:
      if (lookahead == 'F') ADVANCE(120);
      END_STATE();
    case 76:
      if (lookahead == 'F') ADVANCE(126);
      END_STATE();
    case 77:
      if (lookahead == 'F') ADVANCE(405);
      END_STATE();
    case 78:
      if (lookahead == 'H') ADVANCE(625);
      END_STATE();
    case 79:
      if (lookahead == 'I') ADVANCE(82);
      END_STATE();
    case 80:
      if (lookahead == 'L') ADVANCE(70);
      END_STATE();
    case 81:
      if (lookahead == 'N') ADVANCE(86);
      END_STATE();
    case 82:
      if (lookahead == 'O') ADVANCE(81);
      END_STATE();
    case 83:
      if (lookahead == 'O') ADVANCE(330);
      END_STATE();
    case 84:
      if (lookahead == 'O') ADVANCE(363);
      END_STATE();
    case 85:
      if (lookahead == 'P') ADVANCE(93);
      END_STATE();
    case 86:
      if (lookahead == 'S') ADVANCE(623);
      END_STATE();
    case 87:
      if (lookahead == 'S') ADVANCE(550);
      END_STATE();
    case 88:
      if (lookahead == 'S') ADVANCE(95);
      END_STATE();
    case 89:
      if (lookahead == 'S') ADVANCE(558);
      END_STATE();
    case 90:
      if (lookahead == 'S') ADVANCE(559);
      END_STATE();
    case 91:
      if (lookahead == 'S') ADVANCE(560);
      END_STATE();
    case 92:
      if (lookahead == 'T') ADVANCE(613);
      END_STATE();
    case 93:
      if (lookahead == 'T') ADVANCE(79);
      END_STATE();
    case 94:
      if (lookahead == 'T') ADVANCE(617);
      END_STATE();
    case 95:
      if (lookahead == 'T') ADVANCE(615);
      END_STATE();
    case 96:
      if (lookahead == 'T') ADVANCE(56);
      END_STATE();
    case 97:
      if (lookahead == 'T') ADVANCE(71);
      END_STATE();
    case 98:
      if (lookahead == 'T') ADVANCE(67);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(296);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(429);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(311);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(569);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(511);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(294);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(258);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(291);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(524);
      if (lookahead == 'o') ADVANCE(476);
      if (lookahead == 'u') ADVANCE(503);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(309);
      if (lookahead == 'e') ADVANCE(454);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(513);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(441);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(299);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(319);
      if (lookahead == 'e') ADVANCE(563);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(570);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(521);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(528);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(531);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(532);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(533);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(534);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(279);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(313);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(467);
      END_STATE();
    case 129:
      if (lookahead == 'c') ADVANCE(243);
      END_STATE();
    case 130:
      if (lookahead == 'c') ADVANCE(286);
      END_STATE();
    case 131:
      if (lookahead == 'c') ADVANCE(247);
      END_STATE();
    case 132:
      if (lookahead == 'c') ADVANCE(244);
      END_STATE();
    case 133:
      if (lookahead == 'c') ADVANCE(544);
      if (lookahead == 'f') ADVANCE(546);
      if (lookahead == 'h') ADVANCE(198);
      if (lookahead == 's') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(133)
      END_STATE();
    case 134:
      if (lookahead == 'c') ADVANCE(526);
      END_STATE();
    case 135:
      if (lookahead == 'c') ADVANCE(112);
      END_STATE();
    case 136:
      if (lookahead == 'c') ADVANCE(378);
      END_STATE();
    case 137:
      if (lookahead == 'c') ADVANCE(165);
      END_STATE();
    case 138:
      if (lookahead == 'c') ADVANCE(203);
      END_STATE();
    case 139:
      if (lookahead == 'c') ADVANCE(173);
      END_STATE();
    case 140:
      if (lookahead == 'c') ADVANCE(174);
      END_STATE();
    case 141:
      if (lookahead == 'c') ADVANCE(175);
      END_STATE();
    case 142:
      if (lookahead == 'c') ADVANCE(207);
      END_STATE();
    case 143:
      if (lookahead == 'c') ADVANCE(113);
      if (lookahead == 'd') ADVANCE(553);
      if (lookahead == 'e') ADVANCE(306);
      if (lookahead == 'f') ADVANCE(266);
      if (lookahead == 'h') ADVANCE(523);
      if (lookahead == 'i') ADVANCE(365);
      if (lookahead == 'l') ADVANCE(368);
      if (lookahead == 'm') ADVANCE(128);
      if (lookahead == 'p') ADVANCE(452);
      if (lookahead == 'r') ADVANCE(215);
      if (lookahead == 's') ADVANCE(219);
      if (lookahead == 't') ADVANCE(249);
      END_STATE();
    case 144:
      if (lookahead == 'c') ADVANCE(527);
      END_STATE();
    case 145:
      if (lookahead == 'c') ADVANCE(529);
      END_STATE();
    case 146:
      if (lookahead == 'c') ADVANCE(530);
      END_STATE();
    case 147:
      if (lookahead == 'd') ADVANCE(408);
      END_STATE();
    case 148:
      if (lookahead == 'd') ADVANCE(9);
      if (lookahead == 's') ADVANCE(164);
      END_STATE();
    case 149:
      if (lookahead == 'd') ADVANCE(83);
      END_STATE();
    case 150:
      if (lookahead == 'd') ADVANCE(685);
      END_STATE();
    case 151:
      if (lookahead == 'd') ADVANCE(635);
      END_STATE();
    case 152:
      if (lookahead == 'd') ADVANCE(611);
      END_STATE();
    case 153:
      if (lookahead == 'd') ADVANCE(665);
      END_STATE();
    case 154:
      if (lookahead == 'd') ADVANCE(190);
      END_STATE();
    case 155:
      if (lookahead == 'd') ADVANCE(204);
      END_STATE();
    case 156:
      if (lookahead == 'd') ADVANCE(211);
      END_STATE();
    case 157:
      if (lookahead == 'd') ADVANCE(260);
      END_STATE();
    case 158:
      if (lookahead == 'd') ADVANCE(418);
      END_STATE();
    case 159:
      if (lookahead == 'd') ADVANCE(84);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(567);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(481);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(424);
      if (lookahead == 'u') ADVANCE(471);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(564);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(577);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(610);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(683);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(673);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(675);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(677);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(633);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(602);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(588);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(576);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(691);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(566);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(332);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(562);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(473);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(331);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(317);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(468);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(372);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(478);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(432);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(298);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(439);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(442);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(502);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(353);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(510);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(303);
      if (lookahead == 'i') ADVANCE(474);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(292);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(443);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(336);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(352);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(479);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(308);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(356);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(522);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(484);
      END_STATE();
    case 216:
      if (lookahead == 'e') ADVANCE(402);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(357);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(358);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(425);
      if (lookahead == 'u') ADVANCE(499);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(487);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(426);
      if (lookahead == 'o') ADVANCE(540);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(427);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 225:
      if (lookahead == 'e') ADVANCE(360);
      END_STATE();
    case 226:
      if (lookahead == 'e') ADVANCE(361);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(362);
      END_STATE();
    case 228:
      if (lookahead == 'e') ADVANCE(494);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(364);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(500);
      END_STATE();
    case 234:
      if (lookahead == 'f') ADVANCE(389);
      END_STATE();
    case 235:
      if (lookahead == 'f') ADVANCE(406);
      END_STATE();
    case 236:
      if (lookahead == 'g') ADVANCE(581);
      END_STATE();
    case 237:
      if (lookahead == 'g') ADVANCE(671);
      END_STATE();
    case 238:
      if (lookahead == 'g') ADVANCE(854);
      END_STATE();
    case 239:
      if (lookahead == 'g') ADVANCE(14);
      END_STATE();
    case 240:
      if (lookahead == 'g') ADVANCE(177);
      END_STATE();
    case 241:
      if (lookahead == 'g') ADVANCE(444);
      if (lookahead == 'p') ADVANCE(193);
      END_STATE();
    case 242:
      if (lookahead == 'g') ADVANCE(464);
      END_STATE();
    case 243:
      if (lookahead == 'h') ADVANCE(587);
      END_STATE();
    case 244:
      if (lookahead == 'h') ADVANCE(639);
      END_STATE();
    case 245:
      if (lookahead == 'h') ADVANCE(595);
      END_STATE();
    case 246:
      if (lookahead == 'h') ADVANCE(178);
      if (lookahead == 'i') ADVANCE(318);
      END_STATE();
    case 247:
      if (lookahead == 'h') ADVANCE(23);
      END_STATE();
    case 248:
      if (lookahead == 'h') ADVANCE(379);
      END_STATE();
    case 249:
      if (lookahead == 'h') ADVANCE(208);
      if (lookahead == 'i') ADVANCE(321);
      END_STATE();
    case 250:
      if (lookahead == 'i') ADVANCE(6);
      END_STATE();
    case 251:
      if (lookahead == 'i') ADVANCE(295);
      if (lookahead == 'o') ADVANCE(438);
      END_STATE();
    case 252:
      if (lookahead == 'i') ADVANCE(315);
      END_STATE();
    case 253:
      if (lookahead == 'i') ADVANCE(509);
      END_STATE();
    case 254:
      if (lookahead == 'i') ADVANCE(337);
      END_STATE();
    case 255:
      if (lookahead == 'i') ADVANCE(355);
      END_STATE();
    case 256:
      if (lookahead == 'i') ADVANCE(388);
      END_STATE();
    case 257:
      if (lookahead == 'i') ADVANCE(386);
      END_STATE();
    case 258:
      if (lookahead == 'i') ADVANCE(305);
      END_STATE();
    case 259:
      if (lookahead == 'i') ADVANCE(334);
      END_STATE();
    case 260:
      if (lookahead == 'i') ADVANCE(335);
      END_STATE();
    case 261:
      if (lookahead == 'i') ADVANCE(381);
      END_STATE();
    case 262:
      if (lookahead == 'i') ADVANCE(383);
      END_STATE();
    case 263:
      if (lookahead == 'i') ADVANCE(185);
      if (lookahead == 'y') ADVANCE(60);
      END_STATE();
    case 264:
      if (lookahead == 'i') ADVANCE(384);
      END_STATE();
    case 265:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 266:
      if (lookahead == 'i') ADVANCE(310);
      if (lookahead == 'o') ADVANCE(450);
      END_STATE();
    case 267:
      if (lookahead == 'i') ADVANCE(320);
      END_STATE();
    case 268:
      if (lookahead == 'i') ADVANCE(390);
      END_STATE();
    case 269:
      if (lookahead == 'i') ADVANCE(391);
      END_STATE();
    case 270:
      if (lookahead == 'i') ADVANCE(392);
      END_STATE();
    case 271:
      if (lookahead == 'i') ADVANCE(393);
      END_STATE();
    case 272:
      if (lookahead == 'i') ADVANCE(394);
      END_STATE();
    case 273:
      if (lookahead == 'i') ADVANCE(395);
      END_STATE();
    case 274:
      if (lookahead == 'i') ADVANCE(396);
      END_STATE();
    case 275:
      if (lookahead == 'i') ADVANCE(397);
      END_STATE();
    case 276:
      if (lookahead == 'i') ADVANCE(398);
      END_STATE();
    case 277:
      if (lookahead == 'i') ADVANCE(399);
      END_STATE();
    case 278:
      if (lookahead == 'i') ADVANCE(400);
      END_STATE();
    case 279:
      if (lookahead == 'i') ADVANCE(312);
      END_STATE();
    case 280:
      if (lookahead == 'i') ADVANCE(404);
      END_STATE();
    case 281:
      if (lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 282:
      if (lookahead == 'i') ADVANCE(535);
      END_STATE();
    case 283:
      if (lookahead == 'i') ADVANCE(324);
      END_STATE();
    case 284:
      if (lookahead == 'i') ADVANCE(233);
      if (lookahead == 'y') ADVANCE(61);
      END_STATE();
    case 285:
      if (lookahead == 'k') ADVANCE(74);
      END_STATE();
    case 286:
      if (lookahead == 'k') ADVANCE(259);
      END_STATE();
    case 287:
      if (lookahead == 'k') ADVANCE(77);
      END_STATE();
    case 288:
      if (lookahead == 'l') ADVANCE(472);
      if (lookahead == 'n') ADVANCE(147);
      if (lookahead == 'r') ADVANCE(437);
      END_STATE();
    case 289:
      if (lookahead == 'l') ADVANCE(849);
      END_STATE();
    case 290:
      if (lookahead == 'l') ADVANCE(585);
      END_STATE();
    case 291:
      if (lookahead == 'l') ADVANCE(4);
      END_STATE();
    case 292:
      if (lookahead == 'l') ADVANCE(687);
      END_STATE();
    case 293:
      if (lookahead == 'l') ADVANCE(689);
      END_STATE();
    case 294:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 295:
      if (lookahead == 'l') ADVANCE(514);
      END_STATE();
    case 296:
      if (lookahead == 'l') ADVANCE(290);
      END_STATE();
    case 297:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 298:
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 299:
      if (lookahead == 'l') ADVANCE(297);
      END_STATE();
    case 300:
      if (lookahead == 'l') ADVANCE(374);
      END_STATE();
    case 301:
      if (lookahead == 'l') ADVANCE(293);
      END_STATE();
    case 302:
      if (lookahead == 'l') ADVANCE(505);
      END_STATE();
    case 303:
      if (lookahead == 'l') ADVANCE(214);
      END_STATE();
    case 304:
      if (lookahead == 'l') ADVANCE(176);
      END_STATE();
    case 305:
      if (lookahead == 'l') ADVANCE(548);
      END_STATE();
    case 306:
      if (lookahead == 'l') ADVANCE(475);
      if (lookahead == 'n') ADVANCE(158);
      if (lookahead == 'r') ADVANCE(459);
      END_STATE();
    case 307:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 308:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 309:
      if (lookahead == 'l') ADVANCE(542);
      END_STATE();
    case 310:
      if (lookahead == 'l') ADVANCE(518);
      END_STATE();
    case 311:
      if (lookahead == 'l') ADVANCE(480);
      if (lookahead == 'u') ADVANCE(302);
      END_STATE();
    case 312:
      if (lookahead == 'l') ADVANCE(549);
      END_STATE();
    case 313:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 314:
      if (lookahead == 'm') ADVANCE(693);
      END_STATE();
    case 315:
      if (lookahead == 'm') ADVANCE(537);
      END_STATE();
    case 316:
      if (lookahead == 'm') ADVANCE(289);
      END_STATE();
    case 317:
      if (lookahead == 'm') ADVANCE(412);
      END_STATE();
    case 318:
      if (lookahead == 'm') ADVANCE(189);
      END_STATE();
    case 319:
      if (lookahead == 'm') ADVANCE(168);
      END_STATE();
    case 320:
      if (lookahead == 'm') ADVANCE(416);
      END_STATE();
    case 321:
      if (lookahead == 'm') ADVANCE(216);
      END_STATE();
    case 322:
      if (lookahead == 'm') ADVANCE(63);
      END_STATE();
    case 323:
      if (lookahead == 'm') ADVANCE(65);
      END_STATE();
    case 324:
      if (lookahead == 'm') ADVANCE(561);
      END_STATE();
    case 325:
      if (lookahead == 'n') ADVANCE(253);
      END_STATE();
    case 326:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 327:
      if (lookahead == 'n') ADVANCE(851);
      END_STATE();
    case 328:
      if (lookahead == 'n') ADVANCE(679);
      END_STATE();
    case 329:
      if (lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 330:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 331:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 332:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 333:
      if (lookahead == 'n') ADVANCE(136);
      if (lookahead == 'x') ADVANCE(419);
      END_STATE();
    case 334:
      if (lookahead == 'n') ADVANCE(237);
      END_STATE();
    case 335:
      if (lookahead == 'n') ADVANCE(238);
      END_STATE();
    case 336:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 337:
      if (lookahead == 'n') ADVANCE(501);
      END_STATE();
    case 338:
      if (lookahead == 'n') ADVANCE(469);
      END_STATE();
    case 339:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 340:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 341:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 342:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 343:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 344:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 345:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 346:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 347:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 348:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 349:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 350:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 351:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 352:
      if (lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 353:
      if (lookahead == 'n') ADVANCE(488);
      END_STATE();
    case 354:
      if (lookahead == 'n') ADVANCE(495);
      END_STATE();
    case 355:
      if (lookahead == 'n') ADVANCE(519);
      END_STATE();
    case 356:
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 357:
      if (lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 358:
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 359:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 360:
      if (lookahead == 'n') ADVANCE(489);
      END_STATE();
    case 361:
      if (lookahead == 'n') ADVANCE(490);
      END_STATE();
    case 362:
      if (lookahead == 'n') ADVANCE(491);
      END_STATE();
    case 363:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 364:
      if (lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 365:
      if (lookahead == 'n') ADVANCE(282);
      END_STATE();
    case 366:
      if (lookahead == 'o') ADVANCE(236);
      END_STATE();
    case 367:
      if (lookahead == 'o') ADVANCE(241);
      END_STATE();
    case 368:
      if (lookahead == 'o') ADVANCE(239);
      END_STATE();
    case 369:
      if (lookahead == 'o') ADVANCE(326);
      END_STATE();
    case 370:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 371:
      if (lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 372:
      if (lookahead == 'o') ADVANCE(538);
      END_STATE();
    case 373:
      if (lookahead == 'o') ADVANCE(254);
      END_STATE();
    case 374:
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 375:
      if (lookahead == 'o') ADVANCE(354);
      END_STATE();
    case 376:
      if (lookahead == 'o') ADVANCE(431);
      END_STATE();
    case 377:
      if (lookahead == 'o') ADVANCE(314);
      END_STATE();
    case 378:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 379:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 380:
      if (lookahead == 'o') ADVANCE(433);
      END_STATE();
    case 381:
      if (lookahead == 'o') ADVANCE(338);
      END_STATE();
    case 382:
      if (lookahead == 'o') ADVANCE(447);
      END_STATE();
    case 383:
      if (lookahead == 'o') ADVANCE(327);
      END_STATE();
    case 384:
      if (lookahead == 'o') ADVANCE(328);
      END_STATE();
    case 385:
      if (lookahead == 'o') ADVANCE(255);
      END_STATE();
    case 386:
      if (lookahead == 'o') ADVANCE(351);
      END_STATE();
    case 387:
      if (lookahead == 'o') ADVANCE(448);
      END_STATE();
    case 388:
      if (lookahead == 'o') ADVANCE(339);
      END_STATE();
    case 389:
      if (lookahead == 'o') ADVANCE(445);
      END_STATE();
    case 390:
      if (lookahead == 'o') ADVANCE(340);
      END_STATE();
    case 391:
      if (lookahead == 'o') ADVANCE(341);
      END_STATE();
    case 392:
      if (lookahead == 'o') ADVANCE(342);
      END_STATE();
    case 393:
      if (lookahead == 'o') ADVANCE(343);
      END_STATE();
    case 394:
      if (lookahead == 'o') ADVANCE(344);
      END_STATE();
    case 395:
      if (lookahead == 'o') ADVANCE(345);
      END_STATE();
    case 396:
      if (lookahead == 'o') ADVANCE(346);
      END_STATE();
    case 397:
      if (lookahead == 'o') ADVANCE(347);
      END_STATE();
    case 398:
      if (lookahead == 'o') ADVANCE(348);
      END_STATE();
    case 399:
      if (lookahead == 'o') ADVANCE(349);
      END_STATE();
    case 400:
      if (lookahead == 'o') ADVANCE(350);
      END_STATE();
    case 401:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 402:
      if (lookahead == 'o') ADVANCE(543);
      END_STATE();
    case 403:
      if (lookahead == 'o') ADVANCE(456);
      END_STATE();
    case 404:
      if (lookahead == 'o') ADVANCE(359);
      END_STATE();
    case 405:
      if (lookahead == 'o') ADVANCE(465);
      END_STATE();
    case 406:
      if (lookahead == 'o') ADVANCE(466);
      END_STATE();
    case 407:
      if (lookahead == 'p') ADVANCE(608);
      END_STATE();
    case 408:
      if (lookahead == 'p') ADVANCE(373);
      END_STATE();
    case 409:
      if (lookahead == 'p') ADVANCE(369);
      END_STATE();
    case 410:
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 411:
      if (lookahead == 'p') ADVANCE(375);
      END_STATE();
    case 412:
      if (lookahead == 'p') ADVANCE(307);
      END_STATE();
    case 413:
      if (lookahead == 'p') ADVANCE(187);
      END_STATE();
    case 414:
      if (lookahead == 'p') ADVANCE(197);
      END_STATE();
    case 415:
      if (lookahead == 'p') ADVANCE(525);
      END_STATE();
    case 416:
      if (lookahead == 'p') ADVANCE(304);
      END_STATE();
    case 417:
      if (lookahead == 'p') ADVANCE(111);
      END_STATE();
    case 418:
      if (lookahead == 'p') ADVANCE(385);
      END_STATE();
    case 419:
      if (lookahead == 'p') ADVANCE(457);
      END_STATE();
    case 420:
      if (lookahead == 'p') ADVANCE(225);
      END_STATE();
    case 421:
      if (lookahead == 'p') ADVANCE(226);
      END_STATE();
    case 422:
      if (lookahead == 'p') ADVANCE(227);
      END_STATE();
    case 423:
      if (lookahead == 'p') ADVANCE(229);
      END_STATE();
    case 424:
      if (lookahead == 'q') ADVANCE(539);
      END_STATE();
    case 425:
      if (lookahead == 'q') ADVANCE(545);
      END_STATE();
    case 426:
      if (lookahead == 'q') ADVANCE(547);
      END_STATE();
    case 427:
      if (lookahead == 'q') ADVANCE(551);
      END_STATE();
    case 428:
      if (lookahead == 'q') ADVANCE(552);
      END_STATE();
    case 429:
      if (lookahead == 'r') ADVANCE(285);
      if (lookahead == 'x') ADVANCE(252);
      END_STATE();
    case 430:
      if (lookahead == 'r') ADVANCE(263);
      END_STATE();
    case 431:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 432:
      if (lookahead == 'r') ADVANCE(594);
      END_STATE();
    case 433:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 434:
      if (lookahead == 'r') ADVANCE(663);
      END_STATE();
    case 435:
      if (lookahead == 'r') ADVANCE(367);
      END_STATE();
    case 436:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 437:
      if (lookahead == 'r') ADVANCE(376);
      END_STATE();
    case 438:
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 439:
      if (lookahead == 'r') ADVANCE(507);
      END_STATE();
    case 440:
      if (lookahead == 'r') ADVANCE(250);
      END_STATE();
    case 441:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 442:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 443:
      if (lookahead == 'r') ADVANCE(470);
      END_STATE();
    case 444:
      if (lookahead == 'r') ADVANCE(181);
      END_STATE();
    case 445:
      if (lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 446:
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 447:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 448:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 449:
      if (lookahead == 'r') ADVANCE(541);
      END_STATE();
    case 450:
      if (lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 451:
      if (lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 452:
      if (lookahead == 'r') ADVANCE(371);
      END_STATE();
    case 453:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 454:
      if (lookahead == 'r') ADVANCE(485);
      END_STATE();
    case 455:
      if (lookahead == 'r') ADVANCE(284);
      END_STATE();
    case 456:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 457:
      if (lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 458:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 459:
      if (lookahead == 'r') ADVANCE(403);
      END_STATE();
    case 460:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 461:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 462:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 463:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 464:
      if (lookahead == 'r') ADVANCE(228);
      END_STATE();
    case 465:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 466:
      if (lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 467:
      if (lookahead == 'r') ADVANCE(287);
      if (lookahead == 'x') ADVANCE(283);
      END_STATE();
    case 468:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 469:
      if (lookahead == 's') ADVANCE(637);
      END_STATE();
    case 470:
      if (lookahead == 's') ADVANCE(695);
      END_STATE();
    case 471:
      if (lookahead == 's') ADVANCE(413);
      END_STATE();
    case 472:
      if (lookahead == 's') ADVANCE(180);
      END_STATE();
    case 473:
      if (lookahead == 's') ADVANCE(483);
      END_STATE();
    case 474:
      if (lookahead == 's') ADVANCE(135);
      END_STATE();
    case 475:
      if (lookahead == 's') ADVANCE(188);
      END_STATE();
    case 476:
      if (lookahead == 's') ADVANCE(504);
      END_STATE();
    case 477:
      if (lookahead == 's') ADVANCE(520);
      END_STATE();
    case 478:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 479:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 480:
      if (lookahead == 's') ADVANCE(170);
      END_STATE();
    case 481:
      if (lookahead == 's') ADVANCE(409);
      if (lookahead == 't') ADVANCE(430);
      END_STATE();
    case 482:
      if (lookahead == 's') ADVANCE(414);
      END_STATE();
    case 483:
      if (lookahead == 's') ADVANCE(257);
      END_STATE();
    case 484:
      if (lookahead == 's') ADVANCE(411);
      if (lookahead == 't') ADVANCE(455);
      END_STATE();
    case 485:
      if (lookahead == 's') ADVANCE(262);
      END_STATE();
    case 486:
      if (lookahead == 's') ADVANCE(264);
      END_STATE();
    case 487:
      if (lookahead == 's') ADVANCE(486);
      END_STATE();
    case 488:
      if (lookahead == 's') ADVANCE(275);
      END_STATE();
    case 489:
      if (lookahead == 's') ADVANCE(276);
      END_STATE();
    case 490:
      if (lookahead == 's') ADVANCE(277);
      END_STATE();
    case 491:
      if (lookahead == 's') ADVANCE(278);
      END_STATE();
    case 492:
      if (lookahead == 's') ADVANCE(223);
      END_STATE();
    case 493:
      if (lookahead == 's') ADVANCE(280);
      END_STATE();
    case 494:
      if (lookahead == 's') ADVANCE(493);
      END_STATE();
    case 495:
      if (lookahead == 's') ADVANCE(224);
      END_STATE();
    case 496:
      if (lookahead == 's') ADVANCE(420);
      END_STATE();
    case 497:
      if (lookahead == 's') ADVANCE(421);
      END_STATE();
    case 498:
      if (lookahead == 's') ADVANCE(422);
      END_STATE();
    case 499:
      if (lookahead == 's') ADVANCE(423);
      END_STATE();
    case 500:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 501:
      if (lookahead == 't') ADVANCE(606);
      END_STATE();
    case 502:
      if (lookahead == 't') ADVANCE(627);
      END_STATE();
    case 503:
      if (lookahead == 't') ADVANCE(631);
      END_STATE();
    case 504:
      if (lookahead == 't') ADVANCE(629);
      END_STATE();
    case 505:
      if (lookahead == 't') ADVANCE(667);
      END_STATE();
    case 506:
      if (lookahead == 't') ADVANCE(508);
      END_STATE();
    case 507:
      if (lookahead == 't') ADVANCE(568);
      END_STATE();
    case 508:
      if (lookahead == 't') ADVANCE(407);
      END_STATE();
    case 509:
      if (lookahead == 't') ADVANCE(265);
      END_STATE();
    case 510:
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 511:
      if (lookahead == 't') ADVANCE(256);
      END_STATE();
    case 512:
      if (lookahead == 't') ADVANCE(410);
      END_STATE();
    case 513:
      if (lookahead == 't') ADVANCE(245);
      END_STATE();
    case 514:
      if (lookahead == 't') ADVANCE(191);
      END_STATE();
    case 515:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 516:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 517:
      if (lookahead == 't') ADVANCE(184);
      END_STATE();
    case 518:
      if (lookahead == 't') ADVANCE(195);
      END_STATE();
    case 519:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 520:
      if (lookahead == 't') ADVANCE(377);
      END_STATE();
    case 521:
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 522:
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 523:
      if (lookahead == 't') ADVANCE(512);
      END_STATE();
    case 524:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 525:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 526:
      if (lookahead == 't') ADVANCE(382);
      END_STATE();
    case 527:
      if (lookahead == 't') ADVANCE(387);
      END_STATE();
    case 528:
      if (lookahead == 't') ADVANCE(268);
      END_STATE();
    case 529:
      if (lookahead == 't') ADVANCE(269);
      END_STATE();
    case 530:
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 531:
      if (lookahead == 't') ADVANCE(271);
      END_STATE();
    case 532:
      if (lookahead == 't') ADVANCE(272);
      END_STATE();
    case 533:
      if (lookahead == 't') ADVANCE(273);
      END_STATE();
    case 534:
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 535:
      if (lookahead == 't') ADVANCE(281);
      END_STATE();
    case 536:
      if (lookahead == 'u') ADVANCE(436);
      END_STATE();
    case 537:
      if (lookahead == 'u') ADVANCE(322);
      END_STATE();
    case 538:
      if (lookahead == 'u') ADVANCE(515);
      END_STATE();
    case 539:
      if (lookahead == 'u') ADVANCE(183);
      END_STATE();
    case 540:
      if (lookahead == 'u') ADVANCE(453);
      END_STATE();
    case 541:
      if (lookahead == 'u') ADVANCE(169);
      END_STATE();
    case 542:
      if (lookahead == 'u') ADVANCE(171);
      END_STATE();
    case 543:
      if (lookahead == 'u') ADVANCE(516);
      END_STATE();
    case 544:
      if (lookahead == 'u') ADVANCE(477);
      END_STATE();
    case 545:
      if (lookahead == 'u') ADVANCE(210);
      END_STATE();
    case 546:
      if (lookahead == 'u') ADVANCE(301);
      END_STATE();
    case 547:
      if (lookahead == 'u') ADVANCE(213);
      END_STATE();
    case 548:
      if (lookahead == 'u') ADVANCE(446);
      END_STATE();
    case 549:
      if (lookahead == 'u') ADVANCE(451);
      END_STATE();
    case 550:
      if (lookahead == 'u') ADVANCE(482);
      END_STATE();
    case 551:
      if (lookahead == 'u') ADVANCE(217);
      END_STATE();
    case 552:
      if (lookahead == 'u') ADVANCE(218);
      END_STATE();
    case 553:
      if (lookahead == 'u') ADVANCE(458);
      END_STATE();
    case 554:
      if (lookahead == 'u') ADVANCE(460);
      END_STATE();
    case 555:
      if (lookahead == 'u') ADVANCE(461);
      END_STATE();
    case 556:
      if (lookahead == 'u') ADVANCE(462);
      END_STATE();
    case 557:
      if (lookahead == 'u') ADVANCE(463);
      END_STATE();
    case 558:
      if (lookahead == 'u') ADVANCE(496);
      END_STATE();
    case 559:
      if (lookahead == 'u') ADVANCE(497);
      END_STATE();
    case 560:
      if (lookahead == 'u') ADVANCE(498);
      END_STATE();
    case 561:
      if (lookahead == 'u') ADVANCE(323);
      END_STATE();
    case 562:
      if (lookahead == 'v') ADVANCE(201);
      END_STATE();
    case 563:
      if (lookahead == 'v') ADVANCE(202);
      END_STATE();
    case 564:
      if (lookahead == 'v') ADVANCE(108);
      END_STATE();
    case 565:
      if (lookahead == 'x') ADVANCE(316);
      END_STATE();
    case 566:
      if (lookahead == 'x') ADVANCE(604);
      END_STATE();
    case 567:
      if (lookahead == 'y') ADVANCE(670);
      END_STATE();
    case 568:
      if (lookahead == 'y') ADVANCE(584);
      END_STATE();
    case 569:
      if (lookahead == 'y') ADVANCE(32);
      END_STATE();
    case 570:
      if (lookahead == 'y') ADVANCE(34);
      END_STATE();
    case 571:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(846);
      END_STATE();
    case 572:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(844);
      END_STATE();
    case 573:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      END_STATE();
    case 574:
      if (eof) ADVANCE(575);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == '>') ADVANCE(578);
      if (lookahead == '?') ADVANCE(13);
      if (lookahead == 'D') ADVANCE(66);
      if (lookahead == 'G') ADVANCE(69);
      if (lookahead == 'H') ADVANCE(68);
      if (lookahead == 'O') ADVANCE(85);
      if (lookahead == 'P') ADVANCE(52);
      if (lookahead == 'b') ADVANCE(300);
      if (lookahead == 'd') ADVANCE(200);
      if (lookahead == 'e') ADVANCE(333);
      if (lookahead == 'f') ADVANCE(102);
      if (lookahead == 'g') ADVANCE(196);
      if (lookahead == 'h') ADVANCE(194);
      if (lookahead == 'i') ADVANCE(150);
      if (lookahead == 'l') ADVANCE(179);
      if (lookahead == 'm') ADVANCE(199);
      if (lookahead == 'n') ADVANCE(115);
      if (lookahead == 'o') ADVANCE(415);
      if (lookahead == 'p') ADVANCE(109);
      if (lookahead == 'r') ADVANCE(186);
      if (lookahead == 's') ADVANCE(221);
      if (lookahead == 't') ADVANCE(449);
      if (lookahead == 'u') ADVANCE(440);
      if (lookahead == 'v') ADVANCE(110);
      if (lookahead == 'x') ADVANCE(417);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(574)
      END_STATE();
    case 575:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_LTsequence);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_LTsequence);
      if (lookahead == '>') ADVANCE(592);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_LT_SLASHsequence_GT);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_LTrespond_SLASH_GT);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_LTlog);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_LT_SLASHlog_GT);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_LTproperty);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_LTcall);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_LT_SLASHcall_GT);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_LTforeach);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_sequence);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_LTsequence_GT);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_LT_SLASHforeach_GT);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_LTfilter);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_xpath);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_xpath);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_LT_SLASHfilter_GT);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_LTthen_GT);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_LT_SLASHthen_GT);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_LTelse_GT);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_LT_SLASHelse_GT);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_source);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_source);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_regex);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_regex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_LTendpoint);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_LT_SLASHendpoint_GT);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_LThttp);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_LT_SLASHhttp_GT);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_uri_DASHtemplate);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_method);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_method);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_GET);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_GET);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_POST);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_POST);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_PUT);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_DELETE);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_PATCH);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_get);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_post);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_post);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_put);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_put);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_delete);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_head);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_head);
      if (lookahead == 'e') ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_options);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_options);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_patch);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_patch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_LTtimeout_GT);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_LT_SLASHtimeout_GT);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_LTmarkForSuspension_GT);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmarkForSuspension_GT);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_LTretriesBeforeSuspension_GT);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_LT_SLASHretriesBeforeSuspension_GT);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_LTretryDelay_GT);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_LT_SLASHretryDelay_GT);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_LTsuspendOnFailure_GT);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_LT_SLASHsuspendOnFailure_GT);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_LTinitialDuration_GT);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_LT_SLASHinitialDuration_GT);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_LTprogressionFactor_GT);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_LT_SLASHprogressionFactor_GT);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_LTmaximumDuration_GT);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmaximumDuration_GT);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_LTerrorCodes_GT);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_LT_SLASHerrorCodes_GT);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_LTduration_GT);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_LT_SLASHduration_GT);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_LTresponseAction_GT);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_never);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_never);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_discard);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_discard);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_fault);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_fault);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_LT_SLASHresponseAction_GT);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_LTkey);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_blocking);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_blocking);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_value);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_expression);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_expression);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_json_DASHeval_LPAREN);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_id);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_level);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_level);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_full);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_full);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_simple);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_simple);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_custom);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_custom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_headers);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_headers);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'A') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'A') ADVANCE(718);
      if (lookahead == 'O') ADVANCE(715);
      if (lookahead == 'U') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'C') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'D') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'H') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'I') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'L') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'N') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'O') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'P') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'S') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'S') ADVANCE(720);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'T') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'T') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'T') ADVANCE(701);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'T') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'T') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'T') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(777);
      if (lookahead == 'u') ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(785);
      if (lookahead == 'e') ADVANCE(841);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(782);
      if (lookahead == 'e') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(833);
      if (lookahead == 'o') ADVANCE(820);
      if (lookahead == 'u') ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(840);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(806);
      if (lookahead == 'i') ADVANCE(784);
      if (lookahead == 'o') ADVANCE(836);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(842);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(781);
      if (lookahead == 'i') ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(826);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(793);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'g') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'g') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'g') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'h') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'h') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'h') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(791);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'k') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(821);
      if (lookahead == 'u') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(829);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(760);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(745);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(731);
      if (lookahead == 'x') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(852);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(761);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'q') ADVANCE(838);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(822);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(757);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(832);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(749);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'v') ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'v') ADVANCE(758);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'x') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym__float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(844);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym__unsigned_int);
      if (lookahead == '.') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(845);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym__int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(846);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_expression_string);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(847);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_expression_string);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(848);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(anon_sym_LT_QMARKxml);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(anon_sym_version);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_version_number);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_encoding);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_encoding);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_encoding);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(859);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(859);
      if (lookahead == '>') ADVANCE(583);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(860);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 574},
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
  [17] = {.lex_state = 574},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 1},
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
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
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
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 574},
  [66] = {.lex_state = 574},
  [67] = {.lex_state = 574},
  [68] = {.lex_state = 574},
  [69] = {.lex_state = 574},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 574},
  [72] = {.lex_state = 574},
  [73] = {.lex_state = 574},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 574},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 133},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 574},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 574},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 574},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 574},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 574},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 574},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 574},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 574},
  [117] = {.lex_state = 574},
  [118] = {.lex_state = 574},
  [119] = {.lex_state = 574},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 574},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 574},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 574},
  [128] = {.lex_state = 574},
  [129] = {.lex_state = 574},
  [130] = {.lex_state = 574},
  [131] = {.lex_state = 574},
  [132] = {.lex_state = 574},
  [133] = {.lex_state = 574},
  [134] = {.lex_state = 574},
  [135] = {.lex_state = 574},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 574},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 574},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 574},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 574},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 574},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 574},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 1},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 574},
  [199] = {.lex_state = 574},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 1},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 1},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 847},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 574},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 847},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 574},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
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
    [anon_sym_LTforeach] = ACTIONS(1),
    [anon_sym_sequence] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LTsequence_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHforeach_GT] = ACTIONS(1),
    [anon_sym_LTfilter] = ACTIONS(1),
    [anon_sym_xpath] = ACTIONS(1),
    [anon_sym_LT_SLASHfilter_GT] = ACTIONS(1),
    [anon_sym_LTthen_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHthen_GT] = ACTIONS(1),
    [anon_sym_LTelse_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHelse_GT] = ACTIONS(1),
    [anon_sym_source] = ACTIONS(1),
    [anon_sym_regex] = ACTIONS(1),
    [anon_sym_LTendpoint] = ACTIONS(1),
    [anon_sym_LT_SLASHendpoint_GT] = ACTIONS(1),
    [anon_sym_LThttp] = ACTIONS(1),
    [anon_sym_LT_SLASHhttp_GT] = ACTIONS(1),
    [anon_sym_uri_DASHtemplate] = ACTIONS(1),
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
    [anon_sym_LTmarkForSuspension_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHmarkForSuspension_GT] = ACTIONS(1),
    [anon_sym_LTretriesBeforeSuspension_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHretriesBeforeSuspension_GT] = ACTIONS(1),
    [anon_sym_LTretryDelay_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHretryDelay_GT] = ACTIONS(1),
    [anon_sym_LTsuspendOnFailure_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHsuspendOnFailure_GT] = ACTIONS(1),
    [anon_sym_LTinitialDuration_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHinitialDuration_GT] = ACTIONS(1),
    [anon_sym_LTprogressionFactor_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHprogressionFactor_GT] = ACTIONS(1),
    [anon_sym_LTmaximumDuration_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHmaximumDuration_GT] = ACTIONS(1),
    [anon_sym_LTerrorCodes_GT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LT_SLASHerrorCodes_GT] = ACTIONS(1),
    [anon_sym_LTduration_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHduration_GT] = ACTIONS(1),
    [anon_sym_LTresponseAction_GT] = ACTIONS(1),
    [anon_sym_never] = ACTIONS(1),
    [anon_sym_discard] = ACTIONS(1),
    [anon_sym_fault] = ACTIONS(1),
    [anon_sym_LT_SLASHresponseAction_GT] = ACTIONS(1),
    [anon_sym_LTkey] = ACTIONS(1),
    [anon_sym_blocking] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_value] = ACTIONS(1),
    [anon_sym_expression] = ACTIONS(1),
    [anon_sym_json_DASHeval_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_name] = ACTIONS(1),
    [anon_sym_id] = ACTIONS(1),
    [anon_sym_level] = ACTIONS(1),
    [anon_sym_full] = ACTIONS(1),
    [anon_sym_simple] = ACTIONS(1),
    [anon_sym_custom] = ACTIONS(1),
    [anon_sym_headers] = ACTIONS(1),
    [aux_sym_identifier_token1] = ACTIONS(1),
    [sym__float] = ACTIONS(1),
    [sym__unsigned_int] = ACTIONS(1),
    [sym__int] = ACTIONS(1),
    [anon_sym_LT_QMARKxml] = ACTIONS(1),
    [anon_sym_QMARK_GT] = ACTIONS(1),
    [anon_sym_version] = ACTIONS(1),
    [anon_sym_encoding] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(254),
    [sym__definition] = STATE(69),
    [sym_sequence_definition] = STATE(69),
    [sym_xml_declaration] = STATE(68),
    [aux_sym_source_file_repeat1] = STATE(69),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LTsequence] = ACTIONS(5),
    [anon_sym_LT_QMARKxml] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(11), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(14), 1,
      anon_sym_LTlog,
    ACTIONS(17), 1,
      anon_sym_LTproperty,
    ACTIONS(20), 1,
      anon_sym_LTcall,
    ACTIONS(23), 1,
      anon_sym_LTforeach,
    ACTIONS(26), 1,
      anon_sym_LTfilter,
    STATE(2), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    ACTIONS(9), 3,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
    STATE(50), 6,
      sym_respond,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
  [36] = 9,
    ACTIONS(29), 1,
      anon_sym_LT_SLASHsequence_GT,
    ACTIONS(31), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(33), 1,
      anon_sym_LTlog,
    ACTIONS(35), 1,
      anon_sym_LTproperty,
    ACTIONS(37), 1,
      anon_sym_LTcall,
    ACTIONS(39), 1,
      anon_sym_LTforeach,
    ACTIONS(41), 1,
      anon_sym_LTfilter,
    STATE(2), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(50), 6,
      sym_respond,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
  [70] = 9,
    ACTIONS(31), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(33), 1,
      anon_sym_LTlog,
    ACTIONS(35), 1,
      anon_sym_LTproperty,
    ACTIONS(37), 1,
      anon_sym_LTcall,
    ACTIONS(39), 1,
      anon_sym_LTforeach,
    ACTIONS(41), 1,
      anon_sym_LTfilter,
    ACTIONS(43), 1,
      anon_sym_LT_SLASHthen_GT,
    STATE(2), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(50), 6,
      sym_respond,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
  [104] = 9,
    ACTIONS(31), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(33), 1,
      anon_sym_LTlog,
    ACTIONS(35), 1,
      anon_sym_LTproperty,
    ACTIONS(37), 1,
      anon_sym_LTcall,
    ACTIONS(39), 1,
      anon_sym_LTforeach,
    ACTIONS(41), 1,
      anon_sym_LTfilter,
    ACTIONS(45), 1,
      anon_sym_LT_SLASHelse_GT,
    STATE(2), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(50), 6,
      sym_respond,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
  [138] = 9,
    ACTIONS(31), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(33), 1,
      anon_sym_LTlog,
    ACTIONS(35), 1,
      anon_sym_LTproperty,
    ACTIONS(37), 1,
      anon_sym_LTcall,
    ACTIONS(39), 1,
      anon_sym_LTforeach,
    ACTIONS(41), 1,
      anon_sym_LTfilter,
    ACTIONS(47), 1,
      anon_sym_LT_SLASHsequence_GT,
    STATE(2), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(50), 6,
      sym_respond,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
  [172] = 9,
    ACTIONS(31), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(33), 1,
      anon_sym_LTlog,
    ACTIONS(35), 1,
      anon_sym_LTproperty,
    ACTIONS(37), 1,
      anon_sym_LTcall,
    ACTIONS(39), 1,
      anon_sym_LTforeach,
    ACTIONS(41), 1,
      anon_sym_LTfilter,
    ACTIONS(49), 1,
      anon_sym_LT_SLASHsequence_GT,
    STATE(2), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(50), 6,
      sym_respond,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
  [206] = 9,
    ACTIONS(31), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(33), 1,
      anon_sym_LTlog,
    ACTIONS(35), 1,
      anon_sym_LTproperty,
    ACTIONS(37), 1,
      anon_sym_LTcall,
    ACTIONS(39), 1,
      anon_sym_LTforeach,
    ACTIONS(41), 1,
      anon_sym_LTfilter,
    ACTIONS(51), 1,
      anon_sym_LT_SLASHsequence_GT,
    STATE(3), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(50), 6,
      sym_respond,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
  [240] = 9,
    ACTIONS(31), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(33), 1,
      anon_sym_LTlog,
    ACTIONS(35), 1,
      anon_sym_LTproperty,
    ACTIONS(37), 1,
      anon_sym_LTcall,
    ACTIONS(39), 1,
      anon_sym_LTforeach,
    ACTIONS(41), 1,
      anon_sym_LTfilter,
    ACTIONS(53), 1,
      anon_sym_LT_SLASHthen_GT,
    STATE(4), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(50), 6,
      sym_respond,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
  [274] = 9,
    ACTIONS(31), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(33), 1,
      anon_sym_LTlog,
    ACTIONS(35), 1,
      anon_sym_LTproperty,
    ACTIONS(37), 1,
      anon_sym_LTcall,
    ACTIONS(39), 1,
      anon_sym_LTforeach,
    ACTIONS(41), 1,
      anon_sym_LTfilter,
    ACTIONS(55), 1,
      anon_sym_LT_SLASHsequence_GT,
    STATE(16), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(50), 6,
      sym_respond,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
  [308] = 9,
    ACTIONS(31), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(33), 1,
      anon_sym_LTlog,
    ACTIONS(35), 1,
      anon_sym_LTproperty,
    ACTIONS(37), 1,
      anon_sym_LTcall,
    ACTIONS(39), 1,
      anon_sym_LTforeach,
    ACTIONS(41), 1,
      anon_sym_LTfilter,
    ACTIONS(57), 1,
      anon_sym_LT_SLASHsequence_GT,
    STATE(7), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(50), 6,
      sym_respond,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
  [342] = 9,
    ACTIONS(31), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(33), 1,
      anon_sym_LTlog,
    ACTIONS(35), 1,
      anon_sym_LTproperty,
    ACTIONS(37), 1,
      anon_sym_LTcall,
    ACTIONS(39), 1,
      anon_sym_LTforeach,
    ACTIONS(41), 1,
      anon_sym_LTfilter,
    ACTIONS(59), 1,
      anon_sym_LT_SLASHsequence_GT,
    STATE(6), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(50), 6,
      sym_respond,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
  [376] = 9,
    ACTIONS(31), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(33), 1,
      anon_sym_LTlog,
    ACTIONS(35), 1,
      anon_sym_LTproperty,
    ACTIONS(37), 1,
      anon_sym_LTcall,
    ACTIONS(39), 1,
      anon_sym_LTforeach,
    ACTIONS(41), 1,
      anon_sym_LTfilter,
    ACTIONS(61), 1,
      anon_sym_LT_SLASHsequence_GT,
    STATE(2), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(50), 6,
      sym_respond,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
  [410] = 9,
    ACTIONS(31), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(33), 1,
      anon_sym_LTlog,
    ACTIONS(35), 1,
      anon_sym_LTproperty,
    ACTIONS(37), 1,
      anon_sym_LTcall,
    ACTIONS(39), 1,
      anon_sym_LTforeach,
    ACTIONS(41), 1,
      anon_sym_LTfilter,
    ACTIONS(63), 1,
      anon_sym_LT_SLASHelse_GT,
    STATE(5), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(50), 6,
      sym_respond,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
  [444] = 9,
    ACTIONS(31), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(33), 1,
      anon_sym_LTlog,
    ACTIONS(35), 1,
      anon_sym_LTproperty,
    ACTIONS(37), 1,
      anon_sym_LTcall,
    ACTIONS(39), 1,
      anon_sym_LTforeach,
    ACTIONS(41), 1,
      anon_sym_LTfilter,
    ACTIONS(65), 1,
      anon_sym_LT_SLASHsequence_GT,
    STATE(13), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(50), 6,
      sym_respond,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
  [478] = 9,
    ACTIONS(31), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(33), 1,
      anon_sym_LTlog,
    ACTIONS(35), 1,
      anon_sym_LTproperty,
    ACTIONS(37), 1,
      anon_sym_LTcall,
    ACTIONS(39), 1,
      anon_sym_LTforeach,
    ACTIONS(41), 1,
      anon_sym_LTfilter,
    ACTIONS(67), 1,
      anon_sym_LT_SLASHsequence_GT,
    STATE(2), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(50), 6,
      sym_respond,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
  [512] = 1,
    ACTIONS(69), 14,
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
  [529] = 5,
    ACTIONS(71), 1,
      anon_sym_json_DASHeval_LPAREN,
    STATE(243), 2,
      sym_json_eval,
      sym_xpath,
    ACTIONS(73), 3,
      aux_sym_identifier_token1,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(75), 3,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
    STATE(23), 3,
      sym__xpath_node,
      sym__xpath_selectors,
      aux_sym_xpath_repeat1,
  [552] = 5,
    ACTIONS(71), 1,
      anon_sym_json_DASHeval_LPAREN,
    STATE(188), 2,
      sym_json_eval,
      sym_xpath,
    ACTIONS(73), 3,
      aux_sym_identifier_token1,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(75), 3,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
    STATE(23), 3,
      sym__xpath_node,
      sym__xpath_selectors,
      aux_sym_xpath_repeat1,
  [575] = 6,
    ACTIONS(77), 1,
      anon_sym_LT_SLASHsuspendOnFailure_GT,
    ACTIONS(79), 1,
      anon_sym_LTinitialDuration_GT,
    ACTIONS(81), 1,
      anon_sym_LTprogressionFactor_GT,
    ACTIONS(83), 1,
      anon_sym_LTmaximumDuration_GT,
    ACTIONS(85), 1,
      anon_sym_LTerrorCodes_GT,
    STATE(22), 6,
      sym__suspend_on_failure_property,
      sym_initial_duration,
      sym_progression_factor,
      sym_maximum_duration,
      sym_error_codes,
      aux_sym_suspend_on_failure_repeat1,
  [599] = 6,
    ACTIONS(79), 1,
      anon_sym_LTinitialDuration_GT,
    ACTIONS(81), 1,
      anon_sym_LTprogressionFactor_GT,
    ACTIONS(83), 1,
      anon_sym_LTmaximumDuration_GT,
    ACTIONS(85), 1,
      anon_sym_LTerrorCodes_GT,
    ACTIONS(87), 1,
      anon_sym_LT_SLASHsuspendOnFailure_GT,
    STATE(20), 6,
      sym__suspend_on_failure_property,
      sym_initial_duration,
      sym_progression_factor,
      sym_maximum_duration,
      sym_error_codes,
      aux_sym_suspend_on_failure_repeat1,
  [623] = 6,
    ACTIONS(89), 1,
      anon_sym_LT_SLASHsuspendOnFailure_GT,
    ACTIONS(91), 1,
      anon_sym_LTinitialDuration_GT,
    ACTIONS(94), 1,
      anon_sym_LTprogressionFactor_GT,
    ACTIONS(97), 1,
      anon_sym_LTmaximumDuration_GT,
    ACTIONS(100), 1,
      anon_sym_LTerrorCodes_GT,
    STATE(22), 6,
      sym__suspend_on_failure_property,
      sym_initial_duration,
      sym_progression_factor,
      sym_maximum_duration,
      sym_error_codes,
      aux_sym_suspend_on_failure_repeat1,
  [647] = 4,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 2,
      anon_sym_SLASH,
      anon_sym_DOT,
    STATE(24), 3,
      sym__xpath_node,
      sym__xpath_selectors,
      aux_sym_xpath_repeat1,
    ACTIONS(105), 4,
      aux_sym_identifier_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
  [666] = 4,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(114), 2,
      anon_sym_SLASH,
      anon_sym_DOT,
    STATE(24), 3,
      sym__xpath_node,
      sym__xpath_selectors,
      aux_sym_xpath_repeat1,
    ACTIONS(111), 4,
      aux_sym_identifier_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
  [685] = 1,
    ACTIONS(117), 10,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LT_SLASHlog_GT,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [698] = 1,
    ACTIONS(119), 10,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LT_SLASHlog_GT,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [711] = 4,
    STATE(245), 1,
      sym_xpath,
    ACTIONS(73), 2,
      anon_sym_SLASH,
      anon_sym_DOT,
    STATE(23), 3,
      sym__xpath_node,
      sym__xpath_selectors,
      aux_sym_xpath_repeat1,
    ACTIONS(75), 4,
      aux_sym_identifier_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
  [730] = 1,
    ACTIONS(121), 9,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [742] = 1,
    ACTIONS(123), 9,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [754] = 6,
    ACTIONS(125), 1,
      anon_sym_LT_SLASHhttp_GT,
    ACTIONS(127), 1,
      anon_sym_LTtimeout_GT,
    ACTIONS(129), 1,
      anon_sym_LTmarkForSuspension_GT,
    ACTIONS(131), 1,
      anon_sym_LTsuspendOnFailure_GT,
    STATE(55), 2,
      sym_endpoint_error_property,
      aux_sym_http_endpoint_repeat2,
    STATE(86), 3,
      sym_timeout,
      sym_mark_for_suspending,
      sym_suspend_on_failure,
  [776] = 6,
    ACTIONS(125), 1,
      anon_sym_LT_SLASHhttp_GT,
    ACTIONS(127), 1,
      anon_sym_LTtimeout_GT,
    ACTIONS(129), 1,
      anon_sym_LTmarkForSuspension_GT,
    ACTIONS(131), 1,
      anon_sym_LTsuspendOnFailure_GT,
    STATE(53), 2,
      sym_endpoint_error_property,
      aux_sym_http_endpoint_repeat2,
    STATE(86), 3,
      sym_timeout,
      sym_mark_for_suspending,
      sym_suspend_on_failure,
  [798] = 1,
    ACTIONS(133), 9,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [810] = 1,
    ACTIONS(135), 9,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [822] = 1,
    ACTIONS(137), 9,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [834] = 1,
    ACTIONS(139), 9,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [846] = 1,
    ACTIONS(141), 9,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [858] = 1,
    ACTIONS(143), 9,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [870] = 1,
    ACTIONS(145), 9,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [882] = 1,
    ACTIONS(147), 9,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [894] = 1,
    ACTIONS(149), 9,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [906] = 5,
    ACTIONS(151), 1,
      anon_sym_LT_SLASHmarkForSuspension_GT,
    ACTIONS(153), 1,
      anon_sym_LTretriesBeforeSuspension_GT,
    ACTIONS(156), 1,
      anon_sym_LTretryDelay_GT,
    ACTIONS(159), 1,
      anon_sym_LTerrorCodes_GT,
    STATE(41), 5,
      sym__mark_for_suspending_property,
      sym_retries_before_suspending,
      sym_retry_delay,
      sym_error_codes,
      aux_sym_mark_for_suspending_repeat1,
  [926] = 1,
    ACTIONS(162), 9,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [938] = 1,
    ACTIONS(164), 9,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [950] = 1,
    ACTIONS(166), 9,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [962] = 1,
    ACTIONS(168), 9,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [974] = 1,
    ACTIONS(170), 9,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [986] = 6,
    ACTIONS(127), 1,
      anon_sym_LTtimeout_GT,
    ACTIONS(129), 1,
      anon_sym_LTmarkForSuspension_GT,
    ACTIONS(131), 1,
      anon_sym_LTsuspendOnFailure_GT,
    ACTIONS(172), 1,
      anon_sym_LT_SLASHhttp_GT,
    STATE(30), 2,
      sym_endpoint_error_property,
      aux_sym_http_endpoint_repeat2,
    STATE(86), 3,
      sym_timeout,
      sym_mark_for_suspending,
      sym_suspend_on_failure,
  [1008] = 1,
    ACTIONS(174), 9,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [1020] = 5,
    ACTIONS(85), 1,
      anon_sym_LTerrorCodes_GT,
    ACTIONS(176), 1,
      anon_sym_LT_SLASHmarkForSuspension_GT,
    ACTIONS(178), 1,
      anon_sym_LTretriesBeforeSuspension_GT,
    ACTIONS(180), 1,
      anon_sym_LTretryDelay_GT,
    STATE(41), 5,
      sym__mark_for_suspending_property,
      sym_retries_before_suspending,
      sym_retry_delay,
      sym_error_codes,
      aux_sym_mark_for_suspending_repeat1,
  [1040] = 1,
    ACTIONS(182), 9,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [1052] = 1,
    ACTIONS(184), 9,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [1064] = 1,
    ACTIONS(186), 9,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [1076] = 6,
    ACTIONS(127), 1,
      anon_sym_LTtimeout_GT,
    ACTIONS(129), 1,
      anon_sym_LTmarkForSuspension_GT,
    ACTIONS(131), 1,
      anon_sym_LTsuspendOnFailure_GT,
    ACTIONS(188), 1,
      anon_sym_LT_SLASHhttp_GT,
    STATE(55), 2,
      sym_endpoint_error_property,
      aux_sym_http_endpoint_repeat2,
    STATE(86), 3,
      sym_timeout,
      sym_mark_for_suspending,
      sym_suspend_on_failure,
  [1098] = 1,
    ACTIONS(190), 9,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [1110] = 6,
    ACTIONS(192), 1,
      anon_sym_LT_SLASHhttp_GT,
    ACTIONS(194), 1,
      anon_sym_LTtimeout_GT,
    ACTIONS(197), 1,
      anon_sym_LTmarkForSuspension_GT,
    ACTIONS(200), 1,
      anon_sym_LTsuspendOnFailure_GT,
    STATE(55), 2,
      sym_endpoint_error_property,
      aux_sym_http_endpoint_repeat2,
    STATE(86), 3,
      sym_timeout,
      sym_mark_for_suspending,
      sym_suspend_on_failure,
  [1132] = 1,
    ACTIONS(203), 9,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [1144] = 5,
    ACTIONS(85), 1,
      anon_sym_LTerrorCodes_GT,
    ACTIONS(178), 1,
      anon_sym_LTretriesBeforeSuspension_GT,
    ACTIONS(180), 1,
      anon_sym_LTretryDelay_GT,
    ACTIONS(205), 1,
      anon_sym_LT_SLASHmarkForSuspension_GT,
    STATE(49), 5,
      sym__mark_for_suspending_property,
      sym_retries_before_suspending,
      sym_retry_delay,
      sym_error_codes,
      aux_sym_mark_for_suspending_repeat1,
  [1164] = 1,
    ACTIONS(207), 9,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [1176] = 1,
    ACTIONS(209), 8,
      anon_sym_LT_SLASHretriesBeforeSuspension_GT,
      anon_sym_LT_SLASHretryDelay_GT,
      anon_sym_LT_SLASHinitialDuration_GT,
      anon_sym_LT_SLASHprogressionFactor_GT,
      anon_sym_LT_SLASHmaximumDuration_GT,
      anon_sym_COMMA,
      anon_sym_LT_SLASHerrorCodes_GT,
      anon_sym_LT_SLASHduration_GT,
  [1187] = 1,
    ACTIONS(211), 8,
      anon_sym_LT_SLASHmarkForSuspension_GT,
      anon_sym_LTretriesBeforeSuspension_GT,
      anon_sym_LTretryDelay_GT,
      anon_sym_LT_SLASHsuspendOnFailure_GT,
      anon_sym_LTinitialDuration_GT,
      anon_sym_LTprogressionFactor_GT,
      anon_sym_LTmaximumDuration_GT,
      anon_sym_LTerrorCodes_GT,
  [1198] = 1,
    ACTIONS(213), 8,
      anon_sym_LT_SLASHmarkForSuspension_GT,
      anon_sym_LTretriesBeforeSuspension_GT,
      anon_sym_LTretryDelay_GT,
      anon_sym_LT_SLASHsuspendOnFailure_GT,
      anon_sym_LTinitialDuration_GT,
      anon_sym_LTprogressionFactor_GT,
      anon_sym_LTmaximumDuration_GT,
      anon_sym_LTerrorCodes_GT,
  [1209] = 4,
    ACTIONS(215), 1,
      anon_sym_LT_SLASHtimeout_GT,
    ACTIONS(217), 1,
      anon_sym_LTduration_GT,
    ACTIONS(219), 1,
      anon_sym_LTresponseAction_GT,
    STATE(63), 4,
      sym__timeout_property,
      sym_duration,
      sym_response_action,
      aux_sym_timeout_repeat1,
  [1225] = 4,
    ACTIONS(217), 1,
      anon_sym_LTduration_GT,
    ACTIONS(219), 1,
      anon_sym_LTresponseAction_GT,
    ACTIONS(221), 1,
      anon_sym_LT_SLASHtimeout_GT,
    STATE(64), 4,
      sym__timeout_property,
      sym_duration,
      sym_response_action,
      aux_sym_timeout_repeat1,
  [1241] = 4,
    ACTIONS(223), 1,
      anon_sym_LT_SLASHtimeout_GT,
    ACTIONS(225), 1,
      anon_sym_LTduration_GT,
    ACTIONS(228), 1,
      anon_sym_LTresponseAction_GT,
    STATE(64), 4,
      sym__timeout_property,
      sym_duration,
      sym_response_action,
      aux_sym_timeout_repeat1,
  [1257] = 4,
    ACTIONS(231), 1,
      anon_sym_GT,
    ACTIONS(233), 1,
      anon_sym_uri_DASHtemplate,
    ACTIONS(235), 1,
      anon_sym_method,
    STATE(67), 3,
      sym__endpoint_attribute,
      sym_method,
      aux_sym_http_endpoint_repeat1,
  [1272] = 4,
    ACTIONS(237), 1,
      anon_sym_GT,
    ACTIONS(239), 1,
      anon_sym_uri_DASHtemplate,
    ACTIONS(242), 1,
      anon_sym_method,
    STATE(66), 3,
      sym__endpoint_attribute,
      sym_method,
      aux_sym_http_endpoint_repeat1,
  [1287] = 4,
    ACTIONS(233), 1,
      anon_sym_uri_DASHtemplate,
    ACTIONS(235), 1,
      anon_sym_method,
    ACTIONS(245), 1,
      anon_sym_GT,
    STATE(66), 3,
      sym__endpoint_attribute,
      sym_method,
      aux_sym_http_endpoint_repeat1,
  [1302] = 3,
    ACTIONS(5), 1,
      anon_sym_LTsequence,
    ACTIONS(247), 1,
      ts_builtin_sym_end,
    STATE(71), 3,
      sym__definition,
      sym_sequence_definition,
      aux_sym_source_file_repeat1,
  [1314] = 3,
    ACTIONS(5), 1,
      anon_sym_LTsequence,
    ACTIONS(247), 1,
      ts_builtin_sym_end,
    STATE(72), 3,
      sym__definition,
      sym_sequence_definition,
      aux_sym_source_file_repeat1,
  [1326] = 1,
    ACTIONS(249), 5,
      anon_sym_LT_SLASHsuspendOnFailure_GT,
      anon_sym_LTinitialDuration_GT,
      anon_sym_LTprogressionFactor_GT,
      anon_sym_LTmaximumDuration_GT,
      anon_sym_LTerrorCodes_GT,
  [1334] = 3,
    ACTIONS(5), 1,
      anon_sym_LTsequence,
    ACTIONS(251), 1,
      ts_builtin_sym_end,
    STATE(72), 3,
      sym__definition,
      sym_sequence_definition,
      aux_sym_source_file_repeat1,
  [1346] = 3,
    ACTIONS(253), 1,
      ts_builtin_sym_end,
    ACTIONS(255), 1,
      anon_sym_LTsequence,
    STATE(72), 3,
      sym__definition,
      sym_sequence_definition,
      aux_sym_source_file_repeat1,
  [1358] = 5,
    ACTIONS(258), 1,
      anon_sym_GT,
    ACTIONS(260), 1,
      anon_sym_blocking,
    ACTIONS(262), 1,
      anon_sym_name,
    STATE(106), 1,
      sym_name,
    STATE(220), 1,
      sym_blocking,
  [1374] = 1,
    ACTIONS(264), 5,
      anon_sym_LT_SLASHsuspendOnFailure_GT,
      anon_sym_LTinitialDuration_GT,
      anon_sym_LTprogressionFactor_GT,
      anon_sym_LTmaximumDuration_GT,
      anon_sym_LTerrorCodes_GT,
  [1382] = 1,
    ACTIONS(266), 5,
      anon_sym_LT_SLASHsuspendOnFailure_GT,
      anon_sym_LTinitialDuration_GT,
      anon_sym_LTprogressionFactor_GT,
      anon_sym_LTmaximumDuration_GT,
      anon_sym_LTerrorCodes_GT,
  [1390] = 3,
    ACTIONS(270), 1,
      sym__unsigned_int,
    STATE(218), 1,
      sym_number,
    ACTIONS(268), 2,
      sym__float,
      sym__int,
  [1401] = 1,
    ACTIONS(272), 4,
      anon_sym_GT,
      anon_sym_blocking,
      anon_sym_value,
      anon_sym_expression,
  [1408] = 3,
    ACTIONS(270), 1,
      sym__unsigned_int,
    STATE(124), 1,
      sym_number,
    ACTIONS(268), 2,
      sym__float,
      sym__int,
  [1419] = 3,
    ACTIONS(270), 1,
      sym__unsigned_int,
    STATE(107), 1,
      sym_number,
    ACTIONS(268), 2,
      sym__float,
      sym__int,
  [1430] = 1,
    ACTIONS(274), 4,
      anon_sym_LT_SLASHmarkForSuspension_GT,
      anon_sym_LTretriesBeforeSuspension_GT,
      anon_sym_LTretryDelay_GT,
      anon_sym_LTerrorCodes_GT,
  [1437] = 3,
    ACTIONS(270), 1,
      sym__unsigned_int,
    STATE(207), 1,
      sym_number,
    ACTIONS(268), 2,
      sym__float,
      sym__int,
  [1448] = 1,
    ACTIONS(276), 4,
      anon_sym_full,
      anon_sym_simple,
      anon_sym_custom,
      anon_sym_headers,
  [1455] = 3,
    ACTIONS(270), 1,
      sym__unsigned_int,
    STATE(212), 1,
      sym_number,
    ACTIONS(268), 2,
      sym__float,
      sym__int,
  [1466] = 3,
    ACTIONS(35), 1,
      anon_sym_LTproperty,
    ACTIONS(278), 1,
      anon_sym_LT_SLASHlog_GT,
    STATE(101), 2,
      sym_property,
      aux_sym_log_repeat1,
  [1477] = 1,
    ACTIONS(280), 4,
      anon_sym_LT_SLASHhttp_GT,
      anon_sym_LTtimeout_GT,
      anon_sym_LTmarkForSuspension_GT,
      anon_sym_LTsuspendOnFailure_GT,
  [1484] = 1,
    ACTIONS(282), 4,
      anon_sym_LT_SLASHhttp_GT,
      anon_sym_LTtimeout_GT,
      anon_sym_LTmarkForSuspension_GT,
      anon_sym_LTsuspendOnFailure_GT,
  [1491] = 3,
    ACTIONS(270), 1,
      sym__unsigned_int,
    STATE(211), 1,
      sym_number,
    ACTIONS(268), 2,
      sym__float,
      sym__int,
  [1502] = 4,
    ACTIONS(284), 1,
      anon_sym_LTendpoint,
    ACTIONS(286), 1,
      anon_sym_LTkey,
    STATE(149), 1,
      sym_endpoint,
    STATE(232), 1,
      sym_endpoint_reference,
  [1515] = 1,
    ACTIONS(288), 4,
      anon_sym_LT_SLASHmarkForSuspension_GT,
      anon_sym_LTretriesBeforeSuspension_GT,
      anon_sym_LTretryDelay_GT,
      anon_sym_LTerrorCodes_GT,
  [1522] = 1,
    ACTIONS(290), 4,
      anon_sym_LT_SLASHhttp_GT,
      anon_sym_LTtimeout_GT,
      anon_sym_LTmarkForSuspension_GT,
      anon_sym_LTsuspendOnFailure_GT,
  [1529] = 4,
    ACTIONS(284), 1,
      anon_sym_LTendpoint,
    ACTIONS(286), 1,
      anon_sym_LTkey,
    STATE(167), 1,
      sym_endpoint_reference,
    STATE(168), 1,
      sym_endpoint,
  [1542] = 4,
    ACTIONS(284), 1,
      anon_sym_LTendpoint,
    ACTIONS(286), 1,
      anon_sym_LTkey,
    STATE(171), 1,
      sym_endpoint_reference,
    STATE(172), 1,
      sym_endpoint,
  [1555] = 3,
    ACTIONS(270), 1,
      sym__unsigned_int,
    STATE(216), 1,
      sym_number,
    ACTIONS(268), 2,
      sym__float,
      sym__int,
  [1566] = 3,
    ACTIONS(270), 1,
      sym__unsigned_int,
    STATE(217), 1,
      sym_number,
    ACTIONS(268), 2,
      sym__float,
      sym__int,
  [1577] = 4,
    ACTIONS(292), 1,
      anon_sym_value,
    ACTIONS(294), 1,
      anon_sym_expression,
    STATE(198), 1,
      sym_expression,
    STATE(199), 1,
      sym_value,
  [1590] = 3,
    ACTIONS(35), 1,
      anon_sym_LTproperty,
    ACTIONS(296), 1,
      anon_sym_LT_SLASHlog_GT,
    STATE(84), 2,
      sym_property,
      aux_sym_log_repeat1,
  [1601] = 1,
    ACTIONS(298), 4,
      anon_sym_LT_SLASHhttp_GT,
      anon_sym_LTtimeout_GT,
      anon_sym_LTmarkForSuspension_GT,
      anon_sym_LTsuspendOnFailure_GT,
  [1608] = 1,
    ACTIONS(300), 4,
      anon_sym_LT_SLASHhttp_GT,
      anon_sym_LTtimeout_GT,
      anon_sym_LTmarkForSuspension_GT,
      anon_sym_LTsuspendOnFailure_GT,
  [1615] = 4,
    ACTIONS(284), 1,
      anon_sym_LTendpoint,
    ACTIONS(286), 1,
      anon_sym_LTkey,
    STATE(193), 1,
      sym_endpoint_reference,
    STATE(194), 1,
      sym_endpoint,
  [1628] = 1,
    ACTIONS(302), 4,
      anon_sym_LT_SLASHhttp_GT,
      anon_sym_LTtimeout_GT,
      anon_sym_LTmarkForSuspension_GT,
      anon_sym_LTsuspendOnFailure_GT,
  [1635] = 3,
    ACTIONS(304), 1,
      anon_sym_LT_SLASHlog_GT,
    ACTIONS(306), 1,
      anon_sym_LTproperty,
    STATE(101), 2,
      sym_property,
      aux_sym_log_repeat1,
  [1646] = 4,
    ACTIONS(309), 1,
      anon_sym_GT,
    ACTIONS(311), 1,
      anon_sym_sequence,
    ACTIONS(313), 1,
      anon_sym_id,
    STATE(146), 1,
      sym_id,
  [1659] = 1,
    ACTIONS(315), 4,
      anon_sym_LT_SLASHhttp_GT,
      anon_sym_LTtimeout_GT,
      anon_sym_LTmarkForSuspension_GT,
      anon_sym_LTsuspendOnFailure_GT,
  [1666] = 1,
    ACTIONS(317), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_sequence,
      anon_sym_id,
  [1673] = 2,
    ACTIONS(319), 1,
      anon_sym_LThttp,
    STATE(210), 2,
      sym__endpoint_type,
      sym_http_endpoint,
  [1681] = 3,
    ACTIONS(260), 1,
      anon_sym_blocking,
    ACTIONS(321), 1,
      anon_sym_GT,
    STATE(191), 1,
      sym_blocking,
  [1691] = 3,
    ACTIONS(323), 1,
      anon_sym_COMMA,
    ACTIONS(325), 1,
      anon_sym_LT_SLASHerrorCodes_GT,
    STATE(115), 1,
      aux_sym_error_codes_repeat1,
  [1701] = 3,
    ACTIONS(262), 1,
      anon_sym_name,
    ACTIONS(327), 1,
      anon_sym_GT,
    STATE(183), 1,
      sym_name,
  [1711] = 1,
    ACTIONS(329), 3,
      anon_sym_LT_SLASHtimeout_GT,
      anon_sym_LTduration_GT,
      anon_sym_LTresponseAction_GT,
  [1717] = 1,
    ACTIONS(331), 3,
      anon_sym_LT_SLASHtimeout_GT,
      anon_sym_LTduration_GT,
      anon_sym_LTresponseAction_GT,
  [1723] = 3,
    ACTIONS(333), 1,
      anon_sym_COMMA,
    ACTIONS(336), 1,
      anon_sym_LT_SLASHerrorCodes_GT,
    STATE(111), 1,
      aux_sym_error_codes_repeat1,
  [1733] = 1,
    ACTIONS(338), 3,
      anon_sym_never,
      anon_sym_discard,
      anon_sym_fault,
  [1739] = 2,
    ACTIONS(319), 1,
      anon_sym_LThttp,
    STATE(152), 2,
      sym__endpoint_type,
      sym_http_endpoint,
  [1747] = 3,
    ACTIONS(340), 1,
      anon_sym_xpath,
    ACTIONS(342), 1,
      anon_sym_source,
    STATE(213), 1,
      sym_source,
  [1757] = 3,
    ACTIONS(323), 1,
      anon_sym_COMMA,
    ACTIONS(344), 1,
      anon_sym_LT_SLASHerrorCodes_GT,
    STATE(111), 1,
      aux_sym_error_codes_repeat1,
  [1767] = 1,
    ACTIONS(346), 3,
      anon_sym_GT,
      anon_sym_uri_DASHtemplate,
      anon_sym_method,
  [1773] = 1,
    ACTIONS(348), 3,
      anon_sym_GT,
      anon_sym_uri_DASHtemplate,
      anon_sym_method,
  [1779] = 3,
    ACTIONS(350), 1,
      anon_sym_QMARK_GT,
    ACTIONS(352), 1,
      anon_sym_encoding,
    STATE(241), 1,
      sym_encoding_declaration,
  [1789] = 1,
    ACTIONS(354), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
  [1794] = 2,
    ACTIONS(356), 1,
      anon_sym_LTelse_GT,
    STATE(238), 1,
      sym_else,
  [1801] = 2,
    ACTIONS(358), 1,
      anon_sym_version,
    STATE(118), 1,
      sym_version_info,
  [1808] = 2,
    ACTIONS(360), 1,
      aux_sym_identifier_token1,
    STATE(154), 1,
      sym_identifier,
  [1815] = 2,
    ACTIONS(360), 1,
      aux_sym_identifier_token1,
    STATE(155), 1,
      sym_identifier,
  [1822] = 1,
    ACTIONS(336), 2,
      anon_sym_COMMA,
      anon_sym_LT_SLASHerrorCodes_GT,
  [1827] = 1,
    ACTIONS(362), 2,
      ts_builtin_sym_end,
      anon_sym_LTsequence,
  [1832] = 2,
    ACTIONS(360), 1,
      aux_sym_identifier_token1,
    STATE(230), 1,
      sym_identifier,
  [1839] = 1,
    ACTIONS(364), 2,
      ts_builtin_sym_end,
      anon_sym_LTsequence,
  [1844] = 2,
    ACTIONS(366), 1,
      anon_sym_level,
    STATE(134), 1,
      sym_level,
  [1851] = 2,
    ACTIONS(262), 1,
      anon_sym_name,
    STATE(251), 1,
      sym_name,
  [1858] = 2,
    ACTIONS(262), 1,
      anon_sym_name,
    STATE(95), 1,
      sym_name,
  [1865] = 2,
    ACTIONS(294), 1,
      anon_sym_expression,
    STATE(102), 1,
      sym_expression,
  [1872] = 1,
    ACTIONS(368), 2,
      anon_sym_QMARK_GT,
      anon_sym_encoding,
  [1877] = 1,
    ACTIONS(370), 2,
      ts_builtin_sym_end,
      anon_sym_LTsequence,
  [1882] = 2,
    ACTIONS(372), 1,
      anon_sym_GT,
    ACTIONS(374), 1,
      anon_sym_SLASH_GT,
  [1889] = 1,
    ACTIONS(376), 2,
      ts_builtin_sym_end,
      anon_sym_LTsequence,
  [1894] = 2,
    ACTIONS(356), 1,
      anon_sym_LTelse_GT,
    STATE(226), 1,
      sym_else,
  [1901] = 2,
    ACTIONS(360), 1,
      aux_sym_identifier_token1,
    STATE(221), 1,
      sym_identifier,
  [1908] = 1,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
  [1913] = 2,
    ACTIONS(380), 1,
      anon_sym_LTthen_GT,
    STATE(120), 1,
      sym_then,
  [1920] = 2,
    ACTIONS(360), 1,
      aux_sym_identifier_token1,
    STATE(179), 1,
      sym_identifier,
  [1927] = 1,
    ACTIONS(382), 2,
      anon_sym_GT,
      anon_sym_sequence,
  [1932] = 2,
    ACTIONS(360), 1,
      aux_sym_identifier_token1,
    STATE(204), 1,
      sym_identifier,
  [1939] = 2,
    ACTIONS(384), 1,
      anon_sym_regex,
    STATE(181), 1,
      sym_regex,
  [1946] = 2,
    ACTIONS(360), 1,
      aux_sym_identifier_token1,
    STATE(237), 1,
      sym_identifier,
  [1953] = 2,
    ACTIONS(380), 1,
      anon_sym_LTthen_GT,
    STATE(136), 1,
      sym_then,
  [1960] = 2,
    ACTIONS(386), 1,
      anon_sym_GT,
    ACTIONS(388), 1,
      anon_sym_sequence,
  [1967] = 1,
    ACTIONS(390), 1,
      anon_sym_EQ,
  [1971] = 1,
    ACTIONS(392), 1,
      anon_sym_EQ,
  [1975] = 1,
    ACTIONS(394), 1,
      anon_sym_LT_SLASHcall_GT,
  [1979] = 1,
    ACTIONS(396), 1,
      anon_sym_DQUOTE,
  [1983] = 1,
    ACTIONS(398), 1,
      anon_sym_RPAREN,
  [1987] = 1,
    ACTIONS(400), 1,
      anon_sym_LT_SLASHendpoint_GT,
  [1991] = 1,
    ACTIONS(402), 1,
      anon_sym_LT_SLASHforeach_GT,
  [1995] = 1,
    ACTIONS(404), 1,
      anon_sym_DQUOTE,
  [1999] = 1,
    ACTIONS(406), 1,
      anon_sym_DQUOTE,
  [2003] = 1,
    ACTIONS(408), 1,
      anon_sym_LT_SLASHforeach_GT,
  [2007] = 1,
    ACTIONS(410), 1,
      anon_sym_DQUOTE,
  [2011] = 1,
    ACTIONS(412), 1,
      anon_sym_GT,
  [2015] = 1,
    ACTIONS(414), 1,
      anon_sym_LTelse_GT,
  [2019] = 1,
    ACTIONS(416), 1,
      anon_sym_LT_SLASHfilter_GT,
  [2023] = 1,
    ACTIONS(418), 1,
      anon_sym_EQ,
  [2027] = 1,
    ACTIONS(420), 1,
      anon_sym_SLASH_GT,
  [2031] = 1,
    ACTIONS(422), 1,
      anon_sym_LT_SLASHendpoint_GT,
  [2035] = 1,
    ACTIONS(424), 1,
      anon_sym_LTsequence_GT,
  [2039] = 1,
    ACTIONS(426), 1,
      anon_sym_DQUOTE,
  [2043] = 1,
    ACTIONS(428), 1,
      anon_sym_DQUOTE,
  [2047] = 1,
    ACTIONS(430), 1,
      anon_sym_LT_SLASHcall_GT,
  [2051] = 1,
    ACTIONS(432), 1,
      anon_sym_LT_SLASHcall_GT,
  [2055] = 1,
    ACTIONS(434), 1,
      anon_sym_DQUOTE,
  [2059] = 1,
    ACTIONS(436), 1,
      anon_sym_DQUOTE,
  [2063] = 1,
    ACTIONS(438), 1,
      anon_sym_LT_SLASHcall_GT,
  [2067] = 1,
    ACTIONS(440), 1,
      anon_sym_LT_SLASHcall_GT,
  [2071] = 1,
    ACTIONS(442), 1,
      anon_sym_LT_SLASHcall_GT,
  [2075] = 1,
    ACTIONS(444), 1,
      anon_sym_SLASH_GT,
  [2079] = 1,
    ACTIONS(446), 1,
      anon_sym_DQUOTE,
  [2083] = 1,
    ACTIONS(448), 1,
      anon_sym_GT,
  [2087] = 1,
    ACTIONS(450), 1,
      anon_sym_DQUOTE,
  [2091] = 1,
    ACTIONS(452), 1,
      anon_sym_LT_SLASHforeach_GT,
  [2095] = 1,
    ACTIONS(454), 1,
      anon_sym_DQUOTE,
  [2099] = 1,
    ACTIONS(456), 1,
      anon_sym_EQ,
  [2103] = 1,
    ACTIONS(458), 1,
      anon_sym_GT,
  [2107] = 1,
    ACTIONS(460), 1,
      anon_sym_LT_SLASHfilter_GT,
  [2111] = 1,
    ACTIONS(462), 1,
      anon_sym_GT,
  [2115] = 1,
    ACTIONS(464), 1,
      anon_sym_DQUOTE,
  [2119] = 1,
    ACTIONS(466), 1,
      anon_sym_DQUOTE,
  [2123] = 1,
    ACTIONS(468), 1,
      anon_sym_DQUOTE,
  [2127] = 1,
    ACTIONS(470), 1,
      anon_sym_EQ,
  [2131] = 1,
    ACTIONS(472), 1,
      anon_sym_DQUOTE,
  [2135] = 1,
    ACTIONS(474), 1,
      anon_sym_LTsequence_GT,
  [2139] = 1,
    ACTIONS(476), 1,
      anon_sym_DQUOTE,
  [2143] = 1,
    ACTIONS(478), 1,
      anon_sym_GT,
  [2147] = 1,
    ACTIONS(480), 1,
      anon_sym_DQUOTE,
  [2151] = 1,
    ACTIONS(482), 1,
      anon_sym_LT_SLASHcall_GT,
  [2155] = 1,
    ACTIONS(484), 1,
      anon_sym_LT_SLASHcall_GT,
  [2159] = 1,
    ACTIONS(486), 1,
      anon_sym_LT_SLASHendpoint_GT,
  [2163] = 1,
    ACTIONS(488), 1,
      anon_sym_EQ,
  [2167] = 1,
    ACTIONS(490), 1,
      anon_sym_LT_SLASHforeach_GT,
  [2171] = 1,
    ACTIONS(492), 1,
      anon_sym_SLASH_GT,
  [2175] = 1,
    ACTIONS(494), 1,
      anon_sym_SLASH_GT,
  [2179] = 1,
    ACTIONS(496), 1,
      anon_sym_LT_SLASHcall_GT,
  [2183] = 1,
    ACTIONS(498), 1,
      anon_sym_LTsequence_GT,
  [2187] = 1,
    ACTIONS(500), 1,
      anon_sym_GT,
  [2191] = 1,
    ACTIONS(502), 1,
      anon_sym_GT,
  [2195] = 1,
    ACTIONS(504), 1,
      anon_sym_DQUOTE,
  [2199] = 1,
    ACTIONS(506), 1,
      anon_sym_DQUOTE,
  [2203] = 1,
    ACTIONS(508), 1,
      anon_sym_DQUOTE,
  [2207] = 1,
    ACTIONS(510), 1,
      anon_sym_LT_SLASHduration_GT,
  [2211] = 1,
    ACTIONS(512), 1,
      anon_sym_LT_SLASHresponseAction_GT,
  [2215] = 1,
    ACTIONS(514), 1,
      anon_sym_QMARK_GT,
  [2219] = 1,
    ACTIONS(516), 1,
      anon_sym_LT_SLASHendpoint_GT,
  [2223] = 1,
    ACTIONS(518), 1,
      anon_sym_LT_SLASHretriesBeforeSuspension_GT,
  [2227] = 1,
    ACTIONS(520), 1,
      anon_sym_LT_SLASHretryDelay_GT,
  [2231] = 1,
    ACTIONS(522), 1,
      anon_sym_GT,
  [2235] = 1,
    ACTIONS(524), 1,
      anon_sym_EQ,
  [2239] = 1,
    ACTIONS(526), 1,
      anon_sym_EQ,
  [2243] = 1,
    ACTIONS(528), 1,
      anon_sym_LT_SLASHinitialDuration_GT,
  [2247] = 1,
    ACTIONS(530), 1,
      anon_sym_LT_SLASHprogressionFactor_GT,
  [2251] = 1,
    ACTIONS(532), 1,
      anon_sym_LT_SLASHmaximumDuration_GT,
  [2255] = 1,
    ACTIONS(534), 1,
      anon_sym_EQ,
  [2259] = 1,
    ACTIONS(536), 1,
      anon_sym_GT,
  [2263] = 1,
    ACTIONS(538), 1,
      anon_sym_DQUOTE,
  [2267] = 1,
    ACTIONS(540), 1,
      anon_sym_DQUOTE,
  [2271] = 1,
    ACTIONS(542), 1,
      anon_sym_LT_SLASHendpoint_GT,
  [2275] = 1,
    ACTIONS(544), 1,
      anon_sym_EQ,
  [2279] = 1,
    ACTIONS(546), 1,
      anon_sym_LTsequence_GT,
  [2283] = 1,
    ACTIONS(548), 1,
      anon_sym_LT_SLASHfilter_GT,
  [2287] = 1,
    ACTIONS(550), 1,
      sym_expression_string,
  [2291] = 1,
    ACTIONS(552), 1,
      anon_sym_LT_SLASHcall_GT,
  [2295] = 1,
    ACTIONS(554), 1,
      anon_sym_EQ,
  [2299] = 1,
    ACTIONS(556), 1,
      anon_sym_DQUOTE,
  [2303] = 1,
    ACTIONS(558), 1,
      anon_sym_DQUOTE,
  [2307] = 1,
    ACTIONS(560), 1,
      anon_sym_LT_SLASHcall_GT,
  [2311] = 1,
    ACTIONS(562), 1,
      sym_encoding,
  [2315] = 1,
    ACTIONS(564), 1,
      anon_sym_EQ,
  [2319] = 1,
    ACTIONS(566), 1,
      anon_sym_EQ,
  [2323] = 1,
    ACTIONS(568), 1,
      sym_expression_string,
  [2327] = 1,
    ACTIONS(570), 1,
      anon_sym_DQUOTE,
  [2331] = 1,
    ACTIONS(572), 1,
      anon_sym_LT_SLASHfilter_GT,
  [2335] = 1,
    ACTIONS(574), 1,
      anon_sym_LTelse_GT,
  [2339] = 1,
    ACTIONS(576), 1,
      anon_sym_LT_SLASHforeach_GT,
  [2343] = 1,
    ACTIONS(578), 1,
      anon_sym_QMARK_GT,
  [2347] = 1,
    ACTIONS(580), 1,
      anon_sym_EQ,
  [2351] = 1,
    ACTIONS(582), 1,
      anon_sym_DQUOTE,
  [2355] = 1,
    ACTIONS(584), 1,
      anon_sym_DQUOTE,
  [2359] = 1,
    ACTIONS(586), 1,
      anon_sym_DQUOTE,
  [2363] = 1,
    ACTIONS(588), 1,
      sym_version_number,
  [2367] = 1,
    ACTIONS(590), 1,
      anon_sym_DQUOTE,
  [2371] = 1,
    ACTIONS(592), 1,
      anon_sym_EQ,
  [2375] = 1,
    ACTIONS(594), 1,
      anon_sym_LT_SLASHforeach_GT,
  [2379] = 1,
    ACTIONS(596), 1,
      anon_sym_LT_SLASHforeach_GT,
  [2383] = 1,
    ACTIONS(598), 1,
      anon_sym_GT,
  [2387] = 1,
    ACTIONS(600), 1,
      anon_sym_GT,
  [2391] = 1,
    ACTIONS(602), 1,
      anon_sym_EQ,
  [2395] = 1,
    ACTIONS(604), 1,
      ts_builtin_sym_end,
  [2399] = 1,
    ACTIONS(606), 1,
      anon_sym_LT_SLASHforeach_GT,
  [2403] = 1,
    ACTIONS(608), 1,
      anon_sym_DQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 70,
  [SMALL_STATE(5)] = 104,
  [SMALL_STATE(6)] = 138,
  [SMALL_STATE(7)] = 172,
  [SMALL_STATE(8)] = 206,
  [SMALL_STATE(9)] = 240,
  [SMALL_STATE(10)] = 274,
  [SMALL_STATE(11)] = 308,
  [SMALL_STATE(12)] = 342,
  [SMALL_STATE(13)] = 376,
  [SMALL_STATE(14)] = 410,
  [SMALL_STATE(15)] = 444,
  [SMALL_STATE(16)] = 478,
  [SMALL_STATE(17)] = 512,
  [SMALL_STATE(18)] = 529,
  [SMALL_STATE(19)] = 552,
  [SMALL_STATE(20)] = 575,
  [SMALL_STATE(21)] = 599,
  [SMALL_STATE(22)] = 623,
  [SMALL_STATE(23)] = 647,
  [SMALL_STATE(24)] = 666,
  [SMALL_STATE(25)] = 685,
  [SMALL_STATE(26)] = 698,
  [SMALL_STATE(27)] = 711,
  [SMALL_STATE(28)] = 730,
  [SMALL_STATE(29)] = 742,
  [SMALL_STATE(30)] = 754,
  [SMALL_STATE(31)] = 776,
  [SMALL_STATE(32)] = 798,
  [SMALL_STATE(33)] = 810,
  [SMALL_STATE(34)] = 822,
  [SMALL_STATE(35)] = 834,
  [SMALL_STATE(36)] = 846,
  [SMALL_STATE(37)] = 858,
  [SMALL_STATE(38)] = 870,
  [SMALL_STATE(39)] = 882,
  [SMALL_STATE(40)] = 894,
  [SMALL_STATE(41)] = 906,
  [SMALL_STATE(42)] = 926,
  [SMALL_STATE(43)] = 938,
  [SMALL_STATE(44)] = 950,
  [SMALL_STATE(45)] = 962,
  [SMALL_STATE(46)] = 974,
  [SMALL_STATE(47)] = 986,
  [SMALL_STATE(48)] = 1008,
  [SMALL_STATE(49)] = 1020,
  [SMALL_STATE(50)] = 1040,
  [SMALL_STATE(51)] = 1052,
  [SMALL_STATE(52)] = 1064,
  [SMALL_STATE(53)] = 1076,
  [SMALL_STATE(54)] = 1098,
  [SMALL_STATE(55)] = 1110,
  [SMALL_STATE(56)] = 1132,
  [SMALL_STATE(57)] = 1144,
  [SMALL_STATE(58)] = 1164,
  [SMALL_STATE(59)] = 1176,
  [SMALL_STATE(60)] = 1187,
  [SMALL_STATE(61)] = 1198,
  [SMALL_STATE(62)] = 1209,
  [SMALL_STATE(63)] = 1225,
  [SMALL_STATE(64)] = 1241,
  [SMALL_STATE(65)] = 1257,
  [SMALL_STATE(66)] = 1272,
  [SMALL_STATE(67)] = 1287,
  [SMALL_STATE(68)] = 1302,
  [SMALL_STATE(69)] = 1314,
  [SMALL_STATE(70)] = 1326,
  [SMALL_STATE(71)] = 1334,
  [SMALL_STATE(72)] = 1346,
  [SMALL_STATE(73)] = 1358,
  [SMALL_STATE(74)] = 1374,
  [SMALL_STATE(75)] = 1382,
  [SMALL_STATE(76)] = 1390,
  [SMALL_STATE(77)] = 1401,
  [SMALL_STATE(78)] = 1408,
  [SMALL_STATE(79)] = 1419,
  [SMALL_STATE(80)] = 1430,
  [SMALL_STATE(81)] = 1437,
  [SMALL_STATE(82)] = 1448,
  [SMALL_STATE(83)] = 1455,
  [SMALL_STATE(84)] = 1466,
  [SMALL_STATE(85)] = 1477,
  [SMALL_STATE(86)] = 1484,
  [SMALL_STATE(87)] = 1491,
  [SMALL_STATE(88)] = 1502,
  [SMALL_STATE(89)] = 1515,
  [SMALL_STATE(90)] = 1522,
  [SMALL_STATE(91)] = 1529,
  [SMALL_STATE(92)] = 1542,
  [SMALL_STATE(93)] = 1555,
  [SMALL_STATE(94)] = 1566,
  [SMALL_STATE(95)] = 1577,
  [SMALL_STATE(96)] = 1590,
  [SMALL_STATE(97)] = 1601,
  [SMALL_STATE(98)] = 1608,
  [SMALL_STATE(99)] = 1615,
  [SMALL_STATE(100)] = 1628,
  [SMALL_STATE(101)] = 1635,
  [SMALL_STATE(102)] = 1646,
  [SMALL_STATE(103)] = 1659,
  [SMALL_STATE(104)] = 1666,
  [SMALL_STATE(105)] = 1673,
  [SMALL_STATE(106)] = 1681,
  [SMALL_STATE(107)] = 1691,
  [SMALL_STATE(108)] = 1701,
  [SMALL_STATE(109)] = 1711,
  [SMALL_STATE(110)] = 1717,
  [SMALL_STATE(111)] = 1723,
  [SMALL_STATE(112)] = 1733,
  [SMALL_STATE(113)] = 1739,
  [SMALL_STATE(114)] = 1747,
  [SMALL_STATE(115)] = 1757,
  [SMALL_STATE(116)] = 1767,
  [SMALL_STATE(117)] = 1773,
  [SMALL_STATE(118)] = 1779,
  [SMALL_STATE(119)] = 1789,
  [SMALL_STATE(120)] = 1794,
  [SMALL_STATE(121)] = 1801,
  [SMALL_STATE(122)] = 1808,
  [SMALL_STATE(123)] = 1815,
  [SMALL_STATE(124)] = 1822,
  [SMALL_STATE(125)] = 1827,
  [SMALL_STATE(126)] = 1832,
  [SMALL_STATE(127)] = 1839,
  [SMALL_STATE(128)] = 1844,
  [SMALL_STATE(129)] = 1851,
  [SMALL_STATE(130)] = 1858,
  [SMALL_STATE(131)] = 1865,
  [SMALL_STATE(132)] = 1872,
  [SMALL_STATE(133)] = 1877,
  [SMALL_STATE(134)] = 1882,
  [SMALL_STATE(135)] = 1889,
  [SMALL_STATE(136)] = 1894,
  [SMALL_STATE(137)] = 1901,
  [SMALL_STATE(138)] = 1908,
  [SMALL_STATE(139)] = 1913,
  [SMALL_STATE(140)] = 1920,
  [SMALL_STATE(141)] = 1927,
  [SMALL_STATE(142)] = 1932,
  [SMALL_STATE(143)] = 1939,
  [SMALL_STATE(144)] = 1946,
  [SMALL_STATE(145)] = 1953,
  [SMALL_STATE(146)] = 1960,
  [SMALL_STATE(147)] = 1967,
  [SMALL_STATE(148)] = 1971,
  [SMALL_STATE(149)] = 1975,
  [SMALL_STATE(150)] = 1979,
  [SMALL_STATE(151)] = 1983,
  [SMALL_STATE(152)] = 1987,
  [SMALL_STATE(153)] = 1991,
  [SMALL_STATE(154)] = 1995,
  [SMALL_STATE(155)] = 1999,
  [SMALL_STATE(156)] = 2003,
  [SMALL_STATE(157)] = 2007,
  [SMALL_STATE(158)] = 2011,
  [SMALL_STATE(159)] = 2015,
  [SMALL_STATE(160)] = 2019,
  [SMALL_STATE(161)] = 2023,
  [SMALL_STATE(162)] = 2027,
  [SMALL_STATE(163)] = 2031,
  [SMALL_STATE(164)] = 2035,
  [SMALL_STATE(165)] = 2039,
  [SMALL_STATE(166)] = 2043,
  [SMALL_STATE(167)] = 2047,
  [SMALL_STATE(168)] = 2051,
  [SMALL_STATE(169)] = 2055,
  [SMALL_STATE(170)] = 2059,
  [SMALL_STATE(171)] = 2063,
  [SMALL_STATE(172)] = 2067,
  [SMALL_STATE(173)] = 2071,
  [SMALL_STATE(174)] = 2075,
  [SMALL_STATE(175)] = 2079,
  [SMALL_STATE(176)] = 2083,
  [SMALL_STATE(177)] = 2087,
  [SMALL_STATE(178)] = 2091,
  [SMALL_STATE(179)] = 2095,
  [SMALL_STATE(180)] = 2099,
  [SMALL_STATE(181)] = 2103,
  [SMALL_STATE(182)] = 2107,
  [SMALL_STATE(183)] = 2111,
  [SMALL_STATE(184)] = 2115,
  [SMALL_STATE(185)] = 2119,
  [SMALL_STATE(186)] = 2123,
  [SMALL_STATE(187)] = 2127,
  [SMALL_STATE(188)] = 2131,
  [SMALL_STATE(189)] = 2135,
  [SMALL_STATE(190)] = 2139,
  [SMALL_STATE(191)] = 2143,
  [SMALL_STATE(192)] = 2147,
  [SMALL_STATE(193)] = 2151,
  [SMALL_STATE(194)] = 2155,
  [SMALL_STATE(195)] = 2159,
  [SMALL_STATE(196)] = 2163,
  [SMALL_STATE(197)] = 2167,
  [SMALL_STATE(198)] = 2171,
  [SMALL_STATE(199)] = 2175,
  [SMALL_STATE(200)] = 2179,
  [SMALL_STATE(201)] = 2183,
  [SMALL_STATE(202)] = 2187,
  [SMALL_STATE(203)] = 2191,
  [SMALL_STATE(204)] = 2195,
  [SMALL_STATE(205)] = 2199,
  [SMALL_STATE(206)] = 2203,
  [SMALL_STATE(207)] = 2207,
  [SMALL_STATE(208)] = 2211,
  [SMALL_STATE(209)] = 2215,
  [SMALL_STATE(210)] = 2219,
  [SMALL_STATE(211)] = 2223,
  [SMALL_STATE(212)] = 2227,
  [SMALL_STATE(213)] = 2231,
  [SMALL_STATE(214)] = 2235,
  [SMALL_STATE(215)] = 2239,
  [SMALL_STATE(216)] = 2243,
  [SMALL_STATE(217)] = 2247,
  [SMALL_STATE(218)] = 2251,
  [SMALL_STATE(219)] = 2255,
  [SMALL_STATE(220)] = 2259,
  [SMALL_STATE(221)] = 2263,
  [SMALL_STATE(222)] = 2267,
  [SMALL_STATE(223)] = 2271,
  [SMALL_STATE(224)] = 2275,
  [SMALL_STATE(225)] = 2279,
  [SMALL_STATE(226)] = 2283,
  [SMALL_STATE(227)] = 2287,
  [SMALL_STATE(228)] = 2291,
  [SMALL_STATE(229)] = 2295,
  [SMALL_STATE(230)] = 2299,
  [SMALL_STATE(231)] = 2303,
  [SMALL_STATE(232)] = 2307,
  [SMALL_STATE(233)] = 2311,
  [SMALL_STATE(234)] = 2315,
  [SMALL_STATE(235)] = 2319,
  [SMALL_STATE(236)] = 2323,
  [SMALL_STATE(237)] = 2327,
  [SMALL_STATE(238)] = 2331,
  [SMALL_STATE(239)] = 2335,
  [SMALL_STATE(240)] = 2339,
  [SMALL_STATE(241)] = 2343,
  [SMALL_STATE(242)] = 2347,
  [SMALL_STATE(243)] = 2351,
  [SMALL_STATE(244)] = 2355,
  [SMALL_STATE(245)] = 2359,
  [SMALL_STATE(246)] = 2363,
  [SMALL_STATE(247)] = 2367,
  [SMALL_STATE(248)] = 2371,
  [SMALL_STATE(249)] = 2375,
  [SMALL_STATE(250)] = 2379,
  [SMALL_STATE(251)] = 2383,
  [SMALL_STATE(252)] = 2387,
  [SMALL_STATE(253)] = 2391,
  [SMALL_STATE(254)] = 2395,
  [SMALL_STATE(255)] = 2399,
  [SMALL_STATE(256)] = 2403,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_definition_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_definition_repeat1, 2), SHIFT_REPEAT(39),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_definition_repeat1, 2), SHIFT_REPEAT(128),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_definition_repeat1, 2), SHIFT_REPEAT(130),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_definition_repeat1, 2), SHIFT_REPEAT(73),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_definition_repeat1, 2), SHIFT_REPEAT(131),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_definition_repeat1, 2), SHIFT_REPEAT(114),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_suspend_on_failure_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_suspend_on_failure_repeat1, 2), SHIFT_REPEAT(93),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_suspend_on_failure_repeat1, 2), SHIFT_REPEAT(94),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_suspend_on_failure_repeat1, 2), SHIFT_REPEAT(76),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_suspend_on_failure_repeat1, 2), SHIFT_REPEAT(79),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xpath, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_xpath_repeat1, 2),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(24),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(24),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, .production_id = 4),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, .production_id = 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach, 8, .production_id = 17),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach, 12, .production_id = 21),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5, .production_id = 10),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5, .production_id = 9),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5, .production_id = 8),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5, .production_id = 7),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach, 13, .production_id = 22),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log, 3, .production_id = 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, .production_id = 6),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_respond, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, .production_id = 5),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mark_for_suspending_repeat1, 2),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mark_for_suspending_repeat1, 2), SHIFT_REPEAT(87),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mark_for_suspending_repeat1, 2), SHIFT_REPEAT(83),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mark_for_suspending_repeat1, 2), SHIFT_REPEAT(79),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log, 5, .production_id = 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach, 6, .production_id = 14),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach, 7, .production_id = 14),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach, 7, .production_id = 17),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 10, .production_id = 20),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log, 4, .production_id = 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mediator, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 6, .production_id = 13),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 6, .production_id = 12),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach, 12, .production_id = 22),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_http_endpoint_repeat2, 2),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_http_endpoint_repeat2, 2), SHIFT_REPEAT(62),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_http_endpoint_repeat2, 2), SHIFT_REPEAT(57),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_http_endpoint_repeat2, 2), SHIFT_REPEAT(21),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach, 11, .production_id = 21),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 6, .production_id = 15),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_codes, 4),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_codes, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_timeout_repeat1, 2),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_timeout_repeat1, 2), SHIFT_REPEAT(81),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_timeout_repeat1, 2), SHIFT_REPEAT(112),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_http_endpoint_repeat1, 2),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_http_endpoint_repeat1, 2), SHIFT_REPEAT(235),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_http_endpoint_repeat1, 2), SHIFT_REPEAT(234),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_progression_factor, 3, .production_id = 19),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(129),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maximum_duration, 3, .production_id = 19),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_initial_duration, 3, .production_id = 19),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 5),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_delay, 3, .production_id = 19),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timeout, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endpoint_error_property, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retries_before_suspending, 3, .production_id = 19),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_suspend_on_failure, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mark_for_suspending, 2),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timeout, 3),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mark_for_suspending, 3),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_log_repeat1, 2),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_repeat1, 2), SHIFT_REPEAT(130),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_suspend_on_failure, 3),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 5),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration, 3, .production_id = 19),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_action, 3),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_error_codes_repeat1, 2), SHIFT_REPEAT(78),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_error_codes_repeat1, 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__endpoint_attribute, 5),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 5),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_level, 5),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_declaration, 3),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_definition, 4, .production_id = 1),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_info, 3),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_declaration, 4),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_definition, 5, .production_id = 1),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 5),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_then, 3),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else, 2),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 5),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_endpoint, 3),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endpoint, 5, .production_id = 16),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_eval, 3),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 6, .production_id = 18),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else, 3),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_endpoint, 4),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endpoint_reference, 6),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blocking, 5),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_encoding_declaration, 3),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_endpoint, 5),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endpoint, 4, .production_id = 11),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_then, 2),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 5),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [604] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
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
