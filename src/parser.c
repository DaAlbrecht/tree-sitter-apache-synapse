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
#define STATE_COUNT 167
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 125
#define ALIAS_COUNT 0
#define TOKEN_COUNT 78
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 16

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
  anon_sym_LTmarkForSuspension_GT = 35,
  anon_sym_LT_SLASHmarkForSuspension_GT = 36,
  anon_sym_LTretriesBeforeSuspension_GT = 37,
  anon_sym_LT_SLASHretriesBeforeSuspension_GT = 38,
  anon_sym_LTretryDelay_GT = 39,
  anon_sym_LT_SLASHretryDelay_GT = 40,
  anon_sym_LTsuspendOnFailure_GT = 41,
  anon_sym_LT_SLASHsuspendOnFailure_GT = 42,
  anon_sym_LTinitialDuration_GT = 43,
  anon_sym_LT_SLASHinitialDuration_GT = 44,
  anon_sym_LTprogressionFactor_GT = 45,
  anon_sym_LT_SLASHprogressionFactor_GT = 46,
  anon_sym_LTmaximumDuration_GT = 47,
  anon_sym_LT_SLASHmaximumDuration_GT = 48,
  anon_sym_LTerrorCodes_GT = 49,
  anon_sym_LT_SLASHerrorCodes_GT = 50,
  anon_sym_LTduration_GT = 51,
  anon_sym_LT_SLASHduration_GT = 52,
  anon_sym_LTresponseAction_GT = 53,
  anon_sym_never = 54,
  anon_sym_discard = 55,
  anon_sym_fault = 56,
  anon_sym_LT_SLASHresponseAction_GT = 57,
  anon_sym_LTkey = 58,
  anon_sym_blocking = 59,
  anon_sym_true = 60,
  anon_sym_false = 61,
  anon_sym_value = 62,
  anon_sym_expression = 63,
  anon_sym_name = 64,
  anon_sym_level = 65,
  anon_sym_full = 66,
  anon_sym_simple = 67,
  anon_sym_custom = 68,
  anon_sym_headers = 69,
  sym_identifier = 70,
  sym_number = 71,
  anon_sym_LT_QMARKxml = 72,
  anon_sym_QMARK_GT = 73,
  anon_sym_version = 74,
  sym_version_number = 75,
  anon_sym_encoding = 76,
  sym_encoding = 77,
  sym_source_file = 78,
  sym__definition = 79,
  sym_sequence_definition = 80,
  sym_mediator = 81,
  sym_respond = 82,
  sym_log = 83,
  sym_property = 84,
  sym_call = 85,
  sym_endpoint = 86,
  sym__endpoint_type = 87,
  sym_http_endpoint = 88,
  sym__endpoint_attribute = 89,
  sym_uri_template = 90,
  sym_method = 91,
  sym_endpoint_error_property = 92,
  sym_timeout = 93,
  sym_mark_for_suspending = 94,
  sym__mark_for_suspending_property = 95,
  sym_retries_before_suspending = 96,
  sym_retry_delay = 97,
  sym_suspend_on_failure = 98,
  sym__suspend_on_failure_property = 99,
  sym_initial_duration = 100,
  sym_progression_factor = 101,
  sym_maximum_duration = 102,
  sym_error_codes = 103,
  sym__timeout_property = 104,
  sym_duration = 105,
  sym_response_action = 106,
  sym_endpoint_reference = 107,
  sym_blocking = 108,
  sym_value = 109,
  sym_expression = 110,
  sym_name = 111,
  sym_level = 112,
  sym_xml_declaration = 113,
  sym_version_info = 114,
  sym_encoding_declaration = 115,
  aux_sym_source_file_repeat1 = 116,
  aux_sym_sequence_definition_repeat1 = 117,
  aux_sym_log_repeat1 = 118,
  aux_sym_http_endpoint_repeat1 = 119,
  aux_sym_http_endpoint_repeat2 = 120,
  aux_sym_timeout_repeat1 = 121,
  aux_sym_mark_for_suspending_repeat1 = 122,
  aux_sym_suspend_on_failure_repeat1 = 123,
  aux_sym_error_codes_repeat1 = 124,
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
  [sym_name] = "name",
  [sym_level] = "level",
  [sym_xml_declaration] = "xml_declaration",
  [sym_version_info] = "version_info",
  [sym_encoding_declaration] = "encoding_declaration",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_sequence_definition_repeat1] = "sequence_definition_repeat1",
  [aux_sym_log_repeat1] = "log_repeat1",
  [aux_sym_http_endpoint_repeat1] = "http_endpoint_repeat1",
  [aux_sym_http_endpoint_repeat2] = "http_endpoint_repeat2",
  [aux_sym_timeout_repeat1] = "timeout_repeat1",
  [aux_sym_mark_for_suspending_repeat1] = "mark_for_suspending_repeat1",
  [aux_sym_suspend_on_failure_repeat1] = "suspend_on_failure_repeat1",
  [aux_sym_error_codes_repeat1] = "error_codes_repeat1",
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
  [sym_name] = sym_name,
  [sym_level] = sym_level,
  [sym_xml_declaration] = sym_xml_declaration,
  [sym_version_info] = sym_version_info,
  [sym_encoding_declaration] = sym_encoding_declaration,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_sequence_definition_repeat1] = aux_sym_sequence_definition_repeat1,
  [aux_sym_log_repeat1] = aux_sym_log_repeat1,
  [aux_sym_http_endpoint_repeat1] = aux_sym_http_endpoint_repeat1,
  [aux_sym_http_endpoint_repeat2] = aux_sym_http_endpoint_repeat2,
  [aux_sym_timeout_repeat1] = aux_sym_timeout_repeat1,
  [aux_sym_mark_for_suspending_repeat1] = aux_sym_mark_for_suspending_repeat1,
  [aux_sym_suspend_on_failure_repeat1] = aux_sym_suspend_on_failure_repeat1,
  [aux_sym_error_codes_repeat1] = aux_sym_error_codes_repeat1,
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
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_level] = {
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
};

enum {
  field_blocking = 1,
  field_endpoint = 2,
  field_endpoint_reference = 3,
  field_endpoint_type = 4,
  field_expression = 5,
  field_level = 6,
  field_name = 7,
  field_number = 8,
  field_value = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_blocking] = "blocking",
  [field_endpoint] = "endpoint",
  [field_endpoint_reference] = "endpoint_reference",
  [field_endpoint_type] = "endpoint_type",
  [field_expression] = "expression",
  [field_level] = "level",
  [field_name] = "name",
  [field_number] = "number",
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(497);
      if (lookahead == '"') ADVANCE(515);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '<') ADVANCE(8);
      if (lookahead == '=') ADVANCE(513);
      if (lookahead == '>') ADVANCE(499);
      if (lookahead == '?') ADVANCE(13);
      if (lookahead == 'D') ADVANCE(602);
      if (lookahead == 'G') ADVANCE(603);
      if (lookahead == 'H') ADVANCE(604);
      if (lookahead == 'O') ADVANCE(612);
      if (lookahead == 'P') ADVANCE(599);
      if (lookahead == 'b') ADVANCE(662);
      if (lookahead == 'c') ADVANCE(715);
      if (lookahead == 'd') ADVANCE(644);
      if (lookahead == 'e') ADVANCE(674);
      if (lookahead == 'f') ADVANCE(621);
      if (lookahead == 'g') ADVANCE(635);
      if (lookahead == 'h') ADVANCE(636);
      if (lookahead == 'l') ADVANCE(637);
      if (lookahead == 'm') ADVANCE(645);
      if (lookahead == 'n') ADVANCE(622);
      if (lookahead == 'o') ADVANCE(687);
      if (lookahead == 'p') ADVANCE(625);
      if (lookahead == 's') ADVANCE(655);
      if (lookahead == 't') ADVANCE(691);
      if (lookahead == 'u') ADVANCE(692);
      if (lookahead == 'v') ADVANCE(624);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(721);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(514);
      if (lookahead == '>') ADVANCE(499);
      if (lookahead == '?') ADVANCE(13);
      if (lookahead == 'D') ADVANCE(58);
      if (lookahead == 'G') ADVANCE(59);
      if (lookahead == 'H') ADVANCE(61);
      if (lookahead == 'O') ADVANCE(77);
      if (lookahead == 'P') ADVANCE(44);
      if (lookahead == 'b') ADVANCE(250);
      if (lookahead == 'd') ADVANCE(166);
      if (lookahead == 'e') ADVANCE(281);
      if (lookahead == 'f') ADVANCE(93);
      if (lookahead == 'g') ADVANCE(167);
      if (lookahead == 'h') ADVANCE(163);
      if (lookahead == 'l') ADVANCE(147);
      if (lookahead == 'm') ADVANCE(169);
      if (lookahead == 'n') ADVANCE(102);
      if (lookahead == 'o') ADVANCE(361);
      if (lookahead == 'p') ADVANCE(99);
      if (lookahead == 't') ADVANCE(387);
      if (lookahead == 'u') ADVANCE(379);
      if (lookahead == 'v') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == 'c') ADVANCE(474);
      if (lookahead == 'f') ADVANCE(475);
      if (lookahead == 'h') ADVANCE(165);
      if (lookahead == 's') ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(729);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(449);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(496);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(124);
      if (lookahead == '?') ADVANCE(490);
      if (lookahead == 'c') ADVANCE(91);
      if (lookahead == 'd') ADVANCE(466);
      if (lookahead == 'e') ADVANCE(273);
      if (lookahead == 'h') ADVANCE(440);
      if (lookahead == 'i') ADVANCE(278);
      if (lookahead == 'k') ADVANCE(140);
      if (lookahead == 'l') ADVANCE(311);
      if (lookahead == 'm') ADVANCE(92);
      if (lookahead == 'p') ADVANCE(375);
      if (lookahead == 'r') ADVANCE(141);
      if (lookahead == 's') ADVANCE(142);
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(20);
      END_STATE();
    case 10:
      if (lookahead == '1') ADVANCE(7);
      if (lookahead == 'U') ADVANCE(89);
      END_STATE();
    case 11:
      if (lookahead == '8') ADVANCE(4);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(504);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(723);
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(503);
      END_STATE();
    case 15:
      if (lookahead == '>') ADVANCE(507);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(511);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(546);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(547);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(564);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(501);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(565);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(509);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(500);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(562);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(552);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(563);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(553);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(566);
      END_STATE();
    case 29:
      if (lookahead == '>') ADVANCE(573);
      END_STATE();
    case 30:
      if (lookahead == '>') ADVANCE(556);
      END_STATE();
    case 31:
      if (lookahead == '>') ADVANCE(560);
      END_STATE();
    case 32:
      if (lookahead == '>') ADVANCE(557);
      END_STATE();
    case 33:
      if (lookahead == '>') ADVANCE(561);
      END_STATE();
    case 34:
      if (lookahead == '>') ADVANCE(554);
      END_STATE();
    case 35:
      if (lookahead == '>') ADVANCE(555);
      END_STATE();
    case 36:
      if (lookahead == '>') ADVANCE(548);
      END_STATE();
    case 37:
      if (lookahead == '>') ADVANCE(558);
      END_STATE();
    case 38:
      if (lookahead == '>') ADVANCE(549);
      END_STATE();
    case 39:
      if (lookahead == '>') ADVANCE(559);
      END_STATE();
    case 40:
      if (lookahead == '>') ADVANCE(550);
      END_STATE();
    case 41:
      if (lookahead == '>') ADVANCE(551);
      END_STATE();
    case 42:
      if (lookahead == 'A') ADVANCE(126);
      END_STATE();
    case 43:
      if (lookahead == 'A') ADVANCE(51);
      END_STATE();
    case 44:
      if (lookahead == 'A') ADVANCE(88);
      if (lookahead == 'O') ADVANCE(80);
      if (lookahead == 'U') ADVANCE(86);
      END_STATE();
    case 45:
      if (lookahead == 'A') ADVANCE(127);
      END_STATE();
    case 46:
      if (lookahead == 'B') ADVANCE(145);
      END_STATE();
    case 47:
      if (lookahead == 'B') ADVANCE(191);
      END_STATE();
    case 48:
      if (lookahead == 'C') ADVANCE(70);
      END_STATE();
    case 49:
      if (lookahead == 'C') ADVANCE(315);
      END_STATE();
    case 50:
      if (lookahead == 'C') ADVANCE(346);
      END_STATE();
    case 51:
      if (lookahead == 'D') ADVANCE(526);
      END_STATE();
    case 52:
      if (lookahead == 'D') ADVANCE(160);
      END_STATE();
    case 53:
      if (lookahead == 'D') ADVANCE(177);
      END_STATE();
    case 54:
      if (lookahead == 'D') ADVANCE(480);
      END_STATE();
    case 55:
      if (lookahead == 'D') ADVANCE(481);
      END_STATE();
    case 56:
      if (lookahead == 'D') ADVANCE(482);
      END_STATE();
    case 57:
      if (lookahead == 'D') ADVANCE(483);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(72);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(84);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(524);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(43);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(90);
      END_STATE();
    case 63:
      if (lookahead == 'F') ADVANCE(5);
      END_STATE();
    case 64:
      if (lookahead == 'F') ADVANCE(97);
      END_STATE();
    case 65:
      if (lookahead == 'F') ADVANCE(103);
      END_STATE();
    case 66:
      if (lookahead == 'F') ADVANCE(326);
      END_STATE();
    case 67:
      if (lookahead == 'F') ADVANCE(108);
      END_STATE();
    case 68:
      if (lookahead == 'F') ADVANCE(114);
      END_STATE();
    case 69:
      if (lookahead == 'F') ADVANCE(350);
      END_STATE();
    case 70:
      if (lookahead == 'H') ADVANCE(530);
      END_STATE();
    case 71:
      if (lookahead == 'I') ADVANCE(74);
      END_STATE();
    case 72:
      if (lookahead == 'L') ADVANCE(62);
      END_STATE();
    case 73:
      if (lookahead == 'N') ADVANCE(78);
      END_STATE();
    case 74:
      if (lookahead == 'O') ADVANCE(73);
      END_STATE();
    case 75:
      if (lookahead == 'O') ADVANCE(280);
      END_STATE();
    case 76:
      if (lookahead == 'O') ADVANCE(308);
      END_STATE();
    case 77:
      if (lookahead == 'P') ADVANCE(85);
      END_STATE();
    case 78:
      if (lookahead == 'S') ADVANCE(528);
      END_STATE();
    case 79:
      if (lookahead == 'S') ADVANCE(478);
      END_STATE();
    case 80:
      if (lookahead == 'S') ADVANCE(87);
      END_STATE();
    case 81:
      if (lookahead == 'S') ADVANCE(484);
      END_STATE();
    case 82:
      if (lookahead == 'S') ADVANCE(485);
      END_STATE();
    case 83:
      if (lookahead == 'S') ADVANCE(486);
      END_STATE();
    case 84:
      if (lookahead == 'T') ADVANCE(518);
      END_STATE();
    case 85:
      if (lookahead == 'T') ADVANCE(71);
      END_STATE();
    case 86:
      if (lookahead == 'T') ADVANCE(522);
      END_STATE();
    case 87:
      if (lookahead == 'T') ADVANCE(520);
      END_STATE();
    case 88:
      if (lookahead == 'T') ADVANCE(48);
      END_STATE();
    case 89:
      if (lookahead == 'T') ADVANCE(63);
      END_STATE();
    case 90:
      if (lookahead == 'T') ADVANCE(60);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(246);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(370);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(258);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(493);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(245);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(259);
      if (lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(447);
      if (lookahead == 'o') ADVANCE(412);
      if (lookahead == 'u') ADVANCE(437);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(380);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(249);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(267);
      if (lookahead == 'e') ADVANCE(489);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(444);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(494);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(451);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(458);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(461);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(462);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(463);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(464);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(232);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(261);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(403);
      END_STATE();
    case 117:
      if (lookahead == 'c') ADVANCE(239);
      END_STATE();
    case 118:
      if (lookahead == 'c') ADVANCE(201);
      END_STATE();
    case 119:
      if (lookahead == 'c') ADVANCE(100);
      END_STATE();
    case 120:
      if (lookahead == 'c') ADVANCE(456);
      END_STATE();
    case 121:
      if (lookahead == 'c') ADVANCE(144);
      END_STATE();
    case 122:
      if (lookahead == 'c') ADVANCE(322);
      END_STATE();
    case 123:
      if (lookahead == 'c') ADVANCE(168);
      END_STATE();
    case 124:
      if (lookahead == 'c') ADVANCE(101);
      if (lookahead == 'd') ADVANCE(479);
      if (lookahead == 'e') ADVANCE(307);
      if (lookahead == 'h') ADVANCE(454);
      if (lookahead == 'i') ADVANCE(310);
      if (lookahead == 'l') ADVANCE(314);
      if (lookahead == 'm') ADVANCE(116);
      if (lookahead == 'p') ADVANCE(389);
      if (lookahead == 'r') ADVANCE(180);
      if (lookahead == 's') ADVANCE(181);
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 125:
      if (lookahead == 'c') ADVANCE(457);
      END_STATE();
    case 126:
      if (lookahead == 'c') ADVANCE(459);
      END_STATE();
    case 127:
      if (lookahead == 'c') ADVANCE(460);
      END_STATE();
    case 128:
      if (lookahead == 'd') ADVANCE(353);
      END_STATE();
    case 129:
      if (lookahead == 'd') ADVANCE(9);
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 130:
      if (lookahead == 'd') ADVANCE(75);
      END_STATE();
    case 131:
      if (lookahead == 'd') ADVANCE(540);
      END_STATE();
    case 132:
      if (lookahead == 'd') ADVANCE(516);
      END_STATE();
    case 133:
      if (lookahead == 'd') ADVANCE(569);
      END_STATE();
    case 134:
      if (lookahead == 'd') ADVANCE(161);
      END_STATE();
    case 135:
      if (lookahead == 'd') ADVANCE(178);
      END_STATE();
    case 136:
      if (lookahead == 'd') ADVANCE(172);
      END_STATE();
    case 137:
      if (lookahead == 'd') ADVANCE(213);
      END_STATE();
    case 138:
      if (lookahead == 'd') ADVANCE(362);
      END_STATE();
    case 139:
      if (lookahead == 'd') ADVANCE(76);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(491);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(415);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(368);
      if (lookahead == 'u') ADVANCE(407);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(498);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(512);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(488);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(585);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(577);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(579);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(581);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(538);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(591);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(408);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(404);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(317);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(410);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(302);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(253);
      if (lookahead == 'i') ADVANCE(409);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(435);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(436);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(374);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(382);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(331);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(411);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(453);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(418);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(369);
      if (lookahead == 'u') ADVANCE(432);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(305);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(431);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(309);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(433);
      END_STATE();
    case 193:
      if (lookahead == 'f') ADVANCE(332);
      END_STATE();
    case 194:
      if (lookahead == 'f') ADVANCE(351);
      END_STATE();
    case 195:
      if (lookahead == 'g') ADVANCE(502);
      END_STATE();
    case 196:
      if (lookahead == 'g') ADVANCE(575);
      END_STATE();
    case 197:
      if (lookahead == 'g') ADVANCE(727);
      END_STATE();
    case 198:
      if (lookahead == 'g') ADVANCE(14);
      END_STATE();
    case 199:
      if (lookahead == 'g') ADVANCE(381);
      if (lookahead == 'p') ADVANCE(162);
      END_STATE();
    case 200:
      if (lookahead == 'g') ADVANCE(401);
      END_STATE();
    case 201:
      if (lookahead == 'h') ADVANCE(544);
      END_STATE();
    case 202:
      if (lookahead == 'h') ADVANCE(324);
      END_STATE();
    case 203:
      if (lookahead == 'i') ADVANCE(6);
      END_STATE();
    case 204:
      if (lookahead == 'i') ADVANCE(265);
      END_STATE();
    case 205:
      if (lookahead == 'i') ADVANCE(443);
      END_STATE();
    case 206:
      if (lookahead == 'i') ADVANCE(264);
      END_STATE();
    case 207:
      if (lookahead == 'i') ADVANCE(286);
      END_STATE();
    case 208:
      if (lookahead == 'i') ADVANCE(325);
      END_STATE();
    case 209:
      if (lookahead == 'i') ADVANCE(255);
      END_STATE();
    case 210:
      if (lookahead == 'i') ADVANCE(156);
      if (lookahead == 'y') ADVANCE(52);
      END_STATE();
    case 211:
      if (lookahead == 'i') ADVANCE(334);
      END_STATE();
    case 212:
      if (lookahead == 'i') ADVANCE(282);
      END_STATE();
    case 213:
      if (lookahead == 'i') ADVANCE(284);
      END_STATE();
    case 214:
      if (lookahead == 'i') ADVANCE(328);
      END_STATE();
    case 215:
      if (lookahead == 'i') ADVANCE(329);
      END_STATE();
    case 216:
      if (lookahead == 'i') ADVANCE(330);
      END_STATE();
    case 217:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 218:
      if (lookahead == 'i') ADVANCE(287);
      END_STATE();
    case 219:
      if (lookahead == 'i') ADVANCE(333);
      END_STATE();
    case 220:
      if (lookahead == 'i') ADVANCE(336);
      END_STATE();
    case 221:
      if (lookahead == 'i') ADVANCE(337);
      END_STATE();
    case 222:
      if (lookahead == 'i') ADVANCE(338);
      END_STATE();
    case 223:
      if (lookahead == 'i') ADVANCE(339);
      END_STATE();
    case 224:
      if (lookahead == 'i') ADVANCE(340);
      END_STATE();
    case 225:
      if (lookahead == 'i') ADVANCE(341);
      END_STATE();
    case 226:
      if (lookahead == 'i') ADVANCE(342);
      END_STATE();
    case 227:
      if (lookahead == 'i') ADVANCE(343);
      END_STATE();
    case 228:
      if (lookahead == 'i') ADVANCE(344);
      END_STATE();
    case 229:
      if (lookahead == 'i') ADVANCE(345);
      END_STATE();
    case 230:
      if (lookahead == 'i') ADVANCE(268);
      END_STATE();
    case 231:
      if (lookahead == 'i') ADVANCE(269);
      END_STATE();
    case 232:
      if (lookahead == 'i') ADVANCE(260);
      END_STATE();
    case 233:
      if (lookahead == 'i') ADVANCE(349);
      END_STATE();
    case 234:
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 235:
      if (lookahead == 'i') ADVANCE(465);
      END_STATE();
    case 236:
      if (lookahead == 'i') ADVANCE(272);
      END_STATE();
    case 237:
      if (lookahead == 'i') ADVANCE(192);
      if (lookahead == 'y') ADVANCE(53);
      END_STATE();
    case 238:
      if (lookahead == 'k') ADVANCE(66);
      END_STATE();
    case 239:
      if (lookahead == 'k') ADVANCE(212);
      END_STATE();
    case 240:
      if (lookahead == 'k') ADVANCE(69);
      END_STATE();
    case 241:
      if (lookahead == 'l') ADVANCE(722);
      END_STATE();
    case 242:
      if (lookahead == 'l') ADVANCE(506);
      END_STATE();
    case 243:
      if (lookahead == 'l') ADVANCE(587);
      END_STATE();
    case 244:
      if (lookahead == 'l') ADVANCE(589);
      END_STATE();
    case 245:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 246:
      if (lookahead == 'l') ADVANCE(242);
      END_STATE();
    case 247:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 248:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 249:
      if (lookahead == 'l') ADVANCE(247);
      END_STATE();
    case 250:
      if (lookahead == 'l') ADVANCE(318);
      END_STATE();
    case 251:
      if (lookahead == 'l') ADVANCE(244);
      END_STATE();
    case 252:
      if (lookahead == 'l') ADVANCE(439);
      END_STATE();
    case 253:
      if (lookahead == 'l') ADVANCE(179);
      END_STATE();
    case 254:
      if (lookahead == 'l') ADVANCE(153);
      END_STATE();
    case 255:
      if (lookahead == 'l') ADVANCE(476);
      END_STATE();
    case 256:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 257:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 258:
      if (lookahead == 'l') ADVANCE(414);
      if (lookahead == 'u') ADVANCE(252);
      END_STATE();
    case 259:
      if (lookahead == 'l') ADVANCE(472);
      END_STATE();
    case 260:
      if (lookahead == 'l') ADVANCE(477);
      END_STATE();
    case 261:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 262:
      if (lookahead == 'm') ADVANCE(593);
      END_STATE();
    case 263:
      if (lookahead == 'm') ADVANCE(241);
      END_STATE();
    case 264:
      if (lookahead == 'm') ADVANCE(468);
      END_STATE();
    case 265:
      if (lookahead == 'm') ADVANCE(159);
      END_STATE();
    case 266:
      if (lookahead == 'm') ADVANCE(358);
      END_STATE();
    case 267:
      if (lookahead == 'm') ADVANCE(148);
      END_STATE();
    case 268:
      if (lookahead == 'm') ADVANCE(360);
      END_STATE();
    case 269:
      if (lookahead == 'm') ADVANCE(176);
      END_STATE();
    case 270:
      if (lookahead == 'm') ADVANCE(55);
      END_STATE();
    case 271:
      if (lookahead == 'm') ADVANCE(57);
      END_STATE();
    case 272:
      if (lookahead == 'm') ADVANCE(487);
      END_STATE();
    case 273:
      if (lookahead == 'n') ADVANCE(128);
      if (lookahead == 'r') ADVANCE(377);
      END_STATE();
    case 274:
      if (lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 275:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 276:
      if (lookahead == 'n') ADVANCE(724);
      END_STATE();
    case 277:
      if (lookahead == 'n') ADVANCE(583);
      END_STATE();
    case 278:
      if (lookahead == 'n') ADVANCE(205);
      END_STATE();
    case 279:
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 280:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 281:
      if (lookahead == 'n') ADVANCE(122);
      if (lookahead == 'x') ADVANCE(363);
      END_STATE();
    case 282:
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 283:
      if (lookahead == 'n') ADVANCE(426);
      END_STATE();
    case 284:
      if (lookahead == 'n') ADVANCE(197);
      END_STATE();
    case 285:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 286:
      if (lookahead == 'n') ADVANCE(434);
      END_STATE();
    case 287:
      if (lookahead == 'n') ADVANCE(450);
      END_STATE();
    case 288:
      if (lookahead == 'n') ADVANCE(405);
      END_STATE();
    case 289:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 290:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 291:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 292:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 293:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 294:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 295:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 296:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 297:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 298:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 299:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 300:
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 301:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 302:
      if (lookahead == 'n') ADVANCE(422);
      END_STATE();
    case 303:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 304:
      if (lookahead == 'n') ADVANCE(423);
      END_STATE();
    case 305:
      if (lookahead == 'n') ADVANCE(424);
      END_STATE();
    case 306:
      if (lookahead == 'n') ADVANCE(425);
      END_STATE();
    case 307:
      if (lookahead == 'n') ADVANCE(138);
      if (lookahead == 'r') ADVANCE(399);
      END_STATE();
    case 308:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 309:
      if (lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 310:
      if (lookahead == 'n') ADVANCE(235);
      END_STATE();
    case 311:
      if (lookahead == 'o') ADVANCE(195);
      END_STATE();
    case 312:
      if (lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 313:
      if (lookahead == 'o') ADVANCE(274);
      END_STATE();
    case 314:
      if (lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 315:
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 316:
      if (lookahead == 'o') ADVANCE(200);
      END_STATE();
    case 317:
      if (lookahead == 'o') ADVANCE(469);
      END_STATE();
    case 318:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 319:
      if (lookahead == 'o') ADVANCE(283);
      END_STATE();
    case 320:
      if (lookahead == 'o') ADVANCE(372);
      END_STATE();
    case 321:
      if (lookahead == 'o') ADVANCE(207);
      END_STATE();
    case 322:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 323:
      if (lookahead == 'o') ADVANCE(262);
      END_STATE();
    case 324:
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 325:
      if (lookahead == 'o') ADVANCE(285);
      END_STATE();
    case 326:
      if (lookahead == 'o') ADVANCE(373);
      END_STATE();
    case 327:
      if (lookahead == 'o') ADVANCE(385);
      END_STATE();
    case 328:
      if (lookahead == 'o') ADVANCE(288);
      END_STATE();
    case 329:
      if (lookahead == 'o') ADVANCE(276);
      END_STATE();
    case 330:
      if (lookahead == 'o') ADVANCE(277);
      END_STATE();
    case 331:
      if (lookahead == 'o') ADVANCE(470);
      END_STATE();
    case 332:
      if (lookahead == 'o') ADVANCE(383);
      END_STATE();
    case 333:
      if (lookahead == 'o') ADVANCE(289);
      END_STATE();
    case 334:
      if (lookahead == 'o') ADVANCE(301);
      END_STATE();
    case 335:
      if (lookahead == 'o') ADVANCE(386);
      END_STATE();
    case 336:
      if (lookahead == 'o') ADVANCE(290);
      END_STATE();
    case 337:
      if (lookahead == 'o') ADVANCE(291);
      END_STATE();
    case 338:
      if (lookahead == 'o') ADVANCE(292);
      END_STATE();
    case 339:
      if (lookahead == 'o') ADVANCE(293);
      END_STATE();
    case 340:
      if (lookahead == 'o') ADVANCE(294);
      END_STATE();
    case 341:
      if (lookahead == 'o') ADVANCE(295);
      END_STATE();
    case 342:
      if (lookahead == 'o') ADVANCE(296);
      END_STATE();
    case 343:
      if (lookahead == 'o') ADVANCE(297);
      END_STATE();
    case 344:
      if (lookahead == 'o') ADVANCE(298);
      END_STATE();
    case 345:
      if (lookahead == 'o') ADVANCE(299);
      END_STATE();
    case 346:
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 347:
      if (lookahead == 'o') ADVANCE(218);
      END_STATE();
    case 348:
      if (lookahead == 'o') ADVANCE(392);
      END_STATE();
    case 349:
      if (lookahead == 'o') ADVANCE(303);
      END_STATE();
    case 350:
      if (lookahead == 'o') ADVANCE(400);
      END_STATE();
    case 351:
      if (lookahead == 'o') ADVANCE(402);
      END_STATE();
    case 352:
      if (lookahead == 'p') ADVANCE(510);
      END_STATE();
    case 353:
      if (lookahead == 'p') ADVANCE(321);
      END_STATE();
    case 354:
      if (lookahead == 'p') ADVANCE(16);
      END_STATE();
    case 355:
      if (lookahead == 'p') ADVANCE(313);
      END_STATE();
    case 356:
      if (lookahead == 'p') ADVANCE(157);
      END_STATE();
    case 357:
      if (lookahead == 'p') ADVANCE(319);
      END_STATE();
    case 358:
      if (lookahead == 'p') ADVANCE(256);
      END_STATE();
    case 359:
      if (lookahead == 'p') ADVANCE(164);
      END_STATE();
    case 360:
      if (lookahead == 'p') ADVANCE(254);
      END_STATE();
    case 361:
      if (lookahead == 'p') ADVANCE(455);
      END_STATE();
    case 362:
      if (lookahead == 'p') ADVANCE(347);
      END_STATE();
    case 363:
      if (lookahead == 'p') ADVANCE(394);
      END_STATE();
    case 364:
      if (lookahead == 'p') ADVANCE(184);
      END_STATE();
    case 365:
      if (lookahead == 'p') ADVANCE(185);
      END_STATE();
    case 366:
      if (lookahead == 'p') ADVANCE(186);
      END_STATE();
    case 367:
      if (lookahead == 'p') ADVANCE(190);
      END_STATE();
    case 368:
      if (lookahead == 'q') ADVANCE(467);
      END_STATE();
    case 369:
      if (lookahead == 'q') ADVANCE(473);
      END_STATE();
    case 370:
      if (lookahead == 'r') ADVANCE(238);
      if (lookahead == 'x') ADVANCE(206);
      END_STATE();
    case 371:
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 372:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 373:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 374:
      if (lookahead == 'r') ADVANCE(567);
      END_STATE();
    case 375:
      if (lookahead == 'r') ADVANCE(312);
      END_STATE();
    case 376:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 377:
      if (lookahead == 'r') ADVANCE(320);
      END_STATE();
    case 378:
      if (lookahead == 'r') ADVANCE(441);
      END_STATE();
    case 379:
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 380:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 381:
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 382:
      if (lookahead == 'r') ADVANCE(406);
      END_STATE();
    case 383:
      if (lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 384:
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 385:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 386:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 387:
      if (lookahead == 'r') ADVANCE(471);
      END_STATE();
    case 388:
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 389:
      if (lookahead == 'r') ADVANCE(316);
      END_STATE();
    case 390:
      if (lookahead == 'r') ADVANCE(419);
      END_STATE();
    case 391:
      if (lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 392:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 393:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 394:
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 395:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 396:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 397:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 398:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 399:
      if (lookahead == 'r') ADVANCE(348);
      END_STATE();
    case 400:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 401:
      if (lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 402:
      if (lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 403:
      if (lookahead == 'r') ADVANCE(240);
      if (lookahead == 'x') ADVANCE(236);
      END_STATE();
    case 404:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 405:
      if (lookahead == 's') ADVANCE(542);
      END_STATE();
    case 406:
      if (lookahead == 's') ADVANCE(595);
      END_STATE();
    case 407:
      if (lookahead == 's') ADVANCE(356);
      END_STATE();
    case 408:
      if (lookahead == 's') ADVANCE(417);
      END_STATE();
    case 409:
      if (lookahead == 's') ADVANCE(119);
      END_STATE();
    case 410:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 411:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 412:
      if (lookahead == 's') ADVANCE(438);
      END_STATE();
    case 413:
      if (lookahead == 's') ADVANCE(452);
      END_STATE();
    case 414:
      if (lookahead == 's') ADVANCE(150);
      END_STATE();
    case 415:
      if (lookahead == 's') ADVANCE(355);
      if (lookahead == 't') ADVANCE(371);
      END_STATE();
    case 416:
      if (lookahead == 's') ADVANCE(359);
      END_STATE();
    case 417:
      if (lookahead == 's') ADVANCE(211);
      END_STATE();
    case 418:
      if (lookahead == 's') ADVANCE(357);
      if (lookahead == 't') ADVANCE(391);
      END_STATE();
    case 419:
      if (lookahead == 's') ADVANCE(215);
      END_STATE();
    case 420:
      if (lookahead == 's') ADVANCE(216);
      END_STATE();
    case 421:
      if (lookahead == 's') ADVANCE(420);
      END_STATE();
    case 422:
      if (lookahead == 's') ADVANCE(226);
      END_STATE();
    case 423:
      if (lookahead == 's') ADVANCE(227);
      END_STATE();
    case 424:
      if (lookahead == 's') ADVANCE(228);
      END_STATE();
    case 425:
      if (lookahead == 's') ADVANCE(229);
      END_STATE();
    case 426:
      if (lookahead == 's') ADVANCE(183);
      END_STATE();
    case 427:
      if (lookahead == 's') ADVANCE(364);
      END_STATE();
    case 428:
      if (lookahead == 's') ADVANCE(233);
      END_STATE();
    case 429:
      if (lookahead == 's') ADVANCE(365);
      END_STATE();
    case 430:
      if (lookahead == 's') ADVANCE(366);
      END_STATE();
    case 431:
      if (lookahead == 's') ADVANCE(428);
      END_STATE();
    case 432:
      if (lookahead == 's') ADVANCE(367);
      END_STATE();
    case 433:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 434:
      if (lookahead == 't') ADVANCE(508);
      END_STATE();
    case 435:
      if (lookahead == 't') ADVANCE(532);
      END_STATE();
    case 436:
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 437:
      if (lookahead == 't') ADVANCE(536);
      END_STATE();
    case 438:
      if (lookahead == 't') ADVANCE(534);
      END_STATE();
    case 439:
      if (lookahead == 't') ADVANCE(571);
      END_STATE();
    case 440:
      if (lookahead == 't') ADVANCE(442);
      END_STATE();
    case 441:
      if (lookahead == 't') ADVANCE(492);
      END_STATE();
    case 442:
      if (lookahead == 't') ADVANCE(352);
      END_STATE();
    case 443:
      if (lookahead == 't') ADVANCE(217);
      END_STATE();
    case 444:
      if (lookahead == 't') ADVANCE(208);
      END_STATE();
    case 445:
      if (lookahead == 't') ADVANCE(354);
      END_STATE();
    case 446:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 447:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 448:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 449:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 450:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 451:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 452:
      if (lookahead == 't') ADVANCE(323);
      END_STATE();
    case 453:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 454:
      if (lookahead == 't') ADVANCE(445);
      END_STATE();
    case 455:
      if (lookahead == 't') ADVANCE(214);
      END_STATE();
    case 456:
      if (lookahead == 't') ADVANCE(327);
      END_STATE();
    case 457:
      if (lookahead == 't') ADVANCE(335);
      END_STATE();
    case 458:
      if (lookahead == 't') ADVANCE(219);
      END_STATE();
    case 459:
      if (lookahead == 't') ADVANCE(220);
      END_STATE();
    case 460:
      if (lookahead == 't') ADVANCE(221);
      END_STATE();
    case 461:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 462:
      if (lookahead == 't') ADVANCE(223);
      END_STATE();
    case 463:
      if (lookahead == 't') ADVANCE(224);
      END_STATE();
    case 464:
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 465:
      if (lookahead == 't') ADVANCE(234);
      END_STATE();
    case 466:
      if (lookahead == 'u') ADVANCE(376);
      END_STATE();
    case 467:
      if (lookahead == 'u') ADVANCE(155);
      END_STATE();
    case 468:
      if (lookahead == 'u') ADVANCE(270);
      END_STATE();
    case 469:
      if (lookahead == 'u') ADVANCE(446);
      END_STATE();
    case 470:
      if (lookahead == 'u') ADVANCE(448);
      END_STATE();
    case 471:
      if (lookahead == 'u') ADVANCE(149);
      END_STATE();
    case 472:
      if (lookahead == 'u') ADVANCE(151);
      END_STATE();
    case 473:
      if (lookahead == 'u') ADVANCE(175);
      END_STATE();
    case 474:
      if (lookahead == 'u') ADVANCE(413);
      END_STATE();
    case 475:
      if (lookahead == 'u') ADVANCE(251);
      END_STATE();
    case 476:
      if (lookahead == 'u') ADVANCE(384);
      END_STATE();
    case 477:
      if (lookahead == 'u') ADVANCE(388);
      END_STATE();
    case 478:
      if (lookahead == 'u') ADVANCE(416);
      END_STATE();
    case 479:
      if (lookahead == 'u') ADVANCE(393);
      END_STATE();
    case 480:
      if (lookahead == 'u') ADVANCE(395);
      END_STATE();
    case 481:
      if (lookahead == 'u') ADVANCE(396);
      END_STATE();
    case 482:
      if (lookahead == 'u') ADVANCE(397);
      END_STATE();
    case 483:
      if (lookahead == 'u') ADVANCE(398);
      END_STATE();
    case 484:
      if (lookahead == 'u') ADVANCE(427);
      END_STATE();
    case 485:
      if (lookahead == 'u') ADVANCE(429);
      END_STATE();
    case 486:
      if (lookahead == 'u') ADVANCE(430);
      END_STATE();
    case 487:
      if (lookahead == 'u') ADVANCE(271);
      END_STATE();
    case 488:
      if (lookahead == 'v') ADVANCE(171);
      END_STATE();
    case 489:
      if (lookahead == 'v') ADVANCE(170);
      END_STATE();
    case 490:
      if (lookahead == 'x') ADVANCE(263);
      END_STATE();
    case 491:
      if (lookahead == 'y') ADVANCE(574);
      END_STATE();
    case 492:
      if (lookahead == 'y') ADVANCE(505);
      END_STATE();
    case 493:
      if (lookahead == 'y') ADVANCE(25);
      END_STATE();
    case 494:
      if (lookahead == 'y') ADVANCE(27);
      END_STATE();
    case 495:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(495)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 496:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_LTsequence);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_LT_SLASHsequence_GT);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_LTrespond_SLASH_GT);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_LTlog);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_LT_SLASHlog_GT);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_LTproperty);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_LTcall);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_LT_SLASHcall_GT);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_LTendpoint);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_LT_SLASHendpoint_GT);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_LThttp);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_LT_SLASHhttp_GT);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_uri_DASHtemplate);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '1') ADVANCE(7);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_method);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_method);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_GET);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_GET);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_POST);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_POST);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_PUT);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_DELETE);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_PATCH);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_get);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_post);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_post);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_put);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_put);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_delete);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_head);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_head);
      if (lookahead == 'e') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_options);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_options);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_patch);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_patch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_LTtimeout_GT);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_LT_SLASHtimeout_GT);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_LTmarkForSuspension_GT);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmarkForSuspension_GT);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_LTretriesBeforeSuspension_GT);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_LT_SLASHretriesBeforeSuspension_GT);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_LTretryDelay_GT);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_LT_SLASHretryDelay_GT);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_LTsuspendOnFailure_GT);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_LT_SLASHsuspendOnFailure_GT);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_LTinitialDuration_GT);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_LT_SLASHinitialDuration_GT);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_LTprogressionFactor_GT);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_LT_SLASHprogressionFactor_GT);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_LTmaximumDuration_GT);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmaximumDuration_GT);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_LTerrorCodes_GT);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_LT_SLASHerrorCodes_GT);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_LTduration_GT);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_LT_SLASHduration_GT);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_LTresponseAction_GT);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_never);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_never);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_discard);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_discard);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_fault);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_fault);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_LT_SLASHresponseAction_GT);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_LTkey);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_blocking);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_blocking);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_value);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_expression);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_expression);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_level);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_level);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_full);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_full);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_simple);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_simple);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_custom);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_custom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_headers);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_headers);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(617);
      if (lookahead == 'O') ADVANCE(614);
      if (lookahead == 'U') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(665);
      if (lookahead == 'u') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(673);
      if (lookahead == 'e') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(669);
      if (lookahead == 'e') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(713);
      if (lookahead == 'o') ADVANCE(701);
      if (lookahead == 'u') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(670);
      if (lookahead == 'i') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(702);
      if (lookahead == 'u') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(628);
      if (lookahead == 'x') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(721);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_LT_QMARKxml);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_version);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_version_number);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_encoding);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_encoding);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      END_STATE();
    case 729:
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
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 2},
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
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 495},
  [109] = {.lex_state = 495},
  [110] = {.lex_state = 495},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 495},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 2},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 3},
  [159] = {.lex_state = 495},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 3},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
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
    [sym_source_file] = STATE(103),
    [sym__definition] = STATE(46),
    [sym_sequence_definition] = STATE(46),
    [sym_xml_declaration] = STATE(47),
    [aux_sym_source_file_repeat1] = STATE(46),
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
  [17] = 6,
    ACTIONS(11), 1,
      anon_sym_LT_SLASHsuspendOnFailure_GT,
    ACTIONS(13), 1,
      anon_sym_LTinitialDuration_GT,
    ACTIONS(16), 1,
      anon_sym_LTprogressionFactor_GT,
    ACTIONS(19), 1,
      anon_sym_LTmaximumDuration_GT,
    ACTIONS(22), 1,
      anon_sym_LTerrorCodes_GT,
    STATE(3), 6,
      sym__suspend_on_failure_property,
      sym_initial_duration,
      sym_progression_factor,
      sym_maximum_duration,
      sym_error_codes,
      aux_sym_suspend_on_failure_repeat1,
  [41] = 7,
    ACTIONS(25), 1,
      anon_sym_LT_SLASHsequence_GT,
    ACTIONS(27), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(29), 1,
      anon_sym_LTlog,
    ACTIONS(31), 1,
      anon_sym_LTproperty,
    ACTIONS(33), 1,
      anon_sym_LTcall,
    STATE(6), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(30), 4,
      sym_respond,
      sym_log,
      sym_property,
      sym_call,
  [67] = 6,
    ACTIONS(35), 1,
      anon_sym_LT_SLASHsuspendOnFailure_GT,
    ACTIONS(37), 1,
      anon_sym_LTinitialDuration_GT,
    ACTIONS(39), 1,
      anon_sym_LTprogressionFactor_GT,
    ACTIONS(41), 1,
      anon_sym_LTmaximumDuration_GT,
    ACTIONS(43), 1,
      anon_sym_LTerrorCodes_GT,
    STATE(3), 6,
      sym__suspend_on_failure_property,
      sym_initial_duration,
      sym_progression_factor,
      sym_maximum_duration,
      sym_error_codes,
      aux_sym_suspend_on_failure_repeat1,
  [91] = 7,
    ACTIONS(45), 1,
      anon_sym_LT_SLASHsequence_GT,
    ACTIONS(47), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(50), 1,
      anon_sym_LTlog,
    ACTIONS(53), 1,
      anon_sym_LTproperty,
    ACTIONS(56), 1,
      anon_sym_LTcall,
    STATE(6), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(30), 4,
      sym_respond,
      sym_log,
      sym_property,
      sym_call,
  [117] = 6,
    ACTIONS(37), 1,
      anon_sym_LTinitialDuration_GT,
    ACTIONS(39), 1,
      anon_sym_LTprogressionFactor_GT,
    ACTIONS(41), 1,
      anon_sym_LTmaximumDuration_GT,
    ACTIONS(43), 1,
      anon_sym_LTerrorCodes_GT,
    ACTIONS(59), 1,
      anon_sym_LT_SLASHsuspendOnFailure_GT,
    STATE(5), 6,
      sym__suspend_on_failure_property,
      sym_initial_duration,
      sym_progression_factor,
      sym_maximum_duration,
      sym_error_codes,
      aux_sym_suspend_on_failure_repeat1,
  [141] = 7,
    ACTIONS(27), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(29), 1,
      anon_sym_LTlog,
    ACTIONS(31), 1,
      anon_sym_LTproperty,
    ACTIONS(33), 1,
      anon_sym_LTcall,
    ACTIONS(61), 1,
      anon_sym_LT_SLASHsequence_GT,
    STATE(4), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(30), 4,
      sym_respond,
      sym_log,
      sym_property,
      sym_call,
  [167] = 6,
    ACTIONS(63), 1,
      anon_sym_LT_SLASHhttp_GT,
    ACTIONS(65), 1,
      anon_sym_LTtimeout_GT,
    ACTIONS(67), 1,
      anon_sym_LTmarkForSuspension_GT,
    ACTIONS(69), 1,
      anon_sym_LTsuspendOnFailure_GT,
    STATE(12), 2,
      sym_endpoint_error_property,
      aux_sym_http_endpoint_repeat2,
    STATE(63), 3,
      sym_timeout,
      sym_mark_for_suspending,
      sym_suspend_on_failure,
  [189] = 6,
    ACTIONS(65), 1,
      anon_sym_LTtimeout_GT,
    ACTIONS(67), 1,
      anon_sym_LTmarkForSuspension_GT,
    ACTIONS(69), 1,
      anon_sym_LTsuspendOnFailure_GT,
    ACTIONS(71), 1,
      anon_sym_LT_SLASHhttp_GT,
    STATE(13), 2,
      sym_endpoint_error_property,
      aux_sym_http_endpoint_repeat2,
    STATE(63), 3,
      sym_timeout,
      sym_mark_for_suspending,
      sym_suspend_on_failure,
  [211] = 6,
    ACTIONS(65), 1,
      anon_sym_LTtimeout_GT,
    ACTIONS(67), 1,
      anon_sym_LTmarkForSuspension_GT,
    ACTIONS(69), 1,
      anon_sym_LTsuspendOnFailure_GT,
    ACTIONS(73), 1,
      anon_sym_LT_SLASHhttp_GT,
    STATE(10), 2,
      sym_endpoint_error_property,
      aux_sym_http_endpoint_repeat2,
    STATE(63), 3,
      sym_timeout,
      sym_mark_for_suspending,
      sym_suspend_on_failure,
  [233] = 6,
    ACTIONS(65), 1,
      anon_sym_LTtimeout_GT,
    ACTIONS(67), 1,
      anon_sym_LTmarkForSuspension_GT,
    ACTIONS(69), 1,
      anon_sym_LTsuspendOnFailure_GT,
    ACTIONS(73), 1,
      anon_sym_LT_SLASHhttp_GT,
    STATE(13), 2,
      sym_endpoint_error_property,
      aux_sym_http_endpoint_repeat2,
    STATE(63), 3,
      sym_timeout,
      sym_mark_for_suspending,
      sym_suspend_on_failure,
  [255] = 6,
    ACTIONS(75), 1,
      anon_sym_LT_SLASHhttp_GT,
    ACTIONS(77), 1,
      anon_sym_LTtimeout_GT,
    ACTIONS(80), 1,
      anon_sym_LTmarkForSuspension_GT,
    ACTIONS(83), 1,
      anon_sym_LTsuspendOnFailure_GT,
    STATE(13), 2,
      sym_endpoint_error_property,
      aux_sym_http_endpoint_repeat2,
    STATE(63), 3,
      sym_timeout,
      sym_mark_for_suspending,
      sym_suspend_on_failure,
  [277] = 5,
    ACTIONS(43), 1,
      anon_sym_LTerrorCodes_GT,
    ACTIONS(86), 1,
      anon_sym_LT_SLASHmarkForSuspension_GT,
    ACTIONS(88), 1,
      anon_sym_LTretriesBeforeSuspension_GT,
    ACTIONS(90), 1,
      anon_sym_LTretryDelay_GT,
    STATE(16), 5,
      sym__mark_for_suspending_property,
      sym_retries_before_suspending,
      sym_retry_delay,
      sym_error_codes,
      aux_sym_mark_for_suspending_repeat1,
  [297] = 5,
    ACTIONS(43), 1,
      anon_sym_LTerrorCodes_GT,
    ACTIONS(88), 1,
      anon_sym_LTretriesBeforeSuspension_GT,
    ACTIONS(90), 1,
      anon_sym_LTretryDelay_GT,
    ACTIONS(92), 1,
      anon_sym_LT_SLASHmarkForSuspension_GT,
    STATE(14), 5,
      sym__mark_for_suspending_property,
      sym_retries_before_suspending,
      sym_retry_delay,
      sym_error_codes,
      aux_sym_mark_for_suspending_repeat1,
  [317] = 5,
    ACTIONS(94), 1,
      anon_sym_LT_SLASHmarkForSuspension_GT,
    ACTIONS(96), 1,
      anon_sym_LTretriesBeforeSuspension_GT,
    ACTIONS(99), 1,
      anon_sym_LTretryDelay_GT,
    ACTIONS(102), 1,
      anon_sym_LTerrorCodes_GT,
    STATE(16), 5,
      sym__mark_for_suspending_property,
      sym_retries_before_suspending,
      sym_retry_delay,
      sym_error_codes,
      aux_sym_mark_for_suspending_repeat1,
  [337] = 1,
    ACTIONS(105), 8,
      anon_sym_LT_SLASHmarkForSuspension_GT,
      anon_sym_LTretriesBeforeSuspension_GT,
      anon_sym_LTretryDelay_GT,
      anon_sym_LT_SLASHsuspendOnFailure_GT,
      anon_sym_LTinitialDuration_GT,
      anon_sym_LTprogressionFactor_GT,
      anon_sym_LTmaximumDuration_GT,
      anon_sym_LTerrorCodes_GT,
  [348] = 1,
    ACTIONS(107), 8,
      anon_sym_LT_SLASHmarkForSuspension_GT,
      anon_sym_LTretriesBeforeSuspension_GT,
      anon_sym_LTretryDelay_GT,
      anon_sym_LT_SLASHsuspendOnFailure_GT,
      anon_sym_LTinitialDuration_GT,
      anon_sym_LTprogressionFactor_GT,
      anon_sym_LTmaximumDuration_GT,
      anon_sym_LTerrorCodes_GT,
  [359] = 4,
    ACTIONS(109), 1,
      anon_sym_LT_SLASHtimeout_GT,
    ACTIONS(111), 1,
      anon_sym_LTduration_GT,
    ACTIONS(113), 1,
      anon_sym_LTresponseAction_GT,
    STATE(20), 4,
      sym__timeout_property,
      sym_duration,
      sym_response_action,
      aux_sym_timeout_repeat1,
  [375] = 4,
    ACTIONS(111), 1,
      anon_sym_LTduration_GT,
    ACTIONS(113), 1,
      anon_sym_LTresponseAction_GT,
    ACTIONS(115), 1,
      anon_sym_LT_SLASHtimeout_GT,
    STATE(24), 4,
      sym__timeout_property,
      sym_duration,
      sym_response_action,
      aux_sym_timeout_repeat1,
  [391] = 4,
    ACTIONS(117), 1,
      anon_sym_GT,
    ACTIONS(119), 1,
      anon_sym_uri_DASHtemplate,
    ACTIONS(121), 1,
      anon_sym_method,
    STATE(22), 4,
      sym__endpoint_attribute,
      sym_uri_template,
      sym_method,
      aux_sym_http_endpoint_repeat1,
  [407] = 4,
    ACTIONS(119), 1,
      anon_sym_uri_DASHtemplate,
    ACTIONS(121), 1,
      anon_sym_method,
    ACTIONS(123), 1,
      anon_sym_GT,
    STATE(23), 4,
      sym__endpoint_attribute,
      sym_uri_template,
      sym_method,
      aux_sym_http_endpoint_repeat1,
  [423] = 4,
    ACTIONS(125), 1,
      anon_sym_GT,
    ACTIONS(127), 1,
      anon_sym_uri_DASHtemplate,
    ACTIONS(130), 1,
      anon_sym_method,
    STATE(23), 4,
      sym__endpoint_attribute,
      sym_uri_template,
      sym_method,
      aux_sym_http_endpoint_repeat1,
  [439] = 4,
    ACTIONS(133), 1,
      anon_sym_LT_SLASHtimeout_GT,
    ACTIONS(135), 1,
      anon_sym_LTduration_GT,
    ACTIONS(138), 1,
      anon_sym_LTresponseAction_GT,
    STATE(24), 4,
      sym__timeout_property,
      sym_duration,
      sym_response_action,
      aux_sym_timeout_repeat1,
  [455] = 1,
    ACTIONS(141), 6,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LT_SLASHlog_GT,
      anon_sym_LTproperty,
      anon_sym_LTcall,
  [464] = 1,
    ACTIONS(143), 6,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LT_SLASHlog_GT,
      anon_sym_LTproperty,
      anon_sym_LTcall,
  [473] = 3,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    ACTIONS(147), 1,
      anon_sym_LTsequence,
    STATE(27), 3,
      sym__definition,
      sym_sequence_definition,
      aux_sym_source_file_repeat1,
  [485] = 1,
    ACTIONS(150), 5,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
  [493] = 1,
    ACTIONS(152), 5,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
  [501] = 1,
    ACTIONS(154), 5,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
  [509] = 5,
    ACTIONS(156), 1,
      anon_sym_GT,
    ACTIONS(158), 1,
      anon_sym_blocking,
    ACTIONS(160), 1,
      anon_sym_name,
    STATE(70), 1,
      sym_name,
    STATE(151), 1,
      sym_blocking,
  [525] = 1,
    ACTIONS(162), 5,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
  [533] = 1,
    ACTIONS(164), 5,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
  [541] = 1,
    ACTIONS(166), 5,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
  [549] = 1,
    ACTIONS(168), 5,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
  [557] = 1,
    ACTIONS(170), 5,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
  [565] = 1,
    ACTIONS(172), 5,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
  [573] = 1,
    ACTIONS(174), 5,
      anon_sym_LT_SLASHsuspendOnFailure_GT,
      anon_sym_LTinitialDuration_GT,
      anon_sym_LTprogressionFactor_GT,
      anon_sym_LTmaximumDuration_GT,
      anon_sym_LTerrorCodes_GT,
  [581] = 3,
    ACTIONS(5), 1,
      anon_sym_LTsequence,
    ACTIONS(176), 1,
      ts_builtin_sym_end,
    STATE(27), 3,
      sym__definition,
      sym_sequence_definition,
      aux_sym_source_file_repeat1,
  [593] = 1,
    ACTIONS(178), 5,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
  [601] = 1,
    ACTIONS(180), 5,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
  [609] = 1,
    ACTIONS(182), 5,
      anon_sym_LT_SLASHsuspendOnFailure_GT,
      anon_sym_LTinitialDuration_GT,
      anon_sym_LTprogressionFactor_GT,
      anon_sym_LTmaximumDuration_GT,
      anon_sym_LTerrorCodes_GT,
  [617] = 1,
    ACTIONS(184), 5,
      anon_sym_LT_SLASHsuspendOnFailure_GT,
      anon_sym_LTinitialDuration_GT,
      anon_sym_LTprogressionFactor_GT,
      anon_sym_LTmaximumDuration_GT,
      anon_sym_LTerrorCodes_GT,
  [625] = 1,
    ACTIONS(186), 5,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
  [633] = 1,
    ACTIONS(188), 5,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
  [641] = 3,
    ACTIONS(5), 1,
      anon_sym_LTsequence,
    ACTIONS(190), 1,
      ts_builtin_sym_end,
    STATE(27), 3,
      sym__definition,
      sym_sequence_definition,
      aux_sym_source_file_repeat1,
  [653] = 3,
    ACTIONS(5), 1,
      anon_sym_LTsequence,
    ACTIONS(190), 1,
      ts_builtin_sym_end,
    STATE(39), 3,
      sym__definition,
      sym_sequence_definition,
      aux_sym_source_file_repeat1,
  [665] = 1,
    ACTIONS(192), 4,
      anon_sym_LT_SLASHhttp_GT,
      anon_sym_LTtimeout_GT,
      anon_sym_LTmarkForSuspension_GT,
      anon_sym_LTsuspendOnFailure_GT,
  [672] = 4,
    ACTIONS(194), 1,
      anon_sym_value,
    ACTIONS(196), 1,
      anon_sym_expression,
    STATE(140), 1,
      sym_expression,
    STATE(141), 1,
      sym_value,
  [685] = 1,
    ACTIONS(198), 4,
      anon_sym_LT_SLASHhttp_GT,
      anon_sym_LTtimeout_GT,
      anon_sym_LTmarkForSuspension_GT,
      anon_sym_LTsuspendOnFailure_GT,
  [692] = 1,
    ACTIONS(200), 4,
      anon_sym_LT_SLASHmarkForSuspension_GT,
      anon_sym_LTretriesBeforeSuspension_GT,
      anon_sym_LTretryDelay_GT,
      anon_sym_LTerrorCodes_GT,
  [699] = 3,
    ACTIONS(31), 1,
      anon_sym_LTproperty,
    ACTIONS(202), 1,
      anon_sym_LT_SLASHlog_GT,
    STATE(59), 2,
      sym_property,
      aux_sym_log_repeat1,
  [710] = 1,
    ACTIONS(204), 4,
      anon_sym_LT_SLASHhttp_GT,
      anon_sym_LTtimeout_GT,
      anon_sym_LTmarkForSuspension_GT,
      anon_sym_LTsuspendOnFailure_GT,
  [717] = 4,
    ACTIONS(206), 1,
      anon_sym_LTendpoint,
    ACTIONS(208), 1,
      anon_sym_LTkey,
    STATE(118), 1,
      sym_endpoint_reference,
    STATE(120), 1,
      sym_endpoint,
  [730] = 4,
    ACTIONS(206), 1,
      anon_sym_LTendpoint,
    ACTIONS(208), 1,
      anon_sym_LTkey,
    STATE(114), 1,
      sym_endpoint_reference,
    STATE(115), 1,
      sym_endpoint,
  [743] = 1,
    ACTIONS(210), 4,
      anon_sym_LT_SLASHmarkForSuspension_GT,
      anon_sym_LTretriesBeforeSuspension_GT,
      anon_sym_LTretryDelay_GT,
      anon_sym_LTerrorCodes_GT,
  [750] = 1,
    ACTIONS(212), 4,
      anon_sym_full,
      anon_sym_simple,
      anon_sym_custom,
      anon_sym_headers,
  [757] = 1,
    ACTIONS(214), 4,
      anon_sym_GT,
      anon_sym_blocking,
      anon_sym_value,
      anon_sym_expression,
  [764] = 3,
    ACTIONS(31), 1,
      anon_sym_LTproperty,
    ACTIONS(216), 1,
      anon_sym_LT_SLASHlog_GT,
    STATE(60), 2,
      sym_property,
      aux_sym_log_repeat1,
  [775] = 3,
    ACTIONS(218), 1,
      anon_sym_LT_SLASHlog_GT,
    ACTIONS(220), 1,
      anon_sym_LTproperty,
    STATE(60), 2,
      sym_property,
      aux_sym_log_repeat1,
  [786] = 1,
    ACTIONS(223), 4,
      anon_sym_LT_SLASHhttp_GT,
      anon_sym_LTtimeout_GT,
      anon_sym_LTmarkForSuspension_GT,
      anon_sym_LTsuspendOnFailure_GT,
  [793] = 1,
    ACTIONS(225), 4,
      anon_sym_LT_SLASHhttp_GT,
      anon_sym_LTtimeout_GT,
      anon_sym_LTmarkForSuspension_GT,
      anon_sym_LTsuspendOnFailure_GT,
  [800] = 1,
    ACTIONS(227), 4,
      anon_sym_LT_SLASHhttp_GT,
      anon_sym_LTtimeout_GT,
      anon_sym_LTmarkForSuspension_GT,
      anon_sym_LTsuspendOnFailure_GT,
  [807] = 4,
    ACTIONS(206), 1,
      anon_sym_LTendpoint,
    ACTIONS(208), 1,
      anon_sym_LTkey,
    STATE(94), 1,
      sym_endpoint_reference,
    STATE(97), 1,
      sym_endpoint,
  [820] = 1,
    ACTIONS(229), 4,
      anon_sym_LT_SLASHhttp_GT,
      anon_sym_LTtimeout_GT,
      anon_sym_LTmarkForSuspension_GT,
      anon_sym_LTsuspendOnFailure_GT,
  [827] = 4,
    ACTIONS(206), 1,
      anon_sym_LTendpoint,
    ACTIONS(208), 1,
      anon_sym_LTkey,
    STATE(133), 1,
      sym_endpoint_reference,
    STATE(135), 1,
      sym_endpoint,
  [840] = 3,
    ACTIONS(231), 1,
      anon_sym_LT_SLASHerrorCodes_GT,
    ACTIONS(233), 1,
      sym_number,
    STATE(79), 1,
      aux_sym_error_codes_repeat1,
  [850] = 1,
    ACTIONS(235), 3,
      anon_sym_never,
      anon_sym_discard,
      anon_sym_fault,
  [856] = 3,
    ACTIONS(160), 1,
      anon_sym_name,
    ACTIONS(237), 1,
      anon_sym_GT,
    STATE(122), 1,
      sym_name,
  [866] = 3,
    ACTIONS(158), 1,
      anon_sym_blocking,
    ACTIONS(239), 1,
      anon_sym_GT,
    STATE(127), 1,
      sym_blocking,
  [876] = 1,
    ACTIONS(241), 3,
      anon_sym_LT_SLASHtimeout_GT,
      anon_sym_LTduration_GT,
      anon_sym_LTresponseAction_GT,
  [882] = 1,
    ACTIONS(243), 3,
      anon_sym_GT,
      anon_sym_uri_DASHtemplate,
      anon_sym_method,
  [888] = 2,
    ACTIONS(245), 1,
      anon_sym_LThttp,
    STATE(92), 2,
      sym__endpoint_type,
      sym_http_endpoint,
  [896] = 1,
    ACTIONS(247), 3,
      anon_sym_LT_SLASHtimeout_GT,
      anon_sym_LTduration_GT,
      anon_sym_LTresponseAction_GT,
  [902] = 1,
    ACTIONS(249), 3,
      anon_sym_GT,
      anon_sym_uri_DASHtemplate,
      anon_sym_method,
  [908] = 2,
    ACTIONS(245), 1,
      anon_sym_LThttp,
    STATE(99), 2,
      sym__endpoint_type,
      sym_http_endpoint,
  [916] = 3,
    ACTIONS(251), 1,
      anon_sym_LT_SLASHerrorCodes_GT,
    ACTIONS(253), 1,
      sym_number,
    STATE(67), 1,
      aux_sym_error_codes_repeat1,
  [926] = 3,
    ACTIONS(255), 1,
      anon_sym_QMARK_GT,
    ACTIONS(257), 1,
      anon_sym_encoding,
    STATE(160), 1,
      sym_encoding_declaration,
  [936] = 3,
    ACTIONS(259), 1,
      anon_sym_LT_SLASHerrorCodes_GT,
    ACTIONS(261), 1,
      sym_number,
    STATE(79), 1,
      aux_sym_error_codes_repeat1,
  [946] = 1,
    ACTIONS(264), 2,
      anon_sym_true,
      anon_sym_false,
  [951] = 1,
    ACTIONS(266), 2,
      ts_builtin_sym_end,
      anon_sym_LTsequence,
  [956] = 2,
    ACTIONS(268), 1,
      anon_sym_GT,
    ACTIONS(270), 1,
      anon_sym_SLASH_GT,
  [963] = 1,
    ACTIONS(272), 2,
      ts_builtin_sym_end,
      anon_sym_LTsequence,
  [968] = 1,
    ACTIONS(274), 2,
      anon_sym_QMARK_GT,
      anon_sym_encoding,
  [973] = 1,
    ACTIONS(276), 2,
      ts_builtin_sym_end,
      anon_sym_LTsequence,
  [978] = 2,
    ACTIONS(160), 1,
      anon_sym_name,
    STATE(49), 1,
      sym_name,
  [985] = 2,
    ACTIONS(278), 1,
      anon_sym_level,
    STATE(82), 1,
      sym_level,
  [992] = 2,
    ACTIONS(160), 1,
      anon_sym_name,
    STATE(165), 1,
      sym_name,
  [999] = 1,
    ACTIONS(280), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
  [1004] = 1,
    ACTIONS(282), 2,
      ts_builtin_sym_end,
      anon_sym_LTsequence,
  [1009] = 2,
    ACTIONS(284), 1,
      anon_sym_version,
    STATE(78), 1,
      sym_version_info,
  [1016] = 1,
    ACTIONS(286), 1,
      anon_sym_LT_SLASHendpoint_GT,
  [1020] = 1,
    ACTIONS(288), 1,
      anon_sym_DQUOTE,
  [1024] = 1,
    ACTIONS(290), 1,
      anon_sym_LT_SLASHcall_GT,
  [1028] = 1,
    ACTIONS(292), 1,
      anon_sym_EQ,
  [1032] = 1,
    ACTIONS(294), 1,
      anon_sym_EQ,
  [1036] = 1,
    ACTIONS(296), 1,
      anon_sym_LT_SLASHcall_GT,
  [1040] = 1,
    ACTIONS(298), 1,
      anon_sym_LT_SLASHcall_GT,
  [1044] = 1,
    ACTIONS(300), 1,
      anon_sym_LT_SLASHendpoint_GT,
  [1048] = 1,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
  [1052] = 1,
    ACTIONS(304), 1,
      anon_sym_GT,
  [1056] = 1,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
  [1060] = 1,
    ACTIONS(308), 1,
      ts_builtin_sym_end,
  [1064] = 1,
    ACTIONS(310), 1,
      anon_sym_SLASH_GT,
  [1068] = 1,
    ACTIONS(312), 1,
      anon_sym_SLASH_GT,
  [1072] = 1,
    ACTIONS(314), 1,
      anon_sym_LT_SLASHendpoint_GT,
  [1076] = 1,
    ACTIONS(316), 1,
      anon_sym_DQUOTE,
  [1080] = 1,
    ACTIONS(318), 1,
      sym_identifier,
  [1084] = 1,
    ACTIONS(320), 1,
      sym_identifier,
  [1088] = 1,
    ACTIONS(322), 1,
      sym_identifier,
  [1092] = 1,
    ACTIONS(324), 1,
      anon_sym_DQUOTE,
  [1096] = 1,
    ACTIONS(326), 1,
      anon_sym_DQUOTE,
  [1100] = 1,
    ACTIONS(328), 1,
      anon_sym_DQUOTE,
  [1104] = 1,
    ACTIONS(330), 1,
      anon_sym_LT_SLASHcall_GT,
  [1108] = 1,
    ACTIONS(332), 1,
      anon_sym_LT_SLASHcall_GT,
  [1112] = 1,
    ACTIONS(334), 1,
      anon_sym_LT_SLASHcall_GT,
  [1116] = 1,
    ACTIONS(336), 1,
      anon_sym_SLASH_GT,
  [1120] = 1,
    ACTIONS(338), 1,
      anon_sym_LT_SLASHcall_GT,
  [1124] = 1,
    ACTIONS(340), 1,
      sym_number,
  [1128] = 1,
    ACTIONS(342), 1,
      anon_sym_LT_SLASHcall_GT,
  [1132] = 1,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
  [1136] = 1,
    ACTIONS(346), 1,
      anon_sym_GT,
  [1140] = 1,
    ACTIONS(348), 1,
      sym_number,
  [1144] = 1,
    ACTIONS(350), 1,
      sym_number,
  [1148] = 1,
    ACTIONS(352), 1,
      anon_sym_DQUOTE,
  [1152] = 1,
    ACTIONS(354), 1,
      anon_sym_DQUOTE,
  [1156] = 1,
    ACTIONS(356), 1,
      anon_sym_GT,
  [1160] = 1,
    ACTIONS(358), 1,
      sym_number,
  [1164] = 1,
    ACTIONS(360), 1,
      sym_number,
  [1168] = 1,
    ACTIONS(362), 1,
      sym_number,
  [1172] = 1,
    ACTIONS(364), 1,
      anon_sym_DQUOTE,
  [1176] = 1,
    ACTIONS(366), 1,
      anon_sym_LT_SLASHendpoint_GT,
  [1180] = 1,
    ACTIONS(368), 1,
      anon_sym_LT_SLASHcall_GT,
  [1184] = 1,
    ACTIONS(370), 1,
      sym_identifier,
  [1188] = 1,
    ACTIONS(372), 1,
      anon_sym_LT_SLASHcall_GT,
  [1192] = 1,
    ACTIONS(374), 1,
      anon_sym_EQ,
  [1196] = 1,
    ACTIONS(376), 1,
      anon_sym_LT_SLASHcall_GT,
  [1200] = 1,
    ACTIONS(378), 1,
      anon_sym_LT_SLASHduration_GT,
  [1204] = 1,
    ACTIONS(380), 1,
      anon_sym_LT_SLASHresponseAction_GT,
  [1208] = 1,
    ACTIONS(382), 1,
      anon_sym_SLASH_GT,
  [1212] = 1,
    ACTIONS(384), 1,
      anon_sym_SLASH_GT,
  [1216] = 1,
    ACTIONS(386), 1,
      anon_sym_LT_SLASHretriesBeforeSuspension_GT,
  [1220] = 1,
    ACTIONS(388), 1,
      anon_sym_LT_SLASHretryDelay_GT,
  [1224] = 1,
    ACTIONS(390), 1,
      anon_sym_EQ,
  [1228] = 1,
    ACTIONS(392), 1,
      anon_sym_EQ,
  [1232] = 1,
    ACTIONS(394), 1,
      anon_sym_DQUOTE,
  [1236] = 1,
    ACTIONS(396), 1,
      anon_sym_QMARK_GT,
  [1240] = 1,
    ACTIONS(398), 1,
      anon_sym_LT_SLASHinitialDuration_GT,
  [1244] = 1,
    ACTIONS(400), 1,
      anon_sym_LT_SLASHprogressionFactor_GT,
  [1248] = 1,
    ACTIONS(402), 1,
      anon_sym_LT_SLASHmaximumDuration_GT,
  [1252] = 1,
    ACTIONS(404), 1,
      anon_sym_GT,
  [1256] = 1,
    ACTIONS(406), 1,
      anon_sym_EQ,
  [1260] = 1,
    ACTIONS(408), 1,
      anon_sym_DQUOTE,
  [1264] = 1,
    ACTIONS(410), 1,
      anon_sym_DQUOTE,
  [1268] = 1,
    ACTIONS(412), 1,
      anon_sym_LT_SLASHendpoint_GT,
  [1272] = 1,
    ACTIONS(414), 1,
      anon_sym_EQ,
  [1276] = 1,
    ACTIONS(416), 1,
      anon_sym_DQUOTE,
  [1280] = 1,
    ACTIONS(418), 1,
      sym_encoding,
  [1284] = 1,
    ACTIONS(420), 1,
      sym_identifier,
  [1288] = 1,
    ACTIONS(422), 1,
      anon_sym_QMARK_GT,
  [1292] = 1,
    ACTIONS(424), 1,
      anon_sym_EQ,
  [1296] = 1,
    ACTIONS(426), 1,
      sym_version_number,
  [1300] = 1,
    ACTIONS(428), 1,
      anon_sym_DQUOTE,
  [1304] = 1,
    ACTIONS(430), 1,
      anon_sym_EQ,
  [1308] = 1,
    ACTIONS(432), 1,
      anon_sym_GT,
  [1312] = 1,
    ACTIONS(434), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 17,
  [SMALL_STATE(4)] = 41,
  [SMALL_STATE(5)] = 67,
  [SMALL_STATE(6)] = 91,
  [SMALL_STATE(7)] = 117,
  [SMALL_STATE(8)] = 141,
  [SMALL_STATE(9)] = 167,
  [SMALL_STATE(10)] = 189,
  [SMALL_STATE(11)] = 211,
  [SMALL_STATE(12)] = 233,
  [SMALL_STATE(13)] = 255,
  [SMALL_STATE(14)] = 277,
  [SMALL_STATE(15)] = 297,
  [SMALL_STATE(16)] = 317,
  [SMALL_STATE(17)] = 337,
  [SMALL_STATE(18)] = 348,
  [SMALL_STATE(19)] = 359,
  [SMALL_STATE(20)] = 375,
  [SMALL_STATE(21)] = 391,
  [SMALL_STATE(22)] = 407,
  [SMALL_STATE(23)] = 423,
  [SMALL_STATE(24)] = 439,
  [SMALL_STATE(25)] = 455,
  [SMALL_STATE(26)] = 464,
  [SMALL_STATE(27)] = 473,
  [SMALL_STATE(28)] = 485,
  [SMALL_STATE(29)] = 493,
  [SMALL_STATE(30)] = 501,
  [SMALL_STATE(31)] = 509,
  [SMALL_STATE(32)] = 525,
  [SMALL_STATE(33)] = 533,
  [SMALL_STATE(34)] = 541,
  [SMALL_STATE(35)] = 549,
  [SMALL_STATE(36)] = 557,
  [SMALL_STATE(37)] = 565,
  [SMALL_STATE(38)] = 573,
  [SMALL_STATE(39)] = 581,
  [SMALL_STATE(40)] = 593,
  [SMALL_STATE(41)] = 601,
  [SMALL_STATE(42)] = 609,
  [SMALL_STATE(43)] = 617,
  [SMALL_STATE(44)] = 625,
  [SMALL_STATE(45)] = 633,
  [SMALL_STATE(46)] = 641,
  [SMALL_STATE(47)] = 653,
  [SMALL_STATE(48)] = 665,
  [SMALL_STATE(49)] = 672,
  [SMALL_STATE(50)] = 685,
  [SMALL_STATE(51)] = 692,
  [SMALL_STATE(52)] = 699,
  [SMALL_STATE(53)] = 710,
  [SMALL_STATE(54)] = 717,
  [SMALL_STATE(55)] = 730,
  [SMALL_STATE(56)] = 743,
  [SMALL_STATE(57)] = 750,
  [SMALL_STATE(58)] = 757,
  [SMALL_STATE(59)] = 764,
  [SMALL_STATE(60)] = 775,
  [SMALL_STATE(61)] = 786,
  [SMALL_STATE(62)] = 793,
  [SMALL_STATE(63)] = 800,
  [SMALL_STATE(64)] = 807,
  [SMALL_STATE(65)] = 820,
  [SMALL_STATE(66)] = 827,
  [SMALL_STATE(67)] = 840,
  [SMALL_STATE(68)] = 850,
  [SMALL_STATE(69)] = 856,
  [SMALL_STATE(70)] = 866,
  [SMALL_STATE(71)] = 876,
  [SMALL_STATE(72)] = 882,
  [SMALL_STATE(73)] = 888,
  [SMALL_STATE(74)] = 896,
  [SMALL_STATE(75)] = 902,
  [SMALL_STATE(76)] = 908,
  [SMALL_STATE(77)] = 916,
  [SMALL_STATE(78)] = 926,
  [SMALL_STATE(79)] = 936,
  [SMALL_STATE(80)] = 946,
  [SMALL_STATE(81)] = 951,
  [SMALL_STATE(82)] = 956,
  [SMALL_STATE(83)] = 963,
  [SMALL_STATE(84)] = 968,
  [SMALL_STATE(85)] = 973,
  [SMALL_STATE(86)] = 978,
  [SMALL_STATE(87)] = 985,
  [SMALL_STATE(88)] = 992,
  [SMALL_STATE(89)] = 999,
  [SMALL_STATE(90)] = 1004,
  [SMALL_STATE(91)] = 1009,
  [SMALL_STATE(92)] = 1016,
  [SMALL_STATE(93)] = 1020,
  [SMALL_STATE(94)] = 1024,
  [SMALL_STATE(95)] = 1028,
  [SMALL_STATE(96)] = 1032,
  [SMALL_STATE(97)] = 1036,
  [SMALL_STATE(98)] = 1040,
  [SMALL_STATE(99)] = 1044,
  [SMALL_STATE(100)] = 1048,
  [SMALL_STATE(101)] = 1052,
  [SMALL_STATE(102)] = 1056,
  [SMALL_STATE(103)] = 1060,
  [SMALL_STATE(104)] = 1064,
  [SMALL_STATE(105)] = 1068,
  [SMALL_STATE(106)] = 1072,
  [SMALL_STATE(107)] = 1076,
  [SMALL_STATE(108)] = 1080,
  [SMALL_STATE(109)] = 1084,
  [SMALL_STATE(110)] = 1088,
  [SMALL_STATE(111)] = 1092,
  [SMALL_STATE(112)] = 1096,
  [SMALL_STATE(113)] = 1100,
  [SMALL_STATE(114)] = 1104,
  [SMALL_STATE(115)] = 1108,
  [SMALL_STATE(116)] = 1112,
  [SMALL_STATE(117)] = 1116,
  [SMALL_STATE(118)] = 1120,
  [SMALL_STATE(119)] = 1124,
  [SMALL_STATE(120)] = 1128,
  [SMALL_STATE(121)] = 1132,
  [SMALL_STATE(122)] = 1136,
  [SMALL_STATE(123)] = 1140,
  [SMALL_STATE(124)] = 1144,
  [SMALL_STATE(125)] = 1148,
  [SMALL_STATE(126)] = 1152,
  [SMALL_STATE(127)] = 1156,
  [SMALL_STATE(128)] = 1160,
  [SMALL_STATE(129)] = 1164,
  [SMALL_STATE(130)] = 1168,
  [SMALL_STATE(131)] = 1172,
  [SMALL_STATE(132)] = 1176,
  [SMALL_STATE(133)] = 1180,
  [SMALL_STATE(134)] = 1184,
  [SMALL_STATE(135)] = 1188,
  [SMALL_STATE(136)] = 1192,
  [SMALL_STATE(137)] = 1196,
  [SMALL_STATE(138)] = 1200,
  [SMALL_STATE(139)] = 1204,
  [SMALL_STATE(140)] = 1208,
  [SMALL_STATE(141)] = 1212,
  [SMALL_STATE(142)] = 1216,
  [SMALL_STATE(143)] = 1220,
  [SMALL_STATE(144)] = 1224,
  [SMALL_STATE(145)] = 1228,
  [SMALL_STATE(146)] = 1232,
  [SMALL_STATE(147)] = 1236,
  [SMALL_STATE(148)] = 1240,
  [SMALL_STATE(149)] = 1244,
  [SMALL_STATE(150)] = 1248,
  [SMALL_STATE(151)] = 1252,
  [SMALL_STATE(152)] = 1256,
  [SMALL_STATE(153)] = 1260,
  [SMALL_STATE(154)] = 1264,
  [SMALL_STATE(155)] = 1268,
  [SMALL_STATE(156)] = 1272,
  [SMALL_STATE(157)] = 1276,
  [SMALL_STATE(158)] = 1280,
  [SMALL_STATE(159)] = 1284,
  [SMALL_STATE(160)] = 1288,
  [SMALL_STATE(161)] = 1292,
  [SMALL_STATE(162)] = 1296,
  [SMALL_STATE(163)] = 1300,
  [SMALL_STATE(164)] = 1304,
  [SMALL_STATE(165)] = 1308,
  [SMALL_STATE(166)] = 1312,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_suspend_on_failure_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_suspend_on_failure_repeat1, 2), SHIFT_REPEAT(128),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_suspend_on_failure_repeat1, 2), SHIFT_REPEAT(129),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_suspend_on_failure_repeat1, 2), SHIFT_REPEAT(130),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_suspend_on_failure_repeat1, 2), SHIFT_REPEAT(77),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_definition_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_definition_repeat1, 2), SHIFT_REPEAT(35),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_definition_repeat1, 2), SHIFT_REPEAT(87),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_definition_repeat1, 2), SHIFT_REPEAT(86),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_definition_repeat1, 2), SHIFT_REPEAT(31),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_http_endpoint_repeat2, 2),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_http_endpoint_repeat2, 2), SHIFT_REPEAT(19),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_http_endpoint_repeat2, 2), SHIFT_REPEAT(15),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_http_endpoint_repeat2, 2), SHIFT_REPEAT(7),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mark_for_suspending_repeat1, 2),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mark_for_suspending_repeat1, 2), SHIFT_REPEAT(123),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mark_for_suspending_repeat1, 2), SHIFT_REPEAT(124),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mark_for_suspending_repeat1, 2), SHIFT_REPEAT(77),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_codes, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_codes, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_http_endpoint_repeat1, 2),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_http_endpoint_repeat1, 2), SHIFT_REPEAT(95),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_http_endpoint_repeat1, 2), SHIFT_REPEAT(96),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_timeout_repeat1, 2),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_timeout_repeat1, 2), SHIFT_REPEAT(119),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_timeout_repeat1, 2), SHIFT_REPEAT(68),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, .production_id = 4),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, .production_id = 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(88),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log, 5, .production_id = 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5, .production_id = 10),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mediator, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 6, .production_id = 12),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, .production_id = 6),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, .production_id = 5),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_respond, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 6, .production_id = 13),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5, .production_id = 7),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_initial_duration, 3, .production_id = 15),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log, 4, .production_id = 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5, .production_id = 8),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_progression_factor, 3, .production_id = 15),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maximum_duration, 3, .production_id = 15),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log, 3, .production_id = 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5, .production_id = 9),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timeout, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timeout, 3),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_delay, 3, .production_id = 15),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_suspend_on_failure, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retries_before_suspending, 3, .production_id = 15),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 5),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_log_repeat1, 2),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_repeat1, 2), SHIFT_REPEAT(86),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mark_for_suspending, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mark_for_suspending, 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endpoint_error_property, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_suspend_on_failure, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration, 3, .production_id = 15),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 5),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_action, 3),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uri_template, 5),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_error_codes_repeat1, 2),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_error_codes_repeat1, 2), SHIFT_REPEAT(79),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_definition, 4, .production_id = 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_declaration, 4),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_info, 3),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_declaration, 3),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_level, 5),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_definition, 5, .production_id = 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endpoint, 4, .production_id = 11),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blocking, 5),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [308] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 5),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 5),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_endpoint, 3),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endpoint, 5, .production_id = 14),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_endpoint, 4),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endpoint_reference, 6),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_encoding_declaration, 3),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_endpoint, 5),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
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
