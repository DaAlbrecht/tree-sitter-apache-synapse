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
#define STATE_COUNT 486
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 205
#define ALIAS_COUNT 0
#define TOKEN_COUNT 128
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 29
#define MAX_ALIAS_SEQUENCE_LENGTH 24
#define PRODUCTION_ID_COUNT 67

enum {
  anon_sym_LTsequence = 1,
  anon_sym_GT = 2,
  anon_sym_LT_SLASHsequence_GT = 3,
  anon_sym_LTrespond_SLASH_GT = 4,
  anon_sym_LTsend_SLASH_GT = 5,
  anon_sym_LTsend = 6,
  anon_sym_LT_SLASHsend_GT = 7,
  anon_sym_LTlog = 8,
  anon_sym_LT_SLASHlog_GT = 9,
  anon_sym_SLASH_GT = 10,
  anon_sym_LTproperty = 11,
  anon_sym_LTcall = 12,
  anon_sym_LT_SLASHcall_GT = 13,
  anon_sym_LTforeach = 14,
  anon_sym_sequence = 15,
  anon_sym_EQ = 16,
  anon_sym_DQUOTE = 17,
  anon_sym_LT_SLASHforeach_GT = 18,
  anon_sym_LTfilter = 19,
  anon_sym_xpath = 20,
  anon_sym_LT_SLASHfilter_GT = 21,
  anon_sym_LTaggregate_GT = 22,
  anon_sym_LTaggregate = 23,
  anon_sym_LT_SLASHaggregate_GT = 24,
  anon_sym_LTiterate = 25,
  anon_sym_LT_SLASHiterate_GT = 26,
  anon_sym_sequential = 27,
  anon_sym_continueParent = 28,
  anon_sym_preservePayload = 29,
  anon_sym_attachPath = 30,
  anon_sym_LTsequence_GT = 31,
  anon_sym_LTtarget = 32,
  anon_sym_to = 33,
  anon_sym_soapAction = 34,
  anon_sym_endpoint = 35,
  anon_sym_LT_SLASHtarget_GT = 36,
  anon_sym_LTcorrelateOn = 37,
  anon_sym_LTcompleteCondition = 38,
  anon_sym_LT_SLASHcompleteCondition_GT = 39,
  anon_sym_LTonComplete = 40,
  anon_sym_LT_SLASHonComplete_GT = 41,
  anon_sym_LTmessageCount = 42,
  anon_sym_min = 43,
  anon_sym_max = 44,
  anon_sym_LTthen_GT = 45,
  anon_sym_LT_SLASHthen_GT = 46,
  anon_sym_LTelse_GT = 47,
  anon_sym_LT_SLASHelse_GT = 48,
  anon_sym_source = 49,
  anon_sym_regex = 50,
  anon_sym_LTendpoint = 51,
  anon_sym_LT_SLASHendpoint_GT = 52,
  anon_sym_LThttp = 53,
  anon_sym_LT_SLASHhttp_GT = 54,
  anon_sym_uri_DASHtemplate = 55,
  anon_sym_method = 56,
  anon_sym_GET = 57,
  anon_sym_POST = 58,
  anon_sym_PUT = 59,
  anon_sym_DELETE = 60,
  anon_sym_HEAD = 61,
  anon_sym_OPTIONS = 62,
  anon_sym_PATCH = 63,
  anon_sym_get = 64,
  anon_sym_post = 65,
  anon_sym_put = 66,
  anon_sym_delete = 67,
  anon_sym_head = 68,
  anon_sym_options = 69,
  anon_sym_patch = 70,
  anon_sym_LTtimeout_GT = 71,
  anon_sym_LT_SLASHtimeout_GT = 72,
  anon_sym_LTmarkForSuspension_GT = 73,
  anon_sym_LT_SLASHmarkForSuspension_GT = 74,
  anon_sym_LTretriesBeforeSuspension_GT = 75,
  anon_sym_LT_SLASHretriesBeforeSuspension_GT = 76,
  anon_sym_LTretryDelay_GT = 77,
  anon_sym_LT_SLASHretryDelay_GT = 78,
  anon_sym_LTsuspendOnFailure_GT = 79,
  anon_sym_LT_SLASHsuspendOnFailure_GT = 80,
  anon_sym_LTinitialDuration_GT = 81,
  anon_sym_LT_SLASHinitialDuration_GT = 82,
  anon_sym_LTprogressionFactor_GT = 83,
  anon_sym_LT_SLASHprogressionFactor_GT = 84,
  anon_sym_LTmaximumDuration_GT = 85,
  anon_sym_LT_SLASHmaximumDuration_GT = 86,
  anon_sym_LTerrorCodes_GT = 87,
  anon_sym_COMMA = 88,
  anon_sym_LT_SLASHerrorCodes_GT = 89,
  anon_sym_LTduration_GT = 90,
  anon_sym_LT_SLASHduration_GT = 91,
  anon_sym_LTresponseAction_GT = 92,
  anon_sym_never = 93,
  anon_sym_discard = 94,
  anon_sym_fault = 95,
  anon_sym_LT_SLASHresponseAction_GT = 96,
  anon_sym_LTkey = 97,
  anon_sym_blocking = 98,
  anon_sym_true = 99,
  anon_sym_false = 100,
  anon_sym_value = 101,
  anon_sym_expression = 102,
  anon_sym_json_DASHeval_LPAREN = 103,
  anon_sym_RPAREN = 104,
  anon_sym_name = 105,
  anon_sym_id = 106,
  anon_sym_level = 107,
  anon_sym_full = 108,
  anon_sym_simple = 109,
  anon_sym_custom = 110,
  anon_sym_headers = 111,
  aux_sym_identifier_token1 = 112,
  sym__float = 113,
  sym__unsigned_int = 114,
  sym__int = 115,
  sym_expression_string = 116,
  anon_sym_LT_QMARKxml = 117,
  anon_sym_QMARK_GT = 118,
  anon_sym_version = 119,
  sym_version_number = 120,
  anon_sym_encoding = 121,
  sym_encoding = 122,
  anon_sym_SLASH = 123,
  anon_sym_SLASH_SLASH = 124,
  anon_sym_DOT_DOT = 125,
  anon_sym_DOT = 126,
  anon_sym_AT = 127,
  sym_source_file = 128,
  sym__definition = 129,
  sym_sequence_definition = 130,
  sym_mediator = 131,
  sym_respond = 132,
  sym_send = 133,
  sym_log = 134,
  sym_property = 135,
  sym_call = 136,
  sym_foreach = 137,
  sym_filter = 138,
  sym_aggregate = 139,
  sym_iterate = 140,
  sym_sequential = 141,
  sym_continueParent = 142,
  sym_preservePayload = 143,
  sym_attachPath = 144,
  sym_sequence = 145,
  sym_target = 146,
  sym_correlateOn = 147,
  sym_complete_condition = 148,
  sym_on_complete = 149,
  sym_message_count = 150,
  sym_min = 151,
  sym_max = 152,
  sym_then = 153,
  sym_else = 154,
  sym_source = 155,
  sym_regex = 156,
  sym_endpoint = 157,
  sym__endpoint_type = 158,
  sym_http_endpoint = 159,
  sym__endpoint_attribute = 160,
  sym_method = 161,
  sym_endpoint_error_property = 162,
  sym_timeout = 163,
  sym_mark_for_suspending = 164,
  sym__mark_for_suspending_property = 165,
  sym_retries_before_suspending = 166,
  sym_retry_delay = 167,
  sym_suspend_on_failure = 168,
  sym__suspend_on_failure_property = 169,
  sym_initial_duration = 170,
  sym_progression_factor = 171,
  sym_maximum_duration = 172,
  sym_error_codes = 173,
  sym__timeout_property = 174,
  sym_duration = 175,
  sym_response_action = 176,
  sym_endpoint_reference = 177,
  sym_blocking = 178,
  sym_value = 179,
  sym_expression = 180,
  sym_json_eval = 181,
  sym_name = 182,
  sym_id = 183,
  sym_level = 184,
  sym_identifier = 185,
  sym_number = 186,
  sym_boolean = 187,
  sym_xml_declaration = 188,
  sym_version_info = 189,
  sym_encoding_declaration = 190,
  sym_xpath = 191,
  sym__xpath_node = 192,
  sym__xpath_selectors = 193,
  aux_sym_source_file_repeat1 = 194,
  aux_sym_sequence_definition_repeat1 = 195,
  aux_sym_log_repeat1 = 196,
  aux_sym_iterate_repeat1 = 197,
  aux_sym_http_endpoint_repeat1 = 198,
  aux_sym_http_endpoint_repeat2 = 199,
  aux_sym_timeout_repeat1 = 200,
  aux_sym_mark_for_suspending_repeat1 = 201,
  aux_sym_suspend_on_failure_repeat1 = 202,
  aux_sym_error_codes_repeat1 = 203,
  aux_sym_xpath_repeat1 = 204,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LTsequence] = "<sequence",
  [anon_sym_GT] = ">",
  [anon_sym_LT_SLASHsequence_GT] = "</sequence>",
  [anon_sym_LTrespond_SLASH_GT] = "<respond/>",
  [anon_sym_LTsend_SLASH_GT] = "<send/>",
  [anon_sym_LTsend] = "<send",
  [anon_sym_LT_SLASHsend_GT] = "</send>",
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
  [anon_sym_LT_SLASHforeach_GT] = "</foreach>",
  [anon_sym_LTfilter] = "<filter",
  [anon_sym_xpath] = "xpath",
  [anon_sym_LT_SLASHfilter_GT] = "</filter>",
  [anon_sym_LTaggregate_GT] = "<aggregate>",
  [anon_sym_LTaggregate] = "<aggregate",
  [anon_sym_LT_SLASHaggregate_GT] = "</aggregate>",
  [anon_sym_LTiterate] = "<iterate",
  [anon_sym_LT_SLASHiterate_GT] = "</iterate>",
  [anon_sym_sequential] = "sequential",
  [anon_sym_continueParent] = "continueParent",
  [anon_sym_preservePayload] = "preservePayload",
  [anon_sym_attachPath] = "attachPath",
  [anon_sym_LTsequence_GT] = "<sequence>",
  [anon_sym_LTtarget] = "<target",
  [anon_sym_to] = "to",
  [anon_sym_soapAction] = "soapAction",
  [anon_sym_endpoint] = "endpoint",
  [anon_sym_LT_SLASHtarget_GT] = "</target>",
  [anon_sym_LTcorrelateOn] = "<correlateOn",
  [anon_sym_LTcompleteCondition] = "<completeCondition",
  [anon_sym_LT_SLASHcompleteCondition_GT] = "</completeCondition>",
  [anon_sym_LTonComplete] = "<onComplete",
  [anon_sym_LT_SLASHonComplete_GT] = "</onComplete>",
  [anon_sym_LTmessageCount] = "<messageCount",
  [anon_sym_min] = "min",
  [anon_sym_max] = "max",
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
  [sym_send] = "send",
  [sym_log] = "log",
  [sym_property] = "property",
  [sym_call] = "call",
  [sym_foreach] = "foreach",
  [sym_filter] = "filter",
  [sym_aggregate] = "aggregate",
  [sym_iterate] = "iterate",
  [sym_sequential] = "sequential",
  [sym_continueParent] = "continueParent",
  [sym_preservePayload] = "preservePayload",
  [sym_attachPath] = "attachPath",
  [sym_sequence] = "sequence",
  [sym_target] = "target",
  [sym_correlateOn] = "correlateOn",
  [sym_complete_condition] = "complete_condition",
  [sym_on_complete] = "on_complete",
  [sym_message_count] = "message_count",
  [sym_min] = "min",
  [sym_max] = "max",
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
  [sym_boolean] = "boolean",
  [sym_xml_declaration] = "xml_declaration",
  [sym_version_info] = "version_info",
  [sym_encoding_declaration] = "encoding_declaration",
  [sym_xpath] = "xpath",
  [sym__xpath_node] = "_xpath_node",
  [sym__xpath_selectors] = "_xpath_selectors",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_sequence_definition_repeat1] = "sequence_definition_repeat1",
  [aux_sym_log_repeat1] = "log_repeat1",
  [aux_sym_iterate_repeat1] = "iterate_repeat1",
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
  [anon_sym_LTsend_SLASH_GT] = anon_sym_LTsend_SLASH_GT,
  [anon_sym_LTsend] = anon_sym_LTsend,
  [anon_sym_LT_SLASHsend_GT] = anon_sym_LT_SLASHsend_GT,
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
  [anon_sym_LT_SLASHforeach_GT] = anon_sym_LT_SLASHforeach_GT,
  [anon_sym_LTfilter] = anon_sym_LTfilter,
  [anon_sym_xpath] = anon_sym_xpath,
  [anon_sym_LT_SLASHfilter_GT] = anon_sym_LT_SLASHfilter_GT,
  [anon_sym_LTaggregate_GT] = anon_sym_LTaggregate_GT,
  [anon_sym_LTaggregate] = anon_sym_LTaggregate,
  [anon_sym_LT_SLASHaggregate_GT] = anon_sym_LT_SLASHaggregate_GT,
  [anon_sym_LTiterate] = anon_sym_LTiterate,
  [anon_sym_LT_SLASHiterate_GT] = anon_sym_LT_SLASHiterate_GT,
  [anon_sym_sequential] = anon_sym_sequential,
  [anon_sym_continueParent] = anon_sym_continueParent,
  [anon_sym_preservePayload] = anon_sym_preservePayload,
  [anon_sym_attachPath] = anon_sym_attachPath,
  [anon_sym_LTsequence_GT] = anon_sym_LTsequence_GT,
  [anon_sym_LTtarget] = anon_sym_LTtarget,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_soapAction] = anon_sym_soapAction,
  [anon_sym_endpoint] = anon_sym_endpoint,
  [anon_sym_LT_SLASHtarget_GT] = anon_sym_LT_SLASHtarget_GT,
  [anon_sym_LTcorrelateOn] = anon_sym_LTcorrelateOn,
  [anon_sym_LTcompleteCondition] = anon_sym_LTcompleteCondition,
  [anon_sym_LT_SLASHcompleteCondition_GT] = anon_sym_LT_SLASHcompleteCondition_GT,
  [anon_sym_LTonComplete] = anon_sym_LTonComplete,
  [anon_sym_LT_SLASHonComplete_GT] = anon_sym_LT_SLASHonComplete_GT,
  [anon_sym_LTmessageCount] = anon_sym_LTmessageCount,
  [anon_sym_min] = anon_sym_min,
  [anon_sym_max] = anon_sym_max,
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
  [sym_send] = sym_send,
  [sym_log] = sym_log,
  [sym_property] = sym_property,
  [sym_call] = sym_call,
  [sym_foreach] = sym_foreach,
  [sym_filter] = sym_filter,
  [sym_aggregate] = sym_aggregate,
  [sym_iterate] = sym_iterate,
  [sym_sequential] = sym_sequential,
  [sym_continueParent] = sym_continueParent,
  [sym_preservePayload] = sym_preservePayload,
  [sym_attachPath] = sym_attachPath,
  [sym_sequence] = sym_sequence,
  [sym_target] = sym_target,
  [sym_correlateOn] = sym_correlateOn,
  [sym_complete_condition] = sym_complete_condition,
  [sym_on_complete] = sym_on_complete,
  [sym_message_count] = sym_message_count,
  [sym_min] = sym_min,
  [sym_max] = sym_max,
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
  [sym_boolean] = sym_boolean,
  [sym_xml_declaration] = sym_xml_declaration,
  [sym_version_info] = sym_version_info,
  [sym_encoding_declaration] = sym_encoding_declaration,
  [sym_xpath] = sym_xpath,
  [sym__xpath_node] = sym__xpath_node,
  [sym__xpath_selectors] = sym__xpath_selectors,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_sequence_definition_repeat1] = aux_sym_sequence_definition_repeat1,
  [aux_sym_log_repeat1] = aux_sym_log_repeat1,
  [aux_sym_iterate_repeat1] = aux_sym_iterate_repeat1,
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
  [anon_sym_LTsend_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTsend] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHsend_GT] = {
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
  [anon_sym_LTaggregate_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTaggregate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHaggregate_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTiterate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHiterate_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sequential] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_continueParent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_preservePayload] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_attachPath] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTsequence_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTtarget] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_soapAction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endpoint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHtarget_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTcorrelateOn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTcompleteCondition] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHcompleteCondition_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTonComplete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHonComplete_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTmessageCount] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_min] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_max] = {
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
  [sym_send] = {
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
  [sym_aggregate] = {
    .visible = true,
    .named = true,
  },
  [sym_iterate] = {
    .visible = true,
    .named = true,
  },
  [sym_sequential] = {
    .visible = true,
    .named = true,
  },
  [sym_continueParent] = {
    .visible = true,
    .named = true,
  },
  [sym_preservePayload] = {
    .visible = true,
    .named = true,
  },
  [sym_attachPath] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_target] = {
    .visible = true,
    .named = true,
  },
  [sym_correlateOn] = {
    .visible = true,
    .named = true,
  },
  [sym_complete_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_on_complete] = {
    .visible = true,
    .named = true,
  },
  [sym_message_count] = {
    .visible = true,
    .named = true,
  },
  [sym_min] = {
    .visible = true,
    .named = true,
  },
  [sym_max] = {
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
  [aux_sym_iterate_repeat1] = {
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
  field_attachPath = 1,
  field_blocking = 2,
  field_complete_condition = 3,
  field_continueParent = 4,
  field_correlateOn = 5,
  field_else = 6,
  field_endpoint = 7,
  field_endpoint_reference = 8,
  field_endpoint_type = 9,
  field_expression = 10,
  field_id = 11,
  field_level = 12,
  field_max = 13,
  field_message_count = 14,
  field_min = 15,
  field_name = 16,
  field_number = 17,
  field_on_complete = 18,
  field_preservePayload = 19,
  field_regex = 20,
  field_sequence = 21,
  field_sequential = 22,
  field_soapAction = 23,
  field_source = 24,
  field_target = 25,
  field_then = 26,
  field_timeout = 27,
  field_to = 28,
  field_value = 29,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_attachPath] = "attachPath",
  [field_blocking] = "blocking",
  [field_complete_condition] = "complete_condition",
  [field_continueParent] = "continueParent",
  [field_correlateOn] = "correlateOn",
  [field_else] = "else",
  [field_endpoint] = "endpoint",
  [field_endpoint_reference] = "endpoint_reference",
  [field_endpoint_type] = "endpoint_type",
  [field_expression] = "expression",
  [field_id] = "id",
  [field_level] = "level",
  [field_max] = "max",
  [field_message_count] = "message_count",
  [field_min] = "min",
  [field_name] = "name",
  [field_number] = "number",
  [field_on_complete] = "on_complete",
  [field_preservePayload] = "preservePayload",
  [field_regex] = "regex",
  [field_sequence] = "sequence",
  [field_sequential] = "sequential",
  [field_soapAction] = "soapAction",
  [field_source] = "source",
  [field_target] = "target",
  [field_then] = "then",
  [field_timeout] = "timeout",
  [field_to] = "to",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 1},
  [8] = {.index = 7, .length = 1},
  [9] = {.index = 8, .length = 1},
  [10] = {.index = 9, .length = 1},
  [11] = {.index = 10, .length = 10},
  [12] = {.index = 20, .length = 1},
  [13] = {.index = 21, .length = 2},
  [14] = {.index = 23, .length = 2},
  [15] = {.index = 25, .length = 1},
  [16] = {.index = 26, .length = 1},
  [17] = {.index = 27, .length = 2},
  [18] = {.index = 29, .length = 2},
  [19] = {.index = 31, .length = 2},
  [20] = {.index = 33, .length = 1},
  [21] = {.index = 34, .length = 2},
  [22] = {.index = 36, .length = 2},
  [23] = {.index = 38, .length = 2},
  [24] = {.index = 40, .length = 2},
  [25] = {.index = 42, .length = 2},
  [26] = {.index = 44, .length = 1},
  [27] = {.index = 45, .length = 1},
  [28] = {.index = 46, .length = 3},
  [29] = {.index = 49, .length = 2},
  [30] = {.index = 51, .length = 2},
  [31] = {.index = 53, .length = 2},
  [32] = {.index = 55, .length = 6},
  [33] = {.index = 61, .length = 1},
  [34] = {.index = 62, .length = 3},
  [35] = {.index = 65, .length = 3},
  [36] = {.index = 68, .length = 3},
  [37] = {.index = 71, .length = 3},
  [38] = {.index = 74, .length = 1},
  [39] = {.index = 75, .length = 2},
  [40] = {.index = 77, .length = 3},
  [41] = {.index = 80, .length = 3},
  [42] = {.index = 83, .length = 3},
  [43] = {.index = 86, .length = 2},
  [44] = {.index = 88, .length = 1},
  [45] = {.index = 89, .length = 2},
  [46] = {.index = 91, .length = 4},
  [47] = {.index = 95, .length = 1},
  [48] = {.index = 96, .length = 7},
  [49] = {.index = 103, .length = 2},
  [50] = {.index = 105, .length = 6},
  [51] = {.index = 111, .length = 8},
  [52] = {.index = 119, .length = 6},
  [53] = {.index = 125, .length = 6},
  [54] = {.index = 131, .length = 6},
  [55] = {.index = 137, .length = 6},
  [56] = {.index = 143, .length = 11},
  [57] = {.index = 154, .length = 11},
  [58] = {.index = 165, .length = 11},
  [59] = {.index = 176, .length = 11},
  [60] = {.index = 187, .length = 11},
  [61] = {.index = 198, .length = 11},
  [62] = {.index = 209, .length = 16},
  [63] = {.index = 225, .length = 16},
  [64] = {.index = 241, .length = 16},
  [65] = {.index = 257, .length = 16},
  [66] = {.index = 273, .length = 21},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_sequential, 0},
  [2] =
    {field_continueParent, 0},
  [3] =
    {field_preservePayload, 0},
  [4] =
    {field_attachPath, 0},
  [5] =
    {field_expression, 0},
  [6] =
    {field_level, 1},
  [7] =
    {field_correlateOn, 1},
  [8] =
    {field_complete_condition, 1},
  [9] =
    {field_on_complete, 1},
  [10] =
    {field_attachPath, 0, .inherited = true},
    {field_attachPath, 1, .inherited = true},
    {field_continueParent, 0, .inherited = true},
    {field_continueParent, 1, .inherited = true},
    {field_expression, 0, .inherited = true},
    {field_expression, 1, .inherited = true},
    {field_preservePayload, 0, .inherited = true},
    {field_preservePayload, 1, .inherited = true},
    {field_sequential, 0, .inherited = true},
    {field_sequential, 1, .inherited = true},
  [20] =
    {field_endpoint, 2},
  [21] =
    {field_name, 1},
    {field_value, 2},
  [23] =
    {field_expression, 2},
    {field_name, 1},
  [25] =
    {field_endpoint_reference, 2},
  [26] =
    {field_expression, 1},
  [27] =
    {field_complete_condition, 2},
    {field_correlateOn, 1},
  [29] =
    {field_correlateOn, 1},
    {field_on_complete, 2},
  [31] =
    {field_complete_condition, 1},
    {field_on_complete, 2},
  [33] =
    {field_id, 1},
  [34] =
    {field_blocking, 1},
    {field_endpoint, 3},
  [36] =
    {field_blocking, 1},
    {field_endpoint_reference, 3},
  [38] =
    {field_endpoint, 3},
    {field_name, 1},
  [40] =
    {field_endpoint_reference, 3},
    {field_name, 1},
  [42] =
    {field_expression, 1},
    {field_sequence, 3},
  [44] =
    {field_message_count, 2},
  [45] =
    {field_timeout, 1},
  [46] =
    {field_complete_condition, 2},
    {field_correlateOn, 1},
    {field_on_complete, 3},
  [49] =
    {field_correlateOn, 3},
    {field_id, 1},
  [51] =
    {field_complete_condition, 3},
    {field_id, 1},
  [53] =
    {field_id, 1},
    {field_on_complete, 3},
  [55] =
    {field_attachPath, 1, .inherited = true},
    {field_continueParent, 1, .inherited = true},
    {field_expression, 1, .inherited = true},
    {field_preservePayload, 1, .inherited = true},
    {field_sequential, 1, .inherited = true},
    {field_target, 3},
  [61] =
    {field_endpoint_type, 2},
  [62] =
    {field_blocking, 2},
    {field_endpoint, 4},
    {field_name, 1},
  [65] =
    {field_blocking, 2},
    {field_endpoint_reference, 4},
    {field_name, 1},
  [68] =
    {field_expression, 1},
    {field_id, 2},
    {field_sequence, 4},
  [71] =
    {field_else, 4},
    {field_source, 1},
    {field_then, 3},
  [74] =
    {field_number, 1},
  [75] =
    {field_message_count, 3},
    {field_timeout, 1},
  [77] =
    {field_complete_condition, 4},
    {field_correlateOn, 3},
    {field_id, 1},
  [80] =
    {field_correlateOn, 3},
    {field_id, 1},
    {field_on_complete, 4},
  [83] =
    {field_complete_condition, 3},
    {field_id, 1},
    {field_on_complete, 4},
  [86] =
    {field_endpoint_type, 3},
    {field_name, 1},
  [88] =
    {field_regex, 5},
  [89] =
    {field_max, 2},
    {field_min, 1},
  [91] =
    {field_complete_condition, 4},
    {field_correlateOn, 3},
    {field_id, 1},
    {field_on_complete, 5},
  [95] =
    {field_sequence, 2},
  [96] =
    {field_expression, 1},
    {field_sequence, 2},
    {field_sequence, 3},
    {field_sequence, 4},
    {field_sequence, 5},
    {field_sequence, 6},
    {field_sequence, 8},
  [103] =
    {field_else, 8},
    {field_then, 7},
  [105] =
    {field_expression, 1},
    {field_sequence, 2},
    {field_sequence, 3},
    {field_sequence, 4},
    {field_sequence, 5},
    {field_sequence, 6},
  [111] =
    {field_expression, 1},
    {field_id, 2},
    {field_sequence, 3},
    {field_sequence, 4},
    {field_sequence, 5},
    {field_sequence, 6},
    {field_sequence, 7},
    {field_sequence, 9},
  [119] =
    {field_sequence, 1},
    {field_sequence, 2},
    {field_sequence, 3},
    {field_sequence, 4},
    {field_sequence, 5},
    {field_sequence, 7},
  [125] =
    {field_sequence, 7},
    {field_to, 1},
    {field_to, 2},
    {field_to, 3},
    {field_to, 4},
    {field_to, 5},
  [131] =
    {field_sequence, 7},
    {field_soapAction, 1},
    {field_soapAction, 2},
    {field_soapAction, 3},
    {field_soapAction, 4},
    {field_soapAction, 5},
  [137] =
    {field_endpoint, 1},
    {field_endpoint, 2},
    {field_endpoint, 3},
    {field_endpoint, 4},
    {field_endpoint, 5},
    {field_sequence, 7},
  [143] =
    {field_endpoint, 6},
    {field_endpoint, 7},
    {field_endpoint, 8},
    {field_endpoint, 9},
    {field_endpoint, 10},
    {field_sequence, 1},
    {field_sequence, 2},
    {field_sequence, 3},
    {field_sequence, 4},
    {field_sequence, 5},
    {field_sequence, 12},
  [154] =
    {field_sequence, 6},
    {field_sequence, 7},
    {field_sequence, 8},
    {field_sequence, 9},
    {field_sequence, 10},
    {field_sequence, 12},
    {field_to, 1},
    {field_to, 2},
    {field_to, 3},
    {field_to, 4},
    {field_to, 5},
  [165] =
    {field_sequence, 12},
    {field_soapAction, 6},
    {field_soapAction, 7},
    {field_soapAction, 8},
    {field_soapAction, 9},
    {field_soapAction, 10},
    {field_to, 1},
    {field_to, 2},
    {field_to, 3},
    {field_to, 4},
    {field_to, 5},
  [176] =
    {field_endpoint, 6},
    {field_endpoint, 7},
    {field_endpoint, 8},
    {field_endpoint, 9},
    {field_endpoint, 10},
    {field_sequence, 12},
    {field_to, 1},
    {field_to, 2},
    {field_to, 3},
    {field_to, 4},
    {field_to, 5},
  [187] =
    {field_sequence, 6},
    {field_sequence, 7},
    {field_sequence, 8},
    {field_sequence, 9},
    {field_sequence, 10},
    {field_sequence, 12},
    {field_soapAction, 1},
    {field_soapAction, 2},
    {field_soapAction, 3},
    {field_soapAction, 4},
    {field_soapAction, 5},
  [198] =
    {field_endpoint, 6},
    {field_endpoint, 7},
    {field_endpoint, 8},
    {field_endpoint, 9},
    {field_endpoint, 10},
    {field_sequence, 12},
    {field_soapAction, 1},
    {field_soapAction, 2},
    {field_soapAction, 3},
    {field_soapAction, 4},
    {field_soapAction, 5},
  [209] =
    {field_endpoint, 11},
    {field_endpoint, 12},
    {field_endpoint, 13},
    {field_endpoint, 14},
    {field_endpoint, 15},
    {field_sequence, 6},
    {field_sequence, 7},
    {field_sequence, 8},
    {field_sequence, 9},
    {field_sequence, 10},
    {field_sequence, 17},
    {field_to, 1},
    {field_to, 2},
    {field_to, 3},
    {field_to, 4},
    {field_to, 5},
  [225] =
    {field_sequence, 11},
    {field_sequence, 12},
    {field_sequence, 13},
    {field_sequence, 14},
    {field_sequence, 15},
    {field_sequence, 17},
    {field_soapAction, 6},
    {field_soapAction, 7},
    {field_soapAction, 8},
    {field_soapAction, 9},
    {field_soapAction, 10},
    {field_to, 1},
    {field_to, 2},
    {field_to, 3},
    {field_to, 4},
    {field_to, 5},
  [241] =
    {field_endpoint, 11},
    {field_endpoint, 12},
    {field_endpoint, 13},
    {field_endpoint, 14},
    {field_endpoint, 15},
    {field_sequence, 17},
    {field_soapAction, 6},
    {field_soapAction, 7},
    {field_soapAction, 8},
    {field_soapAction, 9},
    {field_soapAction, 10},
    {field_to, 1},
    {field_to, 2},
    {field_to, 3},
    {field_to, 4},
    {field_to, 5},
  [257] =
    {field_endpoint, 11},
    {field_endpoint, 12},
    {field_endpoint, 13},
    {field_endpoint, 14},
    {field_endpoint, 15},
    {field_sequence, 6},
    {field_sequence, 7},
    {field_sequence, 8},
    {field_sequence, 9},
    {field_sequence, 10},
    {field_sequence, 17},
    {field_soapAction, 1},
    {field_soapAction, 2},
    {field_soapAction, 3},
    {field_soapAction, 4},
    {field_soapAction, 5},
  [273] =
    {field_endpoint, 16},
    {field_endpoint, 17},
    {field_endpoint, 18},
    {field_endpoint, 19},
    {field_endpoint, 20},
    {field_sequence, 11},
    {field_sequence, 12},
    {field_sequence, 13},
    {field_sequence, 14},
    {field_sequence, 15},
    {field_sequence, 22},
    {field_soapAction, 6},
    {field_soapAction, 7},
    {field_soapAction, 8},
    {field_soapAction, 9},
    {field_soapAction, 10},
    {field_to, 1},
    {field_to, 2},
    {field_to, 3},
    {field_to, 4},
    {field_to, 5},
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
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 485,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(736);
      if (lookahead == '"') ADVANCE(755);
      if (lookahead == ')') ADVANCE(877);
      if (lookahead == ',') ADVANCE(853);
      if (lookahead == '-') ADVANCE(732);
      if (lookahead == '.') ADVANCE(1107);
      if (lookahead == '/') ADVANCE(1104);
      if (lookahead == '<') ADVANCE(8);
      if (lookahead == '=') ADVANCE(754);
      if (lookahead == '>') ADVANCE(739);
      if (lookahead == '?') ADVANCE(13);
      if (lookahead == '@') ADVANCE(1108);
      if (lookahead == 'D') ADVANCE(899);
      if (lookahead == 'G') ADVANCE(900);
      if (lookahead == 'H') ADVANCE(901);
      if (lookahead == 'O') ADVANCE(909);
      if (lookahead == 'P') ADVANCE(895);
      if (lookahead == 'a') ADVANCE(1069);
      if (lookahead == 'b') ADVANCE(994);
      if (lookahead == 'c') ADVANCE(1022);
      if (lookahead == 'd') ADVANCE(962);
      if (lookahead == 'e') ADVANCE(1008);
      if (lookahead == 'f') ADVANCE(921);
      if (lookahead == 'g') ADVANCE(964);
      if (lookahead == 'h') ADVANCE(950);
      if (lookahead == 'i') ADVANCE(944);
      if (lookahead == 'j') ADVANCE(1053);
      if (lookahead == 'l') ADVANCE(951);
      if (lookahead == 'm') ADVANCE(922);
      if (lookahead == 'n') ADVANCE(923);
      if (lookahead == 'o') ADVANCE(1038);
      if (lookahead == 'p') ADVANCE(928);
      if (lookahead == 'r') ADVANCE(952);
      if (lookahead == 's') ADVANCE(953);
      if (lookahead == 't') ADVANCE(1023);
      if (lookahead == 'u') ADVANCE(1042);
      if (lookahead == 'v') ADVANCE(926);
      if (lookahead == 'x') ADVANCE(1036);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1091);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('k' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(755);
      if (lookahead == '.') ADVANCE(1107);
      if (lookahead == '/') ADVANCE(1103);
      if (lookahead == '<') ADVANCE(628);
      if (lookahead == '@') ADVANCE(1108);
      if (lookahead == 'j') ADVANCE(1053);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(1099);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(1102);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(876);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(658);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(734);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(160);
      if (lookahead == '?') ADVANCE(724);
      if (lookahead == 'a') ADVANCE(305);
      if (lookahead == 'c') ADVANCE(116);
      if (lookahead == 'd') ADVANCE(693);
      if (lookahead == 'e') ADVANCE(370);
      if (lookahead == 'f') ADVANCE(325);
      if (lookahead == 'h') ADVANCE(646);
      if (lookahead == 'i') ADVANCE(418);
      if (lookahead == 'k') ADVANCE(200);
      if (lookahead == 'l') ADVANCE(477);
      if (lookahead == 'm') ADVANCE(117);
      if (lookahead == 'o') ADVANCE(419);
      if (lookahead == 'p') ADVANCE(559);
      if (lookahead == 'r') ADVANCE(201);
      if (lookahead == 's') ADVANCE(202);
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(30);
      END_STATE();
    case 10:
      if (lookahead == '1') ADVANCE(7);
      if (lookahead == 'U') ADVANCE(114);
      END_STATE();
    case 11:
      if (lookahead == '8') ADVANCE(3);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(747);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(1096);
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(746);
      END_STATE();
    case 15:
      if (lookahead == '>') ADVANCE(795);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(793);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(750);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(796);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(804);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(744);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(794);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(742);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(760);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(782);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(836);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(756);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(765);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(837);
      END_STATE();
    case 29:
      if (lookahead == '>') ADVANCE(855);
      END_STATE();
    case 30:
      if (lookahead == '>') ADVANCE(741);
      END_STATE();
    case 31:
      if (lookahead == '>') ADVANCE(774);
      END_STATE();
    case 32:
      if (lookahead == '>') ADVANCE(856);
      END_STATE();
    case 33:
      if (lookahead == '>') ADVANCE(802);
      END_STATE();
    case 34:
      if (lookahead == '>') ADVANCE(740);
      END_STATE();
    case 35:
      if (lookahead == '>') ADVANCE(763);
      END_STATE();
    case 36:
      if (lookahead == '>') ADVANCE(852);
      END_STATE();
    case 37:
      if (lookahead == '>') ADVANCE(842);
      END_STATE();
    case 38:
      if (lookahead == '>') ADVANCE(854);
      END_STATE();
    case 39:
      if (lookahead == '>') ADVANCE(787);
      END_STATE();
    case 40:
      if (lookahead == '>') ADVANCE(843);
      END_STATE();
    case 41:
      if (lookahead == '>') ADVANCE(857);
      END_STATE();
    case 42:
      if (lookahead == '>') ADVANCE(864);
      END_STATE();
    case 43:
      if (lookahead == '>') ADVANCE(846);
      END_STATE();
    case 44:
      if (lookahead == '>') ADVANCE(850);
      END_STATE();
    case 45:
      if (lookahead == '>') ADVANCE(847);
      END_STATE();
    case 46:
      if (lookahead == '>') ADVANCE(851);
      END_STATE();
    case 47:
      if (lookahead == '>') ADVANCE(844);
      END_STATE();
    case 48:
      if (lookahead == '>') ADVANCE(845);
      END_STATE();
    case 49:
      if (lookahead == '>') ADVANCE(838);
      END_STATE();
    case 50:
      if (lookahead == '>') ADVANCE(848);
      END_STATE();
    case 51:
      if (lookahead == '>') ADVANCE(785);
      END_STATE();
    case 52:
      if (lookahead == '>') ADVANCE(839);
      END_STATE();
    case 53:
      if (lookahead == '>') ADVANCE(849);
      END_STATE();
    case 54:
      if (lookahead == '>') ADVANCE(840);
      END_STATE();
    case 55:
      if (lookahead == '>') ADVANCE(841);
      END_STATE();
    case 56:
      if (lookahead == '?') ADVANCE(724);
      if (lookahead == 's') ADVANCE(279);
      END_STATE();
    case 57:
      if (lookahead == 'A') ADVANCE(180);
      END_STATE();
    case 58:
      if (lookahead == 'A') ADVANCE(72);
      END_STATE();
    case 59:
      if (lookahead == 'A') ADVANCE(113);
      if (lookahead == 'O') ADVANCE(105);
      if (lookahead == 'U') ADVANCE(111);
      END_STATE();
    case 60:
      if (lookahead == 'A') ADVANCE(179);
      END_STATE();
    case 61:
      if (lookahead == 'A') ADVANCE(181);
      END_STATE();
    case 62:
      if (lookahead == 'B') ADVANCE(208);
      END_STATE();
    case 63:
      if (lookahead == 'B') ADVANCE(297);
      END_STATE();
    case 64:
      if (lookahead == 'C') ADVANCE(91);
      END_STATE();
    case 65:
      if (lookahead == 'C') ADVANCE(524);
      END_STATE();
    case 66:
      if (lookahead == 'C') ADVANCE(482);
      END_STATE();
    case 67:
      if (lookahead == 'C') ADVANCE(484);
      END_STATE();
    case 68:
      if (lookahead == 'C') ADVANCE(489);
      END_STATE();
    case 69:
      if (lookahead == 'C') ADVANCE(519);
      END_STATE();
    case 70:
      if (lookahead == 'C') ADVANCE(521);
      END_STATE();
    case 71:
      if (lookahead == 'C') ADVANCE(525);
      END_STATE();
    case 72:
      if (lookahead == 'D') ADVANCE(816);
      END_STATE();
    case 73:
      if (lookahead == 'D') ADVANCE(239);
      END_STATE();
    case 74:
      if (lookahead == 'D') ADVANCE(267);
      END_STATE();
    case 75:
      if (lookahead == 'D') ADVANCE(712);
      END_STATE();
    case 76:
      if (lookahead == 'D') ADVANCE(713);
      END_STATE();
    case 77:
      if (lookahead == 'D') ADVANCE(714);
      END_STATE();
    case 78:
      if (lookahead == 'D') ADVANCE(715);
      END_STATE();
    case 79:
      if (lookahead == 'E') ADVANCE(93);
      END_STATE();
    case 80:
      if (lookahead == 'E') ADVANCE(814);
      END_STATE();
    case 81:
      if (lookahead == 'E') ADVANCE(58);
      END_STATE();
    case 82:
      if (lookahead == 'E') ADVANCE(109);
      END_STATE();
    case 83:
      if (lookahead == 'E') ADVANCE(115);
      END_STATE();
    case 84:
      if (lookahead == 'F') ADVANCE(5);
      END_STATE();
    case 85:
      if (lookahead == 'F') ADVANCE(125);
      END_STATE();
    case 86:
      if (lookahead == 'F') ADVANCE(142);
      END_STATE();
    case 87:
      if (lookahead == 'F') ADVANCE(491);
      END_STATE();
    case 88:
      if (lookahead == 'F') ADVANCE(153);
      END_STATE();
    case 89:
      if (lookahead == 'F') ADVANCE(159);
      END_STATE();
    case 90:
      if (lookahead == 'F') ADVANCE(526);
      END_STATE();
    case 91:
      if (lookahead == 'H') ADVANCE(820);
      END_STATE();
    case 92:
      if (lookahead == 'I') ADVANCE(95);
      END_STATE();
    case 93:
      if (lookahead == 'L') ADVANCE(83);
      END_STATE();
    case 94:
      if (lookahead == 'N') ADVANCE(103);
      END_STATE();
    case 95:
      if (lookahead == 'O') ADVANCE(94);
      END_STATE();
    case 96:
      if (lookahead == 'O') ADVANCE(430);
      END_STATE();
    case 97:
      if (lookahead == 'O') ADVANCE(421);
      END_STATE();
    case 98:
      if (lookahead == 'O') ADVANCE(471);
      END_STATE();
    case 99:
      if (lookahead == 'P') ADVANCE(110);
      END_STATE();
    case 100:
      if (lookahead == 'P') ADVANCE(151);
      END_STATE();
    case 101:
      if (lookahead == 'P') ADVANCE(122);
      END_STATE();
    case 102:
      if (lookahead == 'P') ADVANCE(137);
      END_STATE();
    case 103:
      if (lookahead == 'S') ADVANCE(818);
      END_STATE();
    case 104:
      if (lookahead == 'S') ADVANCE(709);
      END_STATE();
    case 105:
      if (lookahead == 'S') ADVANCE(112);
      END_STATE();
    case 106:
      if (lookahead == 'S') ADVANCE(716);
      END_STATE();
    case 107:
      if (lookahead == 'S') ADVANCE(717);
      END_STATE();
    case 108:
      if (lookahead == 'S') ADVANCE(718);
      END_STATE();
    case 109:
      if (lookahead == 'T') ADVANCE(808);
      END_STATE();
    case 110:
      if (lookahead == 'T') ADVANCE(92);
      END_STATE();
    case 111:
      if (lookahead == 'T') ADVANCE(812);
      END_STATE();
    case 112:
      if (lookahead == 'T') ADVANCE(810);
      END_STATE();
    case 113:
      if (lookahead == 'T') ADVANCE(64);
      END_STATE();
    case 114:
      if (lookahead == 'T') ADVANCE(84);
      END_STATE();
    case 115:
      if (lookahead == 'T') ADVANCE(80);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(379);
      if (lookahead == 'o') ADVANCE(403);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(554);
      if (lookahead == 'e') ADVANCE(605);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(392);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(725);
      if (lookahead == 'e') ADVANCE(650);
      if (lookahead == 'i') ADVANCE(424);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(729);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(731);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(651);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(562);
      if (lookahead == 'h') ADVANCE(221);
      if (lookahead == 'i') ADVANCE(407);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(332);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(377);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(540);
      if (lookahead == 'u') ADVANCE(583);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(373);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(393);
      if (lookahead == 'e') ADVANCE(585);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(673);
      if (lookahead == 'o') ADVANCE(611);
      if (lookahead == 'r') ADVANCE(272);
      if (lookahead == 'u') ADVANCE(641);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(375);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(570);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(653);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(654);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(381);
      if (lookahead == 'o') ADVANCE(414);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(408);
      if (lookahead == 'e') ADVANCE(723);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(730);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(169);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(580);
      if (lookahead == 'h') ADVANCE(259);
      if (lookahead == 'i') ADVANCE(411);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(661);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(308);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(663);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(664);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(665);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(666);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(577);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(669);
      END_STATE();
    case 153:
      if (lookahead == 'a') ADVANCE(178);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(684);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(687);
      END_STATE();
    case 156:
      if (lookahead == 'a') ADVANCE(688);
      END_STATE();
    case 157:
      if (lookahead == 'a') ADVANCE(689);
      END_STATE();
    case 158:
      if (lookahead == 'a') ADVANCE(690);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(360);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(315);
      if (lookahead == 'c') ADVANCE(138);
      if (lookahead == 'd') ADVANCE(711);
      if (lookahead == 'e') ADVANCE(390);
      if (lookahead == 'f') ADVANCE(359);
      if (lookahead == 'h') ADVANCE(671);
      if (lookahead == 'i') ADVANCE(474);
      if (lookahead == 'l') ADVANCE(479);
      if (lookahead == 'm') ADVANCE(162);
      if (lookahead == 'o') ADVANCE(472);
      if (lookahead == 'p') ADVANCE(582);
      if (lookahead == 'r') ADVANCE(278);
      if (lookahead == 's') ADVANCE(257);
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(402);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(600);
      END_STATE();
    case 163:
      if (lookahead == 'c') ADVANCE(317);
      END_STATE();
    case 164:
      if (lookahead == 'c') ADVANCE(368);
      END_STATE();
    case 165:
      if (lookahead == 'c') ADVANCE(322);
      END_STATE();
    case 166:
      if (lookahead == 'c') ADVANCE(318);
      END_STATE();
    case 167:
      if (lookahead == 'c') ADVANCE(321);
      END_STATE();
    case 168:
      if (lookahead == 'c') ADVANCE(702);
      if (lookahead == 'f') ADVANCE(704);
      if (lookahead == 'h') ADVANCE(247);
      if (lookahead == 's') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(168)
      END_STATE();
    case 169:
      if (lookahead == 'c') ADVANCE(678);
      END_STATE();
    case 170:
      if (lookahead == 'c') ADVANCE(135);
      END_STATE();
    case 171:
      if (lookahead == 'c') ADVANCE(488);
      if (lookahead == 'd') ADVANCE(541);
      END_STATE();
    case 172:
      if (lookahead == 'c') ADVANCE(206);
      END_STATE();
    case 173:
      if (lookahead == 'c') ADVANCE(251);
      END_STATE();
    case 174:
      if (lookahead == 'c') ADVANCE(217);
      END_STATE();
    case 175:
      if (lookahead == 'c') ADVANCE(218);
      if (lookahead == 't') ADVANCE(343);
      END_STATE();
    case 176:
      if (lookahead == 'c') ADVANCE(219);
      END_STATE();
    case 177:
      if (lookahead == 'c') ADVANCE(256);
      END_STATE();
    case 178:
      if (lookahead == 'c') ADVANCE(680);
      END_STATE();
    case 179:
      if (lookahead == 'c') ADVANCE(681);
      END_STATE();
    case 180:
      if (lookahead == 'c') ADVANCE(685);
      END_STATE();
    case 181:
      if (lookahead == 'c') ADVANCE(686);
      END_STATE();
    case 182:
      if (lookahead == 'd') ADVANCE(743);
      END_STATE();
    case 183:
      if (lookahead == 'd') ADVANCE(9);
      if (lookahead == 's') ADVANCE(205);
      END_STATE();
    case 184:
      if (lookahead == 'd') ADVANCE(96);
      END_STATE();
    case 185:
      if (lookahead == 'd') ADVANCE(880);
      END_STATE();
    case 186:
      if (lookahead == 'd') ADVANCE(830);
      END_STATE();
    case 187:
      if (lookahead == 'd') ADVANCE(806);
      END_STATE();
    case 188:
      if (lookahead == 'd') ADVANCE(860);
      END_STATE();
    case 189:
      if (lookahead == 'd') ADVANCE(770);
      END_STATE();
    case 190:
      if (lookahead == 'd') ADVANCE(529);
      END_STATE();
    case 191:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 192:
      if (lookahead == 'd') ADVANCE(236);
      END_STATE();
    case 193:
      if (lookahead == 'd') ADVANCE(341);
      END_STATE();
    case 194:
      if (lookahead == 'd') ADVANCE(266);
      END_STATE();
    case 195:
      if (lookahead == 'd') ADVANCE(361);
      END_STATE();
    case 196:
      if (lookahead == 'd') ADVANCE(339);
      END_STATE();
    case 197:
      if (lookahead == 'd') ADVANCE(250);
      END_STATE();
    case 198:
      if (lookahead == 'd') ADVANCE(538);
      END_STATE();
    case 199:
      if (lookahead == 'd') ADVANCE(98);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(727);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(616);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(429);
      if (lookahead == 'u') ADVANCE(606);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(721);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(764);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(738);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(762);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(299);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(786);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(805);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(551);
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(878);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(868);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(870);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(872);
      END_STATE();
    case 216:
      if (lookahead == 'e') ADVANCE(828);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(797);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(752);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(737);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(886);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(433);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(720);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(726);
      END_STATE();
    case 225:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 226:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(431);
      END_STATE();
    case 228:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(601);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(637);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(655);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(480);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(399);
      END_STATE();
    case 236:
      if (lookahead == 'e') ADVANCE(612);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(556);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(565);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(382);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(568);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(460);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(640);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(374);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(558);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(425);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(584);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(569);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(432);
      if (lookahead == 'u') ADVANCE(635);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(438);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(609);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(579);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(409);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(459);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(614);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(462);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(309);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(621);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(682);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(446);
      END_STATE();
    case 275:
      if (lookahead == 'e') ADVANCE(667);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(668);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(670);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(619);
      END_STATE();
    case 279:
      if (lookahead == 'e') ADVANCE(552);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(518);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(623);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(587);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(465);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 285:
      if (lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(683);
      END_STATE();
    case 287:
      if (lookahead == 'e') ADVANCE(553);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(398);
      if (lookahead == 'i') ADVANCE(608);
      END_STATE();
    case 289:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(468);
      END_STATE();
    case 291:
      if (lookahead == 'e') ADVANCE(630);
      END_STATE();
    case 292:
      if (lookahead == 'e') ADVANCE(469);
      END_STATE();
    case 293:
      if (lookahead == 'e') ADVANCE(470);
      END_STATE();
    case 294:
      if (lookahead == 'e') ADVANCE(473);
      END_STATE();
    case 295:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 296:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 297:
      if (lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 298:
      if (lookahead == 'e') ADVANCE(636);
      END_STATE();
    case 299:
      if (lookahead == 'f') ADVANCE(506);
      END_STATE();
    case 300:
      if (lookahead == 'f') ADVANCE(527);
      END_STATE();
    case 301:
      if (lookahead == 'g') ADVANCE(745);
      END_STATE();
    case 302:
      if (lookahead == 'g') ADVANCE(866);
      END_STATE();
    case 303:
      if (lookahead == 'g') ADVANCE(1100);
      END_STATE();
    case 304:
      if (lookahead == 'g') ADVANCE(14);
      END_STATE();
    case 305:
      if (lookahead == 'g') ADVANCE(310);
      END_STATE();
    case 306:
      if (lookahead == 'g') ADVANCE(232);
      END_STATE();
    case 307:
      if (lookahead == 'g') ADVANCE(233);
      END_STATE();
    case 308:
      if (lookahead == 'g') ADVANCE(268);
      END_STATE();
    case 309:
      if (lookahead == 'g') ADVANCE(224);
      END_STATE();
    case 310:
      if (lookahead == 'g') ADVANCE(566);
      END_STATE();
    case 311:
      if (lookahead == 'g') ADVANCE(571);
      if (lookahead == 'p') ADVANCE(238);
      END_STATE();
    case 312:
      if (lookahead == 'g') ADVANCE(148);
      END_STATE();
    case 313:
      if (lookahead == 'g') ADVANCE(150);
      END_STATE();
    case 314:
      if (lookahead == 'g') ADVANCE(589);
      END_STATE();
    case 315:
      if (lookahead == 'g') ADVANCE(314);
      END_STATE();
    case 316:
      if (lookahead == 'g') ADVANCE(597);
      END_STATE();
    case 317:
      if (lookahead == 'h') ADVANCE(751);
      END_STATE();
    case 318:
      if (lookahead == 'h') ADVANCE(834);
      END_STATE();
    case 319:
      if (lookahead == 'h') ADVANCE(758);
      END_STATE();
    case 320:
      if (lookahead == 'h') ADVANCE(772);
      END_STATE();
    case 321:
      if (lookahead == 'h') ADVANCE(102);
      END_STATE();
    case 322:
      if (lookahead == 'h') ADVANCE(26);
      END_STATE();
    case 323:
      if (lookahead == 'h') ADVANCE(490);
      END_STATE();
    case 324:
      if (lookahead == 'i') ADVANCE(6);
      END_STATE();
    case 325:
      if (lookahead == 'i') ADVANCE(378);
      if (lookahead == 'o') ADVANCE(563);
      END_STATE();
    case 326:
      if (lookahead == 'i') ADVANCE(648);
      END_STATE();
    case 327:
      if (lookahead == 'i') ADVANCE(405);
      END_STATE();
    case 328:
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 329:
      if (lookahead == 'i') ADVANCE(439);
      END_STATE();
    case 330:
      if (lookahead == 'i') ADVANCE(463);
      END_STATE();
    case 331:
      if (lookahead == 'i') ADVANCE(501);
      END_STATE();
    case 332:
      if (lookahead == 'i') ADVANCE(389);
      END_STATE();
    case 333:
      if (lookahead == 'i') ADVANCE(499);
      END_STATE();
    case 334:
      if (lookahead == 'i') ADVANCE(492);
      END_STATE();
    case 335:
      if (lookahead == 'i') ADVANCE(464);
      END_STATE();
    case 336:
      if (lookahead == 'i') ADVANCE(436);
      END_STATE();
    case 337:
      if (lookahead == 'i') ADVANCE(229);
      if (lookahead == 'y') ADVANCE(73);
      END_STATE();
    case 338:
      if (lookahead == 'i') ADVANCE(494);
      END_STATE();
    case 339:
      if (lookahead == 'i') ADVANCE(437);
      END_STATE();
    case 340:
      if (lookahead == 'i') ADVANCE(495);
      END_STATE();
    case 341:
      if (lookahead == 'i') ADVANCE(675);
      END_STATE();
    case 342:
      if (lookahead == 'i') ADVANCE(496);
      END_STATE();
    case 343:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 344:
      if (lookahead == 'i') ADVANCE(497);
      END_STATE();
    case 345:
      if (lookahead == 'i') ADVANCE(445);
      END_STATE();
    case 346:
      if (lookahead == 'i') ADVANCE(410);
      END_STATE();
    case 347:
      if (lookahead == 'i') ADVANCE(504);
      END_STATE();
    case 348:
      if (lookahead == 'i') ADVANCE(505);
      END_STATE();
    case 349:
      if (lookahead == 'i') ADVANCE(507);
      END_STATE();
    case 350:
      if (lookahead == 'i') ADVANCE(508);
      END_STATE();
    case 351:
      if (lookahead == 'i') ADVANCE(509);
      END_STATE();
    case 352:
      if (lookahead == 'i') ADVANCE(510);
      END_STATE();
    case 353:
      if (lookahead == 'i') ADVANCE(511);
      END_STATE();
    case 354:
      if (lookahead == 'i') ADVANCE(512);
      END_STATE();
    case 355:
      if (lookahead == 'i') ADVANCE(513);
      END_STATE();
    case 356:
      if (lookahead == 'i') ADVANCE(514);
      END_STATE();
    case 357:
      if (lookahead == 'i') ADVANCE(515);
      END_STATE();
    case 358:
      if (lookahead == 'i') ADVANCE(516);
      END_STATE();
    case 359:
      if (lookahead == 'i') ADVANCE(394);
      if (lookahead == 'o') ADVANCE(581);
      END_STATE();
    case 360:
      if (lookahead == 'i') ADVANCE(396);
      END_STATE();
    case 361:
      if (lookahead == 'i') ADVANCE(691);
      END_STATE();
    case 362:
      if (lookahead == 'i') ADVANCE(523);
      END_STATE();
    case 363:
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 364:
      if (lookahead == 'i') ADVANCE(692);
      END_STATE();
    case 365:
      if (lookahead == 'i') ADVANCE(417);
      END_STATE();
    case 366:
      if (lookahead == 'i') ADVANCE(298);
      if (lookahead == 'y') ADVANCE(74);
      END_STATE();
    case 367:
      if (lookahead == 'k') ADVANCE(87);
      END_STATE();
    case 368:
      if (lookahead == 'k') ADVANCE(336);
      END_STATE();
    case 369:
      if (lookahead == 'k') ADVANCE(90);
      END_STATE();
    case 370:
      if (lookahead == 'l') ADVANCE(607);
      if (lookahead == 'n') ADVANCE(190);
      if (lookahead == 'r') ADVANCE(561);
      END_STATE();
    case 371:
      if (lookahead == 'l') ADVANCE(1095);
      END_STATE();
    case 372:
      if (lookahead == 'l') ADVANCE(749);
      END_STATE();
    case 373:
      if (lookahead == 'l') ADVANCE(4);
      END_STATE();
    case 374:
      if (lookahead == 'l') ADVANCE(882);
      END_STATE();
    case 375:
      if (lookahead == 'l') ADVANCE(766);
      END_STATE();
    case 376:
      if (lookahead == 'l') ADVANCE(884);
      END_STATE();
    case 377:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 378:
      if (lookahead == 'l') ADVANCE(672);
      END_STATE();
    case 379:
      if (lookahead == 'l') ADVANCE(372);
      END_STATE();
    case 380:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 381:
      if (lookahead == 'l') ADVANCE(380);
      END_STATE();
    case 382:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 383:
      if (lookahead == 'l') ADVANCE(481);
      END_STATE();
    case 384:
      if (lookahead == 'l') ADVANCE(376);
      END_STATE();
    case 385:
      if (lookahead == 'l') ADVANCE(273);
      END_STATE();
    case 386:
      if (lookahead == 'l') ADVANCE(643);
      END_STATE();
    case 387:
      if (lookahead == 'l') ADVANCE(493);
      END_STATE();
    case 388:
      if (lookahead == 'l') ADVANCE(220);
      END_STATE();
    case 389:
      if (lookahead == 'l') ADVANCE(707);
      END_STATE();
    case 390:
      if (lookahead == 'l') ADVANCE(610);
      if (lookahead == 'n') ADVANCE(198);
      if (lookahead == 'r') ADVANCE(592);
      END_STATE();
    case 391:
      if (lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 392:
      if (lookahead == 'l') ADVANCE(615);
      if (lookahead == 'u') ADVANCE(386);
      END_STATE();
    case 393:
      if (lookahead == 'l') ADVANCE(698);
      END_STATE();
    case 394:
      if (lookahead == 'l') ADVANCE(677);
      END_STATE();
    case 395:
      if (lookahead == 'l') ADVANCE(275);
      END_STATE();
    case 396:
      if (lookahead == 'l') ADVANCE(708);
      END_STATE();
    case 397:
      if (lookahead == 'l') ADVANCE(276);
      END_STATE();
    case 398:
      if (lookahead == 'l') ADVANCE(277);
      END_STATE();
    case 399:
      if (lookahead == 'l') ADVANCE(149);
      END_STATE();
    case 400:
      if (lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 401:
      if (lookahead == 'l') ADVANCE(286);
      END_STATE();
    case 402:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 403:
      if (lookahead == 'm') ADVANCE(531);
      if (lookahead == 'r') ADVANCE(567);
      END_STATE();
    case 404:
      if (lookahead == 'm') ADVANCE(888);
      END_STATE();
    case 405:
      if (lookahead == 'm') ADVANCE(694);
      END_STATE();
    case 406:
      if (lookahead == 'm') ADVANCE(371);
      END_STATE();
    case 407:
      if (lookahead == 'm') ADVANCE(234);
      END_STATE();
    case 408:
      if (lookahead == 'm') ADVANCE(212);
      END_STATE();
    case 409:
      if (lookahead == 'm') ADVANCE(543);
      END_STATE();
    case 410:
      if (lookahead == 'm') ADVANCE(536);
      END_STATE();
    case 411:
      if (lookahead == 'm') ADVANCE(280);
      END_STATE();
    case 412:
      if (lookahead == 'm') ADVANCE(542);
      END_STATE();
    case 413:
      if (lookahead == 'm') ADVANCE(545);
      END_STATE();
    case 414:
      if (lookahead == 'm') ADVANCE(546);
      END_STATE();
    case 415:
      if (lookahead == 'm') ADVANCE(76);
      END_STATE();
    case 416:
      if (lookahead == 'm') ADVANCE(78);
      END_STATE();
    case 417:
      if (lookahead == 'm') ADVANCE(719);
      END_STATE();
    case 418:
      if (lookahead == 'n') ADVANCE(326);
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 419:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 420:
      if (lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 421:
      if (lookahead == 'n') ADVANCE(783);
      END_STATE();
    case 422:
      if (lookahead == 'n') ADVANCE(784);
      END_STATE();
    case 423:
      if (lookahead == 'n') ADVANCE(171);
      if (lookahead == 'x') ADVANCE(544);
      END_STATE();
    case 424:
      if (lookahead == 'n') ADVANCE(789);
      END_STATE();
    case 425:
      if (lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 426:
      if (lookahead == 'n') ADVANCE(1097);
      END_STATE();
    case 427:
      if (lookahead == 'n') ADVANCE(874);
      END_STATE();
    case 428:
      if (lookahead == 'n') ADVANCE(778);
      END_STATE();
    case 429:
      if (lookahead == 'n') ADVANCE(182);
      if (lookahead == 'q') ADVANCE(695);
      END_STATE();
    case 430:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 431:
      if (lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 432:
      if (lookahead == 'n') ADVANCE(191);
      if (lookahead == 'q') ADVANCE(703);
      END_STATE();
    case 433:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 434:
      if (lookahead == 'n') ADVANCE(184);
      END_STATE();
    case 435:
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 436:
      if (lookahead == 'n') ADVANCE(302);
      END_STATE();
    case 437:
      if (lookahead == 'n') ADVANCE(303);
      END_STATE();
    case 438:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 439:
      if (lookahead == 'n') ADVANCE(638);
      END_STATE();
    case 440:
      if (lookahead == 'n') ADVANCE(639);
      END_STATE();
    case 441:
      if (lookahead == 'n') ADVANCE(602);
      END_STATE();
    case 442:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 443:
      if (lookahead == 'n') ADVANCE(676);
      END_STATE();
    case 444:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 445:
      if (lookahead == 'n') ADVANCE(644);
      END_STATE();
    case 446:
      if (lookahead == 'n') ADVANCE(645);
      END_STATE();
    case 447:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 448:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 449:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 450:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 451:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 452:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 453:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 454:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 455:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 456:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 457:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 458:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 459:
      if (lookahead == 'n') ADVANCE(173);
      END_STATE();
    case 460:
      if (lookahead == 'n') ADVANCE(624);
      END_STATE();
    case 461:
      if (lookahead == 'n') ADVANCE(631);
      END_STATE();
    case 462:
      if (lookahead == 'n') ADVANCE(176);
      END_STATE();
    case 463:
      if (lookahead == 'n') ADVANCE(660);
      END_STATE();
    case 464:
      if (lookahead == 'n') ADVANCE(699);
      END_STATE();
    case 465:
      if (lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 466:
      if (lookahead == 'n') ADVANCE(195);
      END_STATE();
    case 467:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 468:
      if (lookahead == 'n') ADVANCE(625);
      END_STATE();
    case 469:
      if (lookahead == 'n') ADVANCE(626);
      END_STATE();
    case 470:
      if (lookahead == 'n') ADVANCE(627);
      END_STATE();
    case 471:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 472:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 473:
      if (lookahead == 'n') ADVANCE(199);
      END_STATE();
    case 474:
      if (lookahead == 'n') ADVANCE(364);
      if (lookahead == 't') ADVANCE(282);
      END_STATE();
    case 475:
      if (lookahead == 'o') ADVANCE(311);
      END_STATE();
    case 476:
      if (lookahead == 'o') ADVANCE(776);
      if (lookahead == 'r') ADVANCE(696);
      END_STATE();
    case 477:
      if (lookahead == 'o') ADVANCE(301);
      END_STATE();
    case 478:
      if (lookahead == 'o') ADVANCE(420);
      END_STATE();
    case 479:
      if (lookahead == 'o') ADVANCE(304);
      END_STATE();
    case 480:
      if (lookahead == 'o') ADVANCE(700);
      END_STATE();
    case 481:
      if (lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 482:
      if (lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 483:
      if (lookahead == 'o') ADVANCE(329);
      END_STATE();
    case 484:
      if (lookahead == 'o') ADVANCE(701);
      END_STATE();
    case 485:
      if (lookahead == 'o') ADVANCE(461);
      END_STATE();
    case 486:
      if (lookahead == 'o') ADVANCE(404);
      END_STATE();
    case 487:
      if (lookahead == 'o') ADVANCE(578);
      END_STATE();
    case 488:
      if (lookahead == 'o') ADVANCE(196);
      END_STATE();
    case 489:
      if (lookahead == 'o') ADVANCE(435);
      END_STATE();
    case 490:
      if (lookahead == 'o') ADVANCE(187);
      END_STATE();
    case 491:
      if (lookahead == 'o') ADVANCE(557);
      END_STATE();
    case 492:
      if (lookahead == 'o') ADVANCE(422);
      END_STATE();
    case 493:
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 494:
      if (lookahead == 'o') ADVANCE(441);
      END_STATE();
    case 495:
      if (lookahead == 'o') ADVANCE(426);
      END_STATE();
    case 496:
      if (lookahead == 'o') ADVANCE(427);
      END_STATE();
    case 497:
      if (lookahead == 'o') ADVANCE(428);
      END_STATE();
    case 498:
      if (lookahead == 'o') ADVANCE(330);
      END_STATE();
    case 499:
      if (lookahead == 'o') ADVANCE(458);
      END_STATE();
    case 500:
      if (lookahead == 'o') ADVANCE(573);
      END_STATE();
    case 501:
      if (lookahead == 'o') ADVANCE(442);
      END_STATE();
    case 502:
      if (lookahead == 'o') ADVANCE(443);
      END_STATE();
    case 503:
      if (lookahead == 'o') ADVANCE(576);
      END_STATE();
    case 504:
      if (lookahead == 'o') ADVANCE(444);
      END_STATE();
    case 505:
      if (lookahead == 'o') ADVANCE(447);
      END_STATE();
    case 506:
      if (lookahead == 'o') ADVANCE(572);
      END_STATE();
    case 507:
      if (lookahead == 'o') ADVANCE(448);
      END_STATE();
    case 508:
      if (lookahead == 'o') ADVANCE(449);
      END_STATE();
    case 509:
      if (lookahead == 'o') ADVANCE(450);
      END_STATE();
    case 510:
      if (lookahead == 'o') ADVANCE(451);
      END_STATE();
    case 511:
      if (lookahead == 'o') ADVANCE(452);
      END_STATE();
    case 512:
      if (lookahead == 'o') ADVANCE(453);
      END_STATE();
    case 513:
      if (lookahead == 'o') ADVANCE(454);
      END_STATE();
    case 514:
      if (lookahead == 'o') ADVANCE(455);
      END_STATE();
    case 515:
      if (lookahead == 'o') ADVANCE(456);
      END_STATE();
    case 516:
      if (lookahead == 'o') ADVANCE(457);
      END_STATE();
    case 517:
      if (lookahead == 'o') ADVANCE(316);
      END_STATE();
    case 518:
      if (lookahead == 'o') ADVANCE(705);
      END_STATE();
    case 519:
      if (lookahead == 'o') ADVANCE(194);
      END_STATE();
    case 520:
      if (lookahead == 'o') ADVANCE(345);
      END_STATE();
    case 521:
      if (lookahead == 'o') ADVANCE(466);
      END_STATE();
    case 522:
      if (lookahead == 'o') ADVANCE(586);
      END_STATE();
    case 523:
      if (lookahead == 'o') ADVANCE(467);
      END_STATE();
    case 524:
      if (lookahead == 'o') ADVANCE(412);
      END_STATE();
    case 525:
      if (lookahead == 'o') ADVANCE(413);
      END_STATE();
    case 526:
      if (lookahead == 'o') ADVANCE(598);
      END_STATE();
    case 527:
      if (lookahead == 'o') ADVANCE(599);
      END_STATE();
    case 528:
      if (lookahead == 'p') ADVANCE(803);
      END_STATE();
    case 529:
      if (lookahead == 'p') ADVANCE(483);
      END_STATE();
    case 530:
      if (lookahead == 'p') ADVANCE(478);
      END_STATE();
    case 531:
      if (lookahead == 'p') ADVANCE(385);
      END_STATE();
    case 532:
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 533:
      if (lookahead == 'p') ADVANCE(485);
      END_STATE();
    case 534:
      if (lookahead == 'p') ADVANCE(228);
      END_STATE();
    case 535:
      if (lookahead == 'p') ADVANCE(242);
      END_STATE();
    case 536:
      if (lookahead == 'p') ADVANCE(388);
      END_STATE();
    case 537:
      if (lookahead == 'p') ADVANCE(136);
      END_STATE();
    case 538:
      if (lookahead == 'p') ADVANCE(498);
      END_STATE();
    case 539:
      if (lookahead == 'p') ADVANCE(679);
      END_STATE();
    case 540:
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 541:
      if (lookahead == 'p') ADVANCE(520);
      END_STATE();
    case 542:
      if (lookahead == 'p') ADVANCE(395);
      END_STATE();
    case 543:
      if (lookahead == 'p') ADVANCE(400);
      END_STATE();
    case 544:
      if (lookahead == 'p') ADVANCE(590);
      END_STATE();
    case 545:
      if (lookahead == 'p') ADVANCE(397);
      END_STATE();
    case 546:
      if (lookahead == 'p') ADVANCE(401);
      END_STATE();
    case 547:
      if (lookahead == 'p') ADVANCE(290);
      END_STATE();
    case 548:
      if (lookahead == 'p') ADVANCE(292);
      END_STATE();
    case 549:
      if (lookahead == 'p') ADVANCE(293);
      END_STATE();
    case 550:
      if (lookahead == 'p') ADVANCE(294);
      END_STATE();
    case 551:
      if (lookahead == 'q') ADVANCE(697);
      END_STATE();
    case 552:
      if (lookahead == 'q') ADVANCE(706);
      END_STATE();
    case 553:
      if (lookahead == 'q') ADVANCE(710);
      END_STATE();
    case 554:
      if (lookahead == 'r') ADVANCE(367);
      if (lookahead == 'x') ADVANCE(327);
      END_STATE();
    case 555:
      if (lookahead == 'r') ADVANCE(337);
      END_STATE();
    case 556:
      if (lookahead == 'r') ADVANCE(757);
      END_STATE();
    case 557:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 558:
      if (lookahead == 'r') ADVANCE(858);
      END_STATE();
    case 559:
      if (lookahead == 'r') ADVANCE(475);
      END_STATE();
    case 560:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 561:
      if (lookahead == 'r') ADVANCE(487);
      END_STATE();
    case 562:
      if (lookahead == 'r') ADVANCE(306);
      END_STATE();
    case 563:
      if (lookahead == 'r') ADVANCE(225);
      END_STATE();
    case 564:
      if (lookahead == 'r') ADVANCE(324);
      END_STATE();
    case 565:
      if (lookahead == 'r') ADVANCE(647);
      END_STATE();
    case 566:
      if (lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 567:
      if (lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 568:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 569:
      if (lookahead == 'r') ADVANCE(603);
      END_STATE();
    case 570:
      if (lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 571:
      if (lookahead == 'r') ADVANCE(260);
      END_STATE();
    case 572:
      if (lookahead == 'r') ADVANCE(295);
      END_STATE();
    case 573:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 574:
      if (lookahead == 'r') ADVANCE(254);
      END_STATE();
    case 575:
      if (lookahead == 'r') ADVANCE(255);
      END_STATE();
    case 576:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 577:
      if (lookahead == 'r') ADVANCE(274);
      END_STATE();
    case 578:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 579:
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 580:
      if (lookahead == 'r') ADVANCE(307);
      END_STATE();
    case 581:
      if (lookahead == 'r') ADVANCE(262);
      END_STATE();
    case 582:
      if (lookahead == 'r') ADVANCE(517);
      END_STATE();
    case 583:
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 584:
      if (lookahead == 'r') ADVANCE(722);
      END_STATE();
    case 585:
      if (lookahead == 'r') ADVANCE(620);
      END_STATE();
    case 586:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 587:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 588:
      if (lookahead == 'r') ADVANCE(366);
      END_STATE();
    case 589:
      if (lookahead == 'r') ADVANCE(285);
      END_STATE();
    case 590:
      if (lookahead == 'r') ADVANCE(281);
      END_STATE();
    case 591:
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 592:
      if (lookahead == 'r') ADVANCE(522);
      END_STATE();
    case 593:
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 594:
      if (lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 595:
      if (lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 596:
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 597:
      if (lookahead == 'r') ADVANCE(291);
      END_STATE();
    case 598:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 599:
      if (lookahead == 'r') ADVANCE(296);
      END_STATE();
    case 600:
      if (lookahead == 'r') ADVANCE(369);
      if (lookahead == 'x') ADVANCE(365);
      END_STATE();
    case 601:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 602:
      if (lookahead == 's') ADVANCE(832);
      END_STATE();
    case 603:
      if (lookahead == 's') ADVANCE(890);
      END_STATE();
    case 604:
      if (lookahead == 's') ADVANCE(145);
      END_STATE();
    case 605:
      if (lookahead == 's') ADVANCE(604);
      END_STATE();
    case 606:
      if (lookahead == 's') ADVANCE(534);
      END_STATE();
    case 607:
      if (lookahead == 's') ADVANCE(223);
      END_STATE();
    case 608:
      if (lookahead == 's') ADVANCE(170);
      END_STATE();
    case 609:
      if (lookahead == 's') ADVANCE(617);
      END_STATE();
    case 610:
      if (lookahead == 's') ADVANCE(230);
      END_STATE();
    case 611:
      if (lookahead == 's') ADVANCE(642);
      END_STATE();
    case 612:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 613:
      if (lookahead == 's') ADVANCE(662);
      END_STATE();
    case 614:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 615:
      if (lookahead == 's') ADVANCE(214);
      END_STATE();
    case 616:
      if (lookahead == 's') ADVANCE(530);
      if (lookahead == 't') ADVANCE(555);
      END_STATE();
    case 617:
      if (lookahead == 's') ADVANCE(333);
      END_STATE();
    case 618:
      if (lookahead == 's') ADVANCE(535);
      END_STATE();
    case 619:
      if (lookahead == 's') ADVANCE(533);
      if (lookahead == 't') ADVANCE(588);
      END_STATE();
    case 620:
      if (lookahead == 's') ADVANCE(340);
      END_STATE();
    case 621:
      if (lookahead == 's') ADVANCE(249);
      END_STATE();
    case 622:
      if (lookahead == 's') ADVANCE(342);
      END_STATE();
    case 623:
      if (lookahead == 's') ADVANCE(622);
      END_STATE();
    case 624:
      if (lookahead == 's') ADVANCE(354);
      END_STATE();
    case 625:
      if (lookahead == 's') ADVANCE(356);
      END_STATE();
    case 626:
      if (lookahead == 's') ADVANCE(357);
      END_STATE();
    case 627:
      if (lookahead == 's') ADVANCE(358);
      END_STATE();
    case 628:
      if (lookahead == 's') ADVANCE(287);
      END_STATE();
    case 629:
      if (lookahead == 's') ADVANCE(362);
      END_STATE();
    case 630:
      if (lookahead == 's') ADVANCE(629);
      END_STATE();
    case 631:
      if (lookahead == 's') ADVANCE(289);
      END_STATE();
    case 632:
      if (lookahead == 's') ADVANCE(547);
      END_STATE();
    case 633:
      if (lookahead == 's') ADVANCE(548);
      END_STATE();
    case 634:
      if (lookahead == 's') ADVANCE(549);
      END_STATE();
    case 635:
      if (lookahead == 's') ADVANCE(550);
      END_STATE();
    case 636:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 637:
      if (lookahead == 't') ADVANCE(775);
      END_STATE();
    case 638:
      if (lookahead == 't') ADVANCE(801);
      END_STATE();
    case 639:
      if (lookahead == 't') ADVANCE(788);
      END_STATE();
    case 640:
      if (lookahead == 't') ADVANCE(822);
      END_STATE();
    case 641:
      if (lookahead == 't') ADVANCE(826);
      END_STATE();
    case 642:
      if (lookahead == 't') ADVANCE(824);
      END_STATE();
    case 643:
      if (lookahead == 't') ADVANCE(862);
      END_STATE();
    case 644:
      if (lookahead == 't') ADVANCE(780);
      END_STATE();
    case 645:
      if (lookahead == 't') ADVANCE(768);
      END_STATE();
    case 646:
      if (lookahead == 't') ADVANCE(649);
      END_STATE();
    case 647:
      if (lookahead == 't') ADVANCE(728);
      END_STATE();
    case 648:
      if (lookahead == 't') ADVANCE(328);
      END_STATE();
    case 649:
      if (lookahead == 't') ADVANCE(528);
      END_STATE();
    case 650:
      if (lookahead == 't') ADVANCE(323);
      END_STATE();
    case 651:
      if (lookahead == 't') ADVANCE(331);
      END_STATE();
    case 652:
      if (lookahead == 't') ADVANCE(532);
      END_STATE();
    case 653:
      if (lookahead == 't') ADVANCE(319);
      END_STATE();
    case 654:
      if (lookahead == 't') ADVANCE(320);
      END_STATE();
    case 655:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 656:
      if (lookahead == 't') ADVANCE(674);
      END_STATE();
    case 657:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 658:
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 659:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 660:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 661:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 662:
      if (lookahead == 't') ADVANCE(486);
      END_STATE();
    case 663:
      if (lookahead == 't') ADVANCE(245);
      END_STATE();
    case 664:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 665:
      if (lookahead == 't') ADVANCE(258);
      END_STATE();
    case 666:
      if (lookahead == 't') ADVANCE(252);
      END_STATE();
    case 667:
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 668:
      if (lookahead == 't') ADVANCE(253);
      END_STATE();
    case 669:
      if (lookahead == 't') ADVANCE(210);
      END_STATE();
    case 670:
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 671:
      if (lookahead == 't') ADVANCE(652);
      END_STATE();
    case 672:
      if (lookahead == 't') ADVANCE(237);
      END_STATE();
    case 673:
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 674:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 675:
      if (lookahead == 't') ADVANCE(334);
      END_STATE();
    case 676:
      if (lookahead == 't') ADVANCE(335);
      END_STATE();
    case 677:
      if (lookahead == 't') ADVANCE(240);
      END_STATE();
    case 678:
      if (lookahead == 't') ADVANCE(500);
      END_STATE();
    case 679:
      if (lookahead == 't') ADVANCE(338);
      END_STATE();
    case 680:
      if (lookahead == 't') ADVANCE(503);
      END_STATE();
    case 681:
      if (lookahead == 't') ADVANCE(344);
      END_STATE();
    case 682:
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 683:
      if (lookahead == 't') ADVANCE(284);
      END_STATE();
    case 684:
      if (lookahead == 't') ADVANCE(347);
      END_STATE();
    case 685:
      if (lookahead == 't') ADVANCE(348);
      END_STATE();
    case 686:
      if (lookahead == 't') ADVANCE(349);
      END_STATE();
    case 687:
      if (lookahead == 't') ADVANCE(350);
      END_STATE();
    case 688:
      if (lookahead == 't') ADVANCE(351);
      END_STATE();
    case 689:
      if (lookahead == 't') ADVANCE(352);
      END_STATE();
    case 690:
      if (lookahead == 't') ADVANCE(353);
      END_STATE();
    case 691:
      if (lookahead == 't') ADVANCE(355);
      END_STATE();
    case 692:
      if (lookahead == 't') ADVANCE(363);
      END_STATE();
    case 693:
      if (lookahead == 'u') ADVANCE(560);
      END_STATE();
    case 694:
      if (lookahead == 'u') ADVANCE(415);
      END_STATE();
    case 695:
      if (lookahead == 'u') ADVANCE(227);
      END_STATE();
    case 696:
      if (lookahead == 'u') ADVANCE(213);
      END_STATE();
    case 697:
      if (lookahead == 'u') ADVANCE(248);
      END_STATE();
    case 698:
      if (lookahead == 'u') ADVANCE(215);
      END_STATE();
    case 699:
      if (lookahead == 'u') ADVANCE(226);
      END_STATE();
    case 700:
      if (lookahead == 'u') ADVANCE(657);
      END_STATE();
    case 701:
      if (lookahead == 'u') ADVANCE(440);
      END_STATE();
    case 702:
      if (lookahead == 'u') ADVANCE(613);
      END_STATE();
    case 703:
      if (lookahead == 'u') ADVANCE(265);
      END_STATE();
    case 704:
      if (lookahead == 'u') ADVANCE(384);
      END_STATE();
    case 705:
      if (lookahead == 'u') ADVANCE(659);
      END_STATE();
    case 706:
      if (lookahead == 'u') ADVANCE(269);
      END_STATE();
    case 707:
      if (lookahead == 'u') ADVANCE(574);
      END_STATE();
    case 708:
      if (lookahead == 'u') ADVANCE(575);
      END_STATE();
    case 709:
      if (lookahead == 'u') ADVANCE(618);
      END_STATE();
    case 710:
      if (lookahead == 'u') ADVANCE(283);
      END_STATE();
    case 711:
      if (lookahead == 'u') ADVANCE(591);
      END_STATE();
    case 712:
      if (lookahead == 'u') ADVANCE(593);
      END_STATE();
    case 713:
      if (lookahead == 'u') ADVANCE(594);
      END_STATE();
    case 714:
      if (lookahead == 'u') ADVANCE(595);
      END_STATE();
    case 715:
      if (lookahead == 'u') ADVANCE(596);
      END_STATE();
    case 716:
      if (lookahead == 'u') ADVANCE(632);
      END_STATE();
    case 717:
      if (lookahead == 'u') ADVANCE(633);
      END_STATE();
    case 718:
      if (lookahead == 'u') ADVANCE(634);
      END_STATE();
    case 719:
      if (lookahead == 'u') ADVANCE(416);
      END_STATE();
    case 720:
      if (lookahead == 'v') ADVANCE(244);
      END_STATE();
    case 721:
      if (lookahead == 'v') ADVANCE(129);
      END_STATE();
    case 722:
      if (lookahead == 'v') ADVANCE(264);
      END_STATE();
    case 723:
      if (lookahead == 'v') ADVANCE(246);
      END_STATE();
    case 724:
      if (lookahead == 'x') ADVANCE(406);
      END_STATE();
    case 725:
      if (lookahead == 'x') ADVANCE(791);
      END_STATE();
    case 726:
      if (lookahead == 'x') ADVANCE(799);
      END_STATE();
    case 727:
      if (lookahead == 'y') ADVANCE(865);
      END_STATE();
    case 728:
      if (lookahead == 'y') ADVANCE(748);
      END_STATE();
    case 729:
      if (lookahead == 'y') ADVANCE(37);
      END_STATE();
    case 730:
      if (lookahead == 'y') ADVANCE(40);
      END_STATE();
    case 731:
      if (lookahead == 'y') ADVANCE(387);
      END_STATE();
    case 732:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1092);
      END_STATE();
    case 733:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1090);
      END_STATE();
    case 734:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      END_STATE();
    case 735:
      if (eof) ADVANCE(736);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == '>') ADVANCE(739);
      if (lookahead == '?') ADVANCE(13);
      if (lookahead == 'D') ADVANCE(79);
      if (lookahead == 'G') ADVANCE(82);
      if (lookahead == 'H') ADVANCE(81);
      if (lookahead == 'O') ADVANCE(99);
      if (lookahead == 'P') ADVANCE(59);
      if (lookahead == 'a') ADVANCE(656);
      if (lookahead == 'b') ADVANCE(383);
      if (lookahead == 'c') ADVANCE(502);
      if (lookahead == 'd') ADVANCE(288);
      if (lookahead == 'e') ADVANCE(423);
      if (lookahead == 'f') ADVANCE(119);
      if (lookahead == 'g') ADVANCE(243);
      if (lookahead == 'h') ADVANCE(241);
      if (lookahead == 'i') ADVANCE(185);
      if (lookahead == 'l') ADVANCE(222);
      if (lookahead == 'm') ADVANCE(120);
      if (lookahead == 'n') ADVANCE(140);
      if (lookahead == 'o') ADVANCE(539);
      if (lookahead == 'p') ADVANCE(133);
      if (lookahead == 'r') ADVANCE(271);
      if (lookahead == 's') ADVANCE(211);
      if (lookahead == 't') ADVANCE(476);
      if (lookahead == 'u') ADVANCE(564);
      if (lookahead == 'v') ADVANCE(131);
      if (lookahead == 'x') ADVANCE(537);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(735)
      END_STATE();
    case 736:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_LTsequence);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_LTsequence);
      if (lookahead == '>') ADVANCE(774);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_LT_SLASHsequence_GT);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_LTrespond_SLASH_GT);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_LTsend_SLASH_GT);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_LTsend);
      if (lookahead == '/') ADVANCE(22);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_LT_SLASHsend_GT);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_LTlog);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_LT_SLASHlog_GT);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_LTproperty);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_LTcall);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_LT_SLASHcall_GT);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_LTforeach);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_sequence);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_LT_SLASHforeach_GT);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_LTfilter);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_xpath);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_xpath);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_LT_SLASHfilter_GT);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_LTaggregate_GT);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_LTaggregate);
      if (lookahead == '>') ADVANCE(761);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_LT_SLASHaggregate_GT);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_LTiterate);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_LT_SLASHiterate_GT);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_sequential);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_sequential);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_continueParent);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_continueParent);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_preservePayload);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_preservePayload);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_attachPath);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_attachPath);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_LTsequence_GT);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_LTtarget);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_to);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_soapAction);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_soapAction);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(anon_sym_endpoint);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(anon_sym_endpoint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_LT_SLASHtarget_GT);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_LTcorrelateOn);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_LTcompleteCondition);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_LT_SLASHcompleteCondition_GT);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_LTonComplete);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(anon_sym_LT_SLASHonComplete_GT);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_LTmessageCount);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_min);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(anon_sym_max);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_LTthen_GT);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_LT_SLASHthen_GT);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_LTelse_GT);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_LT_SLASHelse_GT);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_source);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_source);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(anon_sym_regex);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_regex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_LTendpoint);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(anon_sym_LT_SLASHendpoint_GT);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_LThttp);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_LT_SLASHhttp_GT);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_uri_DASHtemplate);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_method);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_method);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_GET);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_GET);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_POST);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_POST);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_PUT);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(anon_sym_DELETE);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_PATCH);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_get);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_post);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_post);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_put);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_put);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(anon_sym_delete);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_head);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(anon_sym_head);
      if (lookahead == 'e') ADVANCE(1047);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_options);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(anon_sym_options);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(anon_sym_patch);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_patch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_LTtimeout_GT);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_LT_SLASHtimeout_GT);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(anon_sym_LTmarkForSuspension_GT);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmarkForSuspension_GT);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(anon_sym_LTretriesBeforeSuspension_GT);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(anon_sym_LT_SLASHretriesBeforeSuspension_GT);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(anon_sym_LTretryDelay_GT);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(anon_sym_LT_SLASHretryDelay_GT);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(anon_sym_LTsuspendOnFailure_GT);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(anon_sym_LT_SLASHsuspendOnFailure_GT);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(anon_sym_LTinitialDuration_GT);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(anon_sym_LT_SLASHinitialDuration_GT);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(anon_sym_LTprogressionFactor_GT);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(anon_sym_LT_SLASHprogressionFactor_GT);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(anon_sym_LTmaximumDuration_GT);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmaximumDuration_GT);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(anon_sym_LTerrorCodes_GT);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_LT_SLASHerrorCodes_GT);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_LTduration_GT);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(anon_sym_LT_SLASHduration_GT);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(anon_sym_LTresponseAction_GT);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_never);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(anon_sym_never);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_discard);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_discard);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(anon_sym_fault);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(anon_sym_fault);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(anon_sym_LT_SLASHresponseAction_GT);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(anon_sym_LTkey);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_blocking);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_blocking);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_value);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_expression);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_expression);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_json_DASHeval_LPAREN);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(anon_sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_id);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_level);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_level);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_full);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_full);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_simple);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_simple);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_custom);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(anon_sym_custom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_headers);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(anon_sym_headers);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'A') ADVANCE(898);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'A') ADVANCE(917);
      if (lookahead == 'O') ADVANCE(914);
      if (lookahead == 'U') ADVANCE(918);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'A') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'C') ADVANCE(904);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'D') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E') ADVANCE(906);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E') ADVANCE(915);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E') ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E') ADVANCE(920);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'H') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'I') ADVANCE(908);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'L') ADVANCE(903);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'N') ADVANCE(913);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'O') ADVANCE(907);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'P') ADVANCE(916);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'P') ADVANCE(935);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'P') ADVANCE(924);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'P') ADVANCE(934);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'S') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'S') ADVANCE(919);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'T') ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'T') ADVANCE(905);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'T') ADVANCE(897);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'T') ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'T') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'T') ADVANCE(902);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(998);
      if (lookahead == 'u') ADVANCE(999);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(1086);
      if (lookahead == 'e') ADVANCE(1063);
      if (lookahead == 'i') ADVANCE(1009);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(1007);
      if (lookahead == 'e') ADVANCE(1084);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(1088);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(945);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(1004);
      if (lookahead == 'e') ADVANCE(1045);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(940);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(1073);
      if (lookahead == 'o') ADVANCE(1056);
      if (lookahead == 'r') ADVANCE(972);
      if (lookahead == 'u') ADVANCE(1064);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(948);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(1035);
      if (lookahead == 'u') ADVANCE(1046);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(1044);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(997);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(1074);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(1076);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(1049);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(993);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(978);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(1025);
      if (lookahead == 'd') ADVANCE(1039);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(931);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(981);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(960);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(961);
      if (lookahead == 't') ADVANCE(985);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(1078);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(881);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(987);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(925);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(1083);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(977);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(1041);
      if (lookahead == 'i') ADVANCE(1006);
      if (lookahead == 'o') ADVANCE(930);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(879);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(869);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(871);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(873);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(829);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(887);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(1003);
      if (lookahead == 'i') ADVANCE(1054);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(1087);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(1062);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(1043);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(1061);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(1010);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(996);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(1050);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(1077);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(910);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(1058);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(1020);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(911);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'g') ADVANCE(867);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'g') ADVANCE(1101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'g') ADVANCE(963);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'h') ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'h') ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'h') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'h') ADVANCE(912);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'h') ADVANCE(1028);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(893);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(1021);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(932);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(1014);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(1016);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(1019);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(1030);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(1031);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(1032);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(1033);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'k') ADVANCE(986);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(1024);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(885);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(883);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(1057);
      if (lookahead == 'u') ADVANCE(1001);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(995);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(1034);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(1066);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(959);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(970);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(1081);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(1040);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(954);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(938);
      if (lookahead == 'x') ADVANCE(1037);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(942);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(875);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(975);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(892);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(976);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(1072);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(1067);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(1068);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(1082);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(1017);
      if (lookahead == 'u') ADVANCE(1055);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(777);
      if (lookahead == 'r') ADVANCE(1079);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(936);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(949);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(1015);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(1005);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(946);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(988);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(1018);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(1011);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(1012);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(1013);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(929);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(896);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(933);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(1048);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(1070);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(1029);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(1002);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'q') ADVANCE(1080);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(983);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(859);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(947);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(1059);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(941);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(966);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(973);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(1085);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(891);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(833);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(1026);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(939);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(1075);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(1065);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(956);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(969);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(990);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(991);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(1060);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(982);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(863);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(1071);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(989);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(927);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(984);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(937);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(979);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(1027);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(980);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(958);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(992);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(955);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(967);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(957);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(971);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'v') ADVANCE(968);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'v') ADVANCE(965);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'v') ADVANCE(974);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'x') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'x') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'y') ADVANCE(1000);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym__float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1090);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym__unsigned_int);
      if (lookahead == '.') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1091);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym__int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1092);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym_expression_string);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1093);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1094);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym_expression_string);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1094);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(anon_sym_LT_QMARKxml);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(anon_sym_version);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym_version_number);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(anon_sym_encoding);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(anon_sym_encoding);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1089);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym_encoding);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(1105);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(1105);
      if (lookahead == '>') ADVANCE(747);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(1106);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 735},
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
  [56] = {.lex_state = 735},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 735},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 735},
  [62] = {.lex_state = 735},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 735},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 735},
  [87] = {.lex_state = 735},
  [88] = {.lex_state = 735},
  [89] = {.lex_state = 735},
  [90] = {.lex_state = 735},
  [91] = {.lex_state = 735},
  [92] = {.lex_state = 735},
  [93] = {.lex_state = 735},
  [94] = {.lex_state = 735},
  [95] = {.lex_state = 735},
  [96] = {.lex_state = 735},
  [97] = {.lex_state = 735},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 735},
  [105] = {.lex_state = 735},
  [106] = {.lex_state = 735},
  [107] = {.lex_state = 735},
  [108] = {.lex_state = 735},
  [109] = {.lex_state = 735},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 168},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 735},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 735},
  [129] = {.lex_state = 735},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 735},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 735},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 735},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 735},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 735},
  [149] = {.lex_state = 735},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 735},
  [152] = {.lex_state = 735},
  [153] = {.lex_state = 735},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 735},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 735},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 735},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 735},
  [167] = {.lex_state = 735},
  [168] = {.lex_state = 735},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 1},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 735},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 735},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 1},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 1},
  [186] = {.lex_state = 1},
  [187] = {.lex_state = 1},
  [188] = {.lex_state = 1},
  [189] = {.lex_state = 1},
  [190] = {.lex_state = 1},
  [191] = {.lex_state = 1},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 1},
  [194] = {.lex_state = 1},
  [195] = {.lex_state = 1},
  [196] = {.lex_state = 735},
  [197] = {.lex_state = 735},
  [198] = {.lex_state = 735},
  [199] = {.lex_state = 1},
  [200] = {.lex_state = 1},
  [201] = {.lex_state = 1},
  [202] = {.lex_state = 735},
  [203] = {.lex_state = 1},
  [204] = {.lex_state = 1},
  [205] = {.lex_state = 735},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 1},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 1},
  [210] = {.lex_state = 1},
  [211] = {.lex_state = 1},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 1},
  [214] = {.lex_state = 735},
  [215] = {.lex_state = 1},
  [216] = {.lex_state = 735},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 735},
  [219] = {.lex_state = 735},
  [220] = {.lex_state = 735},
  [221] = {.lex_state = 735},
  [222] = {.lex_state = 735},
  [223] = {.lex_state = 735},
  [224] = {.lex_state = 735},
  [225] = {.lex_state = 1},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 735},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 1},
  [230] = {.lex_state = 1},
  [231] = {.lex_state = 1},
  [232] = {.lex_state = 735},
  [233] = {.lex_state = 735},
  [234] = {.lex_state = 1},
  [235] = {.lex_state = 1},
  [236] = {.lex_state = 1},
  [237] = {.lex_state = 1},
  [238] = {.lex_state = 735},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 1},
  [242] = {.lex_state = 735},
  [243] = {.lex_state = 735},
  [244] = {.lex_state = 735},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 735},
  [247] = {.lex_state = 1},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 735},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 735},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 735},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 735},
  [279] = {.lex_state = 735},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 735},
  [294] = {.lex_state = 735},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 1093},
  [356] = {.lex_state = 735},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 735},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 735},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 735},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 1093},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LTsequence] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHsequence_GT] = ACTIONS(1),
    [anon_sym_LTrespond_SLASH_GT] = ACTIONS(1),
    [anon_sym_LTsend_SLASH_GT] = ACTIONS(1),
    [anon_sym_LTsend] = ACTIONS(1),
    [anon_sym_LT_SLASHsend_GT] = ACTIONS(1),
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
    [anon_sym_LT_SLASHforeach_GT] = ACTIONS(1),
    [anon_sym_LTfilter] = ACTIONS(1),
    [anon_sym_xpath] = ACTIONS(1),
    [anon_sym_LT_SLASHfilter_GT] = ACTIONS(1),
    [anon_sym_LTaggregate_GT] = ACTIONS(1),
    [anon_sym_LTaggregate] = ACTIONS(1),
    [anon_sym_LT_SLASHaggregate_GT] = ACTIONS(1),
    [anon_sym_LTiterate] = ACTIONS(1),
    [anon_sym_LT_SLASHiterate_GT] = ACTIONS(1),
    [anon_sym_sequential] = ACTIONS(1),
    [anon_sym_continueParent] = ACTIONS(1),
    [anon_sym_preservePayload] = ACTIONS(1),
    [anon_sym_attachPath] = ACTIONS(1),
    [anon_sym_LTsequence_GT] = ACTIONS(1),
    [anon_sym_LTtarget] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_soapAction] = ACTIONS(1),
    [anon_sym_endpoint] = ACTIONS(1),
    [anon_sym_LT_SLASHtarget_GT] = ACTIONS(1),
    [anon_sym_LTcorrelateOn] = ACTIONS(1),
    [anon_sym_LTcompleteCondition] = ACTIONS(1),
    [anon_sym_LT_SLASHcompleteCondition_GT] = ACTIONS(1),
    [anon_sym_LTonComplete] = ACTIONS(1),
    [anon_sym_LT_SLASHonComplete_GT] = ACTIONS(1),
    [anon_sym_LTmessageCount] = ACTIONS(1),
    [anon_sym_min] = ACTIONS(1),
    [anon_sym_max] = ACTIONS(1),
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
    [sym_source_file] = STATE(393),
    [sym__definition] = STATE(108),
    [sym_sequence_definition] = STATE(108),
    [sym_xml_declaration] = STATE(109),
    [aux_sym_source_file_repeat1] = STATE(108),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LTsequence] = ACTIONS(5),
    [anon_sym_LT_QMARKxml] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(11), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(14), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(17), 1,
      anon_sym_LTsend,
    ACTIONS(20), 1,
      anon_sym_LTlog,
    ACTIONS(23), 1,
      anon_sym_LTproperty,
    ACTIONS(26), 1,
      anon_sym_LTcall,
    ACTIONS(29), 1,
      anon_sym_LTforeach,
    ACTIONS(32), 1,
      anon_sym_LTfilter,
    ACTIONS(35), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(38), 1,
      anon_sym_LTaggregate,
    ACTIONS(41), 1,
      anon_sym_LTiterate,
    STATE(2), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    ACTIONS(9), 4,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
    STATE(36), 9,
      sym_respond,
      sym_send,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
      sym_aggregate,
      sym_iterate,
  [55] = 14,
    ACTIONS(44), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(46), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(48), 1,
      anon_sym_LTsend,
    ACTIONS(50), 1,
      anon_sym_LTlog,
    ACTIONS(52), 1,
      anon_sym_LTproperty,
    ACTIONS(54), 1,
      anon_sym_LTcall,
    ACTIONS(56), 1,
      anon_sym_LTforeach,
    ACTIONS(58), 1,
      anon_sym_LTfilter,
    ACTIONS(60), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(62), 1,
      anon_sym_LTaggregate,
    ACTIONS(64), 1,
      anon_sym_LTiterate,
    ACTIONS(66), 1,
      anon_sym_LT_SLASHthen_GT,
    STATE(13), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(36), 9,
      sym_respond,
      sym_send,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
      sym_aggregate,
      sym_iterate,
  [107] = 14,
    ACTIONS(44), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(46), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(48), 1,
      anon_sym_LTsend,
    ACTIONS(50), 1,
      anon_sym_LTlog,
    ACTIONS(52), 1,
      anon_sym_LTproperty,
    ACTIONS(54), 1,
      anon_sym_LTcall,
    ACTIONS(56), 1,
      anon_sym_LTforeach,
    ACTIONS(58), 1,
      anon_sym_LTfilter,
    ACTIONS(60), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(62), 1,
      anon_sym_LTaggregate,
    ACTIONS(64), 1,
      anon_sym_LTiterate,
    ACTIONS(68), 1,
      anon_sym_LT_SLASHelse_GT,
    STATE(2), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(36), 9,
      sym_respond,
      sym_send,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
      sym_aggregate,
      sym_iterate,
  [159] = 14,
    ACTIONS(44), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(46), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(48), 1,
      anon_sym_LTsend,
    ACTIONS(50), 1,
      anon_sym_LTlog,
    ACTIONS(52), 1,
      anon_sym_LTproperty,
    ACTIONS(54), 1,
      anon_sym_LTcall,
    ACTIONS(56), 1,
      anon_sym_LTforeach,
    ACTIONS(58), 1,
      anon_sym_LTfilter,
    ACTIONS(60), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(62), 1,
      anon_sym_LTaggregate,
    ACTIONS(64), 1,
      anon_sym_LTiterate,
    ACTIONS(70), 1,
      anon_sym_LT_SLASHonComplete_GT,
    STATE(2), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(36), 9,
      sym_respond,
      sym_send,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
      sym_aggregate,
      sym_iterate,
  [211] = 14,
    ACTIONS(44), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(46), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(48), 1,
      anon_sym_LTsend,
    ACTIONS(50), 1,
      anon_sym_LTlog,
    ACTIONS(52), 1,
      anon_sym_LTproperty,
    ACTIONS(54), 1,
      anon_sym_LTcall,
    ACTIONS(56), 1,
      anon_sym_LTforeach,
    ACTIONS(58), 1,
      anon_sym_LTfilter,
    ACTIONS(60), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(62), 1,
      anon_sym_LTaggregate,
    ACTIONS(64), 1,
      anon_sym_LTiterate,
    ACTIONS(72), 1,
      anon_sym_LT_SLASHonComplete_GT,
    STATE(2), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(36), 9,
      sym_respond,
      sym_send,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
      sym_aggregate,
      sym_iterate,
  [263] = 14,
    ACTIONS(44), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(46), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(48), 1,
      anon_sym_LTsend,
    ACTIONS(50), 1,
      anon_sym_LTlog,
    ACTIONS(52), 1,
      anon_sym_LTproperty,
    ACTIONS(54), 1,
      anon_sym_LTcall,
    ACTIONS(56), 1,
      anon_sym_LTforeach,
    ACTIONS(58), 1,
      anon_sym_LTfilter,
    ACTIONS(60), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(62), 1,
      anon_sym_LTaggregate,
    ACTIONS(64), 1,
      anon_sym_LTiterate,
    ACTIONS(74), 1,
      anon_sym_LT_SLASHelse_GT,
    STATE(4), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(36), 9,
      sym_respond,
      sym_send,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
      sym_aggregate,
      sym_iterate,
  [315] = 14,
    ACTIONS(44), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(46), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(48), 1,
      anon_sym_LTsend,
    ACTIONS(50), 1,
      anon_sym_LTlog,
    ACTIONS(52), 1,
      anon_sym_LTproperty,
    ACTIONS(54), 1,
      anon_sym_LTcall,
    ACTIONS(56), 1,
      anon_sym_LTforeach,
    ACTIONS(58), 1,
      anon_sym_LTfilter,
    ACTIONS(60), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(62), 1,
      anon_sym_LTaggregate,
    ACTIONS(64), 1,
      anon_sym_LTiterate,
    ACTIONS(76), 1,
      anon_sym_LT_SLASHonComplete_GT,
    STATE(6), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(36), 9,
      sym_respond,
      sym_send,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
      sym_aggregate,
      sym_iterate,
  [367] = 14,
    ACTIONS(44), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(46), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(48), 1,
      anon_sym_LTsend,
    ACTIONS(50), 1,
      anon_sym_LTlog,
    ACTIONS(52), 1,
      anon_sym_LTproperty,
    ACTIONS(54), 1,
      anon_sym_LTcall,
    ACTIONS(56), 1,
      anon_sym_LTforeach,
    ACTIONS(58), 1,
      anon_sym_LTfilter,
    ACTIONS(60), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(62), 1,
      anon_sym_LTaggregate,
    ACTIONS(64), 1,
      anon_sym_LTiterate,
    ACTIONS(78), 1,
      anon_sym_LT_SLASHonComplete_GT,
    STATE(5), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(36), 9,
      sym_respond,
      sym_send,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
      sym_aggregate,
      sym_iterate,
  [419] = 14,
    ACTIONS(44), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(46), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(48), 1,
      anon_sym_LTsend,
    ACTIONS(50), 1,
      anon_sym_LTlog,
    ACTIONS(52), 1,
      anon_sym_LTproperty,
    ACTIONS(54), 1,
      anon_sym_LTcall,
    ACTIONS(56), 1,
      anon_sym_LTforeach,
    ACTIONS(58), 1,
      anon_sym_LTfilter,
    ACTIONS(60), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(62), 1,
      anon_sym_LTaggregate,
    ACTIONS(64), 1,
      anon_sym_LTiterate,
    ACTIONS(80), 1,
      anon_sym_LT_SLASHsequence_GT,
    STATE(2), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(36), 9,
      sym_respond,
      sym_send,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
      sym_aggregate,
      sym_iterate,
  [471] = 14,
    ACTIONS(44), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(46), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(48), 1,
      anon_sym_LTsend,
    ACTIONS(50), 1,
      anon_sym_LTlog,
    ACTIONS(52), 1,
      anon_sym_LTproperty,
    ACTIONS(54), 1,
      anon_sym_LTcall,
    ACTIONS(56), 1,
      anon_sym_LTforeach,
    ACTIONS(58), 1,
      anon_sym_LTfilter,
    ACTIONS(60), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(62), 1,
      anon_sym_LTaggregate,
    ACTIONS(64), 1,
      anon_sym_LTiterate,
    ACTIONS(82), 1,
      anon_sym_LT_SLASHsequence_GT,
    STATE(2), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(36), 9,
      sym_respond,
      sym_send,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
      sym_aggregate,
      sym_iterate,
  [523] = 14,
    ACTIONS(44), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(46), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(48), 1,
      anon_sym_LTsend,
    ACTIONS(50), 1,
      anon_sym_LTlog,
    ACTIONS(52), 1,
      anon_sym_LTproperty,
    ACTIONS(54), 1,
      anon_sym_LTcall,
    ACTIONS(56), 1,
      anon_sym_LTforeach,
    ACTIONS(58), 1,
      anon_sym_LTfilter,
    ACTIONS(60), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(62), 1,
      anon_sym_LTaggregate,
    ACTIONS(64), 1,
      anon_sym_LTiterate,
    ACTIONS(84), 1,
      anon_sym_LT_SLASHsequence_GT,
    STATE(10), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(36), 9,
      sym_respond,
      sym_send,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
      sym_aggregate,
      sym_iterate,
  [575] = 14,
    ACTIONS(44), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(46), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(48), 1,
      anon_sym_LTsend,
    ACTIONS(50), 1,
      anon_sym_LTlog,
    ACTIONS(52), 1,
      anon_sym_LTproperty,
    ACTIONS(54), 1,
      anon_sym_LTcall,
    ACTIONS(56), 1,
      anon_sym_LTforeach,
    ACTIONS(58), 1,
      anon_sym_LTfilter,
    ACTIONS(60), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(62), 1,
      anon_sym_LTaggregate,
    ACTIONS(64), 1,
      anon_sym_LTiterate,
    ACTIONS(86), 1,
      anon_sym_LT_SLASHthen_GT,
    STATE(2), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(36), 9,
      sym_respond,
      sym_send,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
      sym_aggregate,
      sym_iterate,
  [627] = 14,
    ACTIONS(44), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(46), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(48), 1,
      anon_sym_LTsend,
    ACTIONS(50), 1,
      anon_sym_LTlog,
    ACTIONS(52), 1,
      anon_sym_LTproperty,
    ACTIONS(54), 1,
      anon_sym_LTcall,
    ACTIONS(56), 1,
      anon_sym_LTforeach,
    ACTIONS(58), 1,
      anon_sym_LTfilter,
    ACTIONS(60), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(62), 1,
      anon_sym_LTaggregate,
    ACTIONS(64), 1,
      anon_sym_LTiterate,
    ACTIONS(88), 1,
      anon_sym_LT_SLASHsequence_GT,
    STATE(11), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(36), 9,
      sym_respond,
      sym_send,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
      sym_aggregate,
      sym_iterate,
  [679] = 2,
    ACTIONS(92), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(90), 14,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LT_SLASHlog_GT,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [700] = 2,
    ACTIONS(96), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(94), 14,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LT_SLASHlog_GT,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [721] = 2,
    ACTIONS(100), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(98), 13,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [741] = 2,
    ACTIONS(104), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(102), 13,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [761] = 2,
    ACTIONS(108), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(106), 13,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [781] = 2,
    ACTIONS(112), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(110), 13,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [801] = 2,
    ACTIONS(116), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(114), 13,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [821] = 2,
    ACTIONS(120), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(118), 13,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [841] = 2,
    ACTIONS(124), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(122), 13,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [861] = 2,
    ACTIONS(128), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(126), 13,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [881] = 2,
    ACTIONS(132), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(130), 13,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [901] = 2,
    ACTIONS(136), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(134), 13,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [921] = 2,
    ACTIONS(140), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(138), 13,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [941] = 2,
    ACTIONS(144), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(142), 13,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [961] = 2,
    ACTIONS(148), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(146), 13,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [981] = 2,
    ACTIONS(152), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(150), 13,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [1001] = 2,
    ACTIONS(156), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(154), 13,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [1021] = 2,
    ACTIONS(160), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(158), 13,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [1041] = 2,
    ACTIONS(164), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(162), 13,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [1061] = 2,
    ACTIONS(168), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(166), 13,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [1081] = 2,
    ACTIONS(172), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(170), 13,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [1101] = 2,
    ACTIONS(176), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(174), 13,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [1121] = 2,
    ACTIONS(180), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(178), 13,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [1141] = 2,
    ACTIONS(184), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(182), 13,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [1161] = 2,
    ACTIONS(188), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(186), 13,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [1181] = 2,
    ACTIONS(192), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(190), 13,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [1201] = 2,
    ACTIONS(196), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(194), 13,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [1221] = 2,
    ACTIONS(200), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(198), 13,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [1241] = 2,
    ACTIONS(204), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(202), 13,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [1261] = 2,
    ACTIONS(208), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(206), 13,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [1281] = 2,
    ACTIONS(212), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(210), 13,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [1301] = 2,
    ACTIONS(216), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(214), 13,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [1321] = 2,
    ACTIONS(220), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(218), 13,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [1341] = 2,
    ACTIONS(224), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(222), 13,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [1361] = 2,
    ACTIONS(228), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(226), 13,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [1381] = 2,
    ACTIONS(232), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(230), 13,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [1401] = 2,
    ACTIONS(236), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(234), 13,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [1421] = 2,
    ACTIONS(240), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(238), 13,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [1441] = 2,
    ACTIONS(244), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(242), 13,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [1461] = 2,
    ACTIONS(248), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(246), 13,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [1481] = 2,
    ACTIONS(252), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(250), 13,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [1501] = 1,
    ACTIONS(254), 14,
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
  [1518] = 5,
    ACTIONS(256), 1,
      anon_sym_json_DASHeval_LPAREN,
    STATE(423), 2,
      sym_json_eval,
      sym_xpath,
    ACTIONS(258), 3,
      aux_sym_identifier_token1,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(260), 3,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
    STATE(68), 3,
      sym__xpath_node,
      sym__xpath_selectors,
      aux_sym_xpath_repeat1,
  [1541] = 5,
    ACTIONS(256), 1,
      anon_sym_json_DASHeval_LPAREN,
    STATE(435), 2,
      sym_json_eval,
      sym_xpath,
    ACTIONS(258), 3,
      aux_sym_identifier_token1,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(260), 3,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
    STATE(68), 3,
      sym__xpath_node,
      sym__xpath_selectors,
      aux_sym_xpath_repeat1,
  [1564] = 12,
    ACTIONS(262), 1,
      anon_sym_GT,
    ACTIONS(264), 1,
      anon_sym_sequential,
    ACTIONS(267), 1,
      anon_sym_continueParent,
    ACTIONS(270), 1,
      anon_sym_preservePayload,
    ACTIONS(273), 1,
      anon_sym_attachPath,
    ACTIONS(276), 1,
      anon_sym_expression,
    STATE(59), 1,
      aux_sym_iterate_repeat1,
    STATE(89), 1,
      sym_sequential,
    STATE(90), 1,
      sym_continueParent,
    STATE(92), 1,
      sym_preservePayload,
    STATE(93), 1,
      sym_attachPath,
    STATE(97), 1,
      sym_expression,
  [1601] = 5,
    ACTIONS(256), 1,
      anon_sym_json_DASHeval_LPAREN,
    STATE(330), 2,
      sym_json_eval,
      sym_xpath,
    ACTIONS(258), 3,
      aux_sym_identifier_token1,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(260), 3,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
    STATE(68), 3,
      sym__xpath_node,
      sym__xpath_selectors,
      aux_sym_xpath_repeat1,
  [1624] = 12,
    ACTIONS(279), 1,
      anon_sym_GT,
    ACTIONS(281), 1,
      anon_sym_sequential,
    ACTIONS(283), 1,
      anon_sym_continueParent,
    ACTIONS(285), 1,
      anon_sym_preservePayload,
    ACTIONS(287), 1,
      anon_sym_attachPath,
    ACTIONS(289), 1,
      anon_sym_expression,
    STATE(59), 1,
      aux_sym_iterate_repeat1,
    STATE(89), 1,
      sym_sequential,
    STATE(90), 1,
      sym_continueParent,
    STATE(92), 1,
      sym_preservePayload,
    STATE(93), 1,
      sym_attachPath,
    STATE(97), 1,
      sym_expression,
  [1661] = 11,
    ACTIONS(281), 1,
      anon_sym_sequential,
    ACTIONS(283), 1,
      anon_sym_continueParent,
    ACTIONS(285), 1,
      anon_sym_preservePayload,
    ACTIONS(287), 1,
      anon_sym_attachPath,
    ACTIONS(289), 1,
      anon_sym_expression,
    STATE(61), 1,
      aux_sym_iterate_repeat1,
    STATE(89), 1,
      sym_sequential,
    STATE(90), 1,
      sym_continueParent,
    STATE(92), 1,
      sym_preservePayload,
    STATE(93), 1,
      sym_attachPath,
    STATE(97), 1,
      sym_expression,
  [1695] = 6,
    ACTIONS(291), 1,
      anon_sym_LT_SLASHsuspendOnFailure_GT,
    ACTIONS(293), 1,
      anon_sym_LTinitialDuration_GT,
    ACTIONS(295), 1,
      anon_sym_LTprogressionFactor_GT,
    ACTIONS(297), 1,
      anon_sym_LTmaximumDuration_GT,
    ACTIONS(299), 1,
      anon_sym_LTerrorCodes_GT,
    STATE(65), 6,
      sym__suspend_on_failure_property,
      sym_initial_duration,
      sym_progression_factor,
      sym_maximum_duration,
      sym_error_codes,
      aux_sym_suspend_on_failure_repeat1,
  [1719] = 6,
    ACTIONS(293), 1,
      anon_sym_LTinitialDuration_GT,
    ACTIONS(295), 1,
      anon_sym_LTprogressionFactor_GT,
    ACTIONS(297), 1,
      anon_sym_LTmaximumDuration_GT,
    ACTIONS(299), 1,
      anon_sym_LTerrorCodes_GT,
    ACTIONS(301), 1,
      anon_sym_LT_SLASHsuspendOnFailure_GT,
    STATE(63), 6,
      sym__suspend_on_failure_property,
      sym_initial_duration,
      sym_progression_factor,
      sym_maximum_duration,
      sym_error_codes,
      aux_sym_suspend_on_failure_repeat1,
  [1743] = 6,
    ACTIONS(303), 1,
      anon_sym_LT_SLASHsuspendOnFailure_GT,
    ACTIONS(305), 1,
      anon_sym_LTinitialDuration_GT,
    ACTIONS(308), 1,
      anon_sym_LTprogressionFactor_GT,
    ACTIONS(311), 1,
      anon_sym_LTmaximumDuration_GT,
    ACTIONS(314), 1,
      anon_sym_LTerrorCodes_GT,
    STATE(65), 6,
      sym__suspend_on_failure_property,
      sym_initial_duration,
      sym_progression_factor,
      sym_maximum_duration,
      sym_error_codes,
      aux_sym_suspend_on_failure_repeat1,
  [1767] = 4,
    STATE(424), 1,
      sym_xpath,
    ACTIONS(258), 2,
      anon_sym_SLASH,
      anon_sym_DOT,
    STATE(68), 3,
      sym__xpath_node,
      sym__xpath_selectors,
      aux_sym_xpath_repeat1,
    ACTIONS(260), 4,
      aux_sym_identifier_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
  [1786] = 4,
    ACTIONS(317), 1,
      anon_sym_DQUOTE,
    ACTIONS(322), 2,
      anon_sym_SLASH,
      anon_sym_DOT,
    STATE(67), 3,
      sym__xpath_node,
      sym__xpath_selectors,
      aux_sym_xpath_repeat1,
    ACTIONS(319), 4,
      aux_sym_identifier_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
  [1805] = 4,
    ACTIONS(325), 1,
      anon_sym_DQUOTE,
    ACTIONS(329), 2,
      anon_sym_SLASH,
      anon_sym_DOT,
    STATE(67), 3,
      sym__xpath_node,
      sym__xpath_selectors,
      aux_sym_xpath_repeat1,
    ACTIONS(327), 4,
      aux_sym_identifier_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
  [1824] = 6,
    ACTIONS(331), 1,
      anon_sym_LT_SLASHhttp_GT,
    ACTIONS(333), 1,
      anon_sym_LTtimeout_GT,
    ACTIONS(335), 1,
      anon_sym_LTmarkForSuspension_GT,
    ACTIONS(337), 1,
      anon_sym_LTsuspendOnFailure_GT,
    STATE(77), 2,
      sym_endpoint_error_property,
      aux_sym_http_endpoint_repeat2,
    STATE(120), 3,
      sym_timeout,
      sym_mark_for_suspending,
      sym_suspend_on_failure,
  [1846] = 6,
    ACTIONS(333), 1,
      anon_sym_LTtimeout_GT,
    ACTIONS(335), 1,
      anon_sym_LTmarkForSuspension_GT,
    ACTIONS(337), 1,
      anon_sym_LTsuspendOnFailure_GT,
    ACTIONS(339), 1,
      anon_sym_LT_SLASHhttp_GT,
    STATE(69), 2,
      sym_endpoint_error_property,
      aux_sym_http_endpoint_repeat2,
    STATE(120), 3,
      sym_timeout,
      sym_mark_for_suspending,
      sym_suspend_on_failure,
  [1868] = 5,
    ACTIONS(341), 1,
      anon_sym_LT_SLASHmarkForSuspension_GT,
    ACTIONS(343), 1,
      anon_sym_LTretriesBeforeSuspension_GT,
    ACTIONS(346), 1,
      anon_sym_LTretryDelay_GT,
    ACTIONS(349), 1,
      anon_sym_LTerrorCodes_GT,
    STATE(71), 5,
      sym__mark_for_suspending_property,
      sym_retries_before_suspending,
      sym_retry_delay,
      sym_error_codes,
      aux_sym_mark_for_suspending_repeat1,
  [1888] = 6,
    ACTIONS(331), 1,
      anon_sym_LT_SLASHhttp_GT,
    ACTIONS(333), 1,
      anon_sym_LTtimeout_GT,
    ACTIONS(335), 1,
      anon_sym_LTmarkForSuspension_GT,
    ACTIONS(337), 1,
      anon_sym_LTsuspendOnFailure_GT,
    STATE(74), 2,
      sym_endpoint_error_property,
      aux_sym_http_endpoint_repeat2,
    STATE(120), 3,
      sym_timeout,
      sym_mark_for_suspending,
      sym_suspend_on_failure,
  [1910] = 1,
    ACTIONS(352), 9,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_sequence,
      anon_sym_sequential,
      anon_sym_continueParent,
      anon_sym_preservePayload,
      anon_sym_attachPath,
      anon_sym_expression,
      anon_sym_id,
  [1922] = 6,
    ACTIONS(333), 1,
      anon_sym_LTtimeout_GT,
    ACTIONS(335), 1,
      anon_sym_LTmarkForSuspension_GT,
    ACTIONS(337), 1,
      anon_sym_LTsuspendOnFailure_GT,
    ACTIONS(354), 1,
      anon_sym_LT_SLASHhttp_GT,
    STATE(77), 2,
      sym_endpoint_error_property,
      aux_sym_http_endpoint_repeat2,
    STATE(120), 3,
      sym_timeout,
      sym_mark_for_suspending,
      sym_suspend_on_failure,
  [1944] = 1,
    ACTIONS(356), 9,
      anon_sym_DQUOTE,
      anon_sym_LT_SLASHretriesBeforeSuspension_GT,
      anon_sym_LT_SLASHretryDelay_GT,
      anon_sym_LT_SLASHinitialDuration_GT,
      anon_sym_LT_SLASHprogressionFactor_GT,
      anon_sym_LT_SLASHmaximumDuration_GT,
      anon_sym_COMMA,
      anon_sym_LT_SLASHerrorCodes_GT,
      anon_sym_LT_SLASHduration_GT,
  [1956] = 5,
    ACTIONS(299), 1,
      anon_sym_LTerrorCodes_GT,
    ACTIONS(358), 1,
      anon_sym_LT_SLASHmarkForSuspension_GT,
    ACTIONS(360), 1,
      anon_sym_LTretriesBeforeSuspension_GT,
    ACTIONS(362), 1,
      anon_sym_LTretryDelay_GT,
    STATE(78), 5,
      sym__mark_for_suspending_property,
      sym_retries_before_suspending,
      sym_retry_delay,
      sym_error_codes,
      aux_sym_mark_for_suspending_repeat1,
  [1976] = 6,
    ACTIONS(364), 1,
      anon_sym_LT_SLASHhttp_GT,
    ACTIONS(366), 1,
      anon_sym_LTtimeout_GT,
    ACTIONS(369), 1,
      anon_sym_LTmarkForSuspension_GT,
    ACTIONS(372), 1,
      anon_sym_LTsuspendOnFailure_GT,
    STATE(77), 2,
      sym_endpoint_error_property,
      aux_sym_http_endpoint_repeat2,
    STATE(120), 3,
      sym_timeout,
      sym_mark_for_suspending,
      sym_suspend_on_failure,
  [1998] = 5,
    ACTIONS(299), 1,
      anon_sym_LTerrorCodes_GT,
    ACTIONS(360), 1,
      anon_sym_LTretriesBeforeSuspension_GT,
    ACTIONS(362), 1,
      anon_sym_LTretryDelay_GT,
    ACTIONS(375), 1,
      anon_sym_LT_SLASHmarkForSuspension_GT,
    STATE(71), 5,
      sym__mark_for_suspending_property,
      sym_retries_before_suspending,
      sym_retry_delay,
      sym_error_codes,
      aux_sym_mark_for_suspending_repeat1,
  [2018] = 1,
    ACTIONS(377), 8,
      anon_sym_LT_SLASHmarkForSuspension_GT,
      anon_sym_LTretriesBeforeSuspension_GT,
      anon_sym_LTretryDelay_GT,
      anon_sym_LT_SLASHsuspendOnFailure_GT,
      anon_sym_LTinitialDuration_GT,
      anon_sym_LTprogressionFactor_GT,
      anon_sym_LTmaximumDuration_GT,
      anon_sym_LTerrorCodes_GT,
  [2029] = 1,
    ACTIONS(379), 8,
      anon_sym_LT_SLASHmarkForSuspension_GT,
      anon_sym_LTretriesBeforeSuspension_GT,
      anon_sym_LTretryDelay_GT,
      anon_sym_LT_SLASHsuspendOnFailure_GT,
      anon_sym_LTinitialDuration_GT,
      anon_sym_LTprogressionFactor_GT,
      anon_sym_LTmaximumDuration_GT,
      anon_sym_LTerrorCodes_GT,
  [2040] = 4,
    ACTIONS(381), 1,
      anon_sym_LT_SLASHtimeout_GT,
    ACTIONS(383), 1,
      anon_sym_LTduration_GT,
    ACTIONS(385), 1,
      anon_sym_LTresponseAction_GT,
    STATE(85), 4,
      sym__timeout_property,
      sym_duration,
      sym_response_action,
      aux_sym_timeout_repeat1,
  [2056] = 4,
    ACTIONS(387), 1,
      anon_sym_LT_SLASHtimeout_GT,
    ACTIONS(389), 1,
      anon_sym_LTduration_GT,
    ACTIONS(392), 1,
      anon_sym_LTresponseAction_GT,
    STATE(82), 4,
      sym__timeout_property,
      sym_duration,
      sym_response_action,
      aux_sym_timeout_repeat1,
  [2072] = 7,
    ACTIONS(395), 1,
      anon_sym_LT_SLASHaggregate_GT,
    ACTIONS(397), 1,
      anon_sym_LTcorrelateOn,
    ACTIONS(399), 1,
      anon_sym_LTcompleteCondition,
    ACTIONS(401), 1,
      anon_sym_LTonComplete,
    STATE(110), 1,
      sym_correlateOn,
    STATE(162), 1,
      sym_complete_condition,
    STATE(317), 1,
      sym_on_complete,
  [2094] = 7,
    ACTIONS(397), 1,
      anon_sym_LTcorrelateOn,
    ACTIONS(399), 1,
      anon_sym_LTcompleteCondition,
    ACTIONS(401), 1,
      anon_sym_LTonComplete,
    ACTIONS(403), 1,
      anon_sym_LT_SLASHaggregate_GT,
    STATE(101), 1,
      sym_correlateOn,
    STATE(165), 1,
      sym_complete_condition,
    STATE(359), 1,
      sym_on_complete,
  [2116] = 4,
    ACTIONS(383), 1,
      anon_sym_LTduration_GT,
    ACTIONS(385), 1,
      anon_sym_LTresponseAction_GT,
    ACTIONS(405), 1,
      anon_sym_LT_SLASHtimeout_GT,
    STATE(82), 4,
      sym__timeout_property,
      sym_duration,
      sym_response_action,
      aux_sym_timeout_repeat1,
  [2132] = 1,
    ACTIONS(407), 6,
      anon_sym_GT,
      anon_sym_sequential,
      anon_sym_continueParent,
      anon_sym_preservePayload,
      anon_sym_attachPath,
      anon_sym_expression,
  [2141] = 4,
    ACTIONS(409), 1,
      anon_sym_GT,
    ACTIONS(411), 1,
      anon_sym_uri_DASHtemplate,
    ACTIONS(414), 1,
      anon_sym_method,
    STATE(87), 3,
      sym__endpoint_attribute,
      sym_method,
      aux_sym_http_endpoint_repeat1,
  [2156] = 1,
    ACTIONS(417), 6,
      anon_sym_GT,
      anon_sym_sequential,
      anon_sym_continueParent,
      anon_sym_preservePayload,
      anon_sym_attachPath,
      anon_sym_expression,
  [2165] = 1,
    ACTIONS(419), 6,
      anon_sym_GT,
      anon_sym_sequential,
      anon_sym_continueParent,
      anon_sym_preservePayload,
      anon_sym_attachPath,
      anon_sym_expression,
  [2174] = 1,
    ACTIONS(421), 6,
      anon_sym_GT,
      anon_sym_sequential,
      anon_sym_continueParent,
      anon_sym_preservePayload,
      anon_sym_attachPath,
      anon_sym_expression,
  [2183] = 1,
    ACTIONS(423), 6,
      anon_sym_GT,
      anon_sym_sequential,
      anon_sym_continueParent,
      anon_sym_preservePayload,
      anon_sym_attachPath,
      anon_sym_expression,
  [2192] = 1,
    ACTIONS(425), 6,
      anon_sym_GT,
      anon_sym_sequential,
      anon_sym_continueParent,
      anon_sym_preservePayload,
      anon_sym_attachPath,
      anon_sym_expression,
  [2201] = 1,
    ACTIONS(427), 6,
      anon_sym_GT,
      anon_sym_sequential,
      anon_sym_continueParent,
      anon_sym_preservePayload,
      anon_sym_attachPath,
      anon_sym_expression,
  [2210] = 1,
    ACTIONS(429), 6,
      anon_sym_GT,
      anon_sym_sequential,
      anon_sym_continueParent,
      anon_sym_preservePayload,
      anon_sym_attachPath,
      anon_sym_expression,
  [2219] = 4,
    ACTIONS(431), 1,
      anon_sym_GT,
    ACTIONS(433), 1,
      anon_sym_uri_DASHtemplate,
    ACTIONS(435), 1,
      anon_sym_method,
    STATE(96), 3,
      sym__endpoint_attribute,
      sym_method,
      aux_sym_http_endpoint_repeat1,
  [2234] = 4,
    ACTIONS(433), 1,
      anon_sym_uri_DASHtemplate,
    ACTIONS(435), 1,
      anon_sym_method,
    ACTIONS(437), 1,
      anon_sym_GT,
    STATE(87), 3,
      sym__endpoint_attribute,
      sym_method,
      aux_sym_http_endpoint_repeat1,
  [2249] = 1,
    ACTIONS(439), 6,
      anon_sym_GT,
      anon_sym_sequential,
      anon_sym_continueParent,
      anon_sym_preservePayload,
      anon_sym_attachPath,
      anon_sym_expression,
  [2258] = 1,
    ACTIONS(441), 5,
      anon_sym_LT_SLASHsuspendOnFailure_GT,
      anon_sym_LTinitialDuration_GT,
      anon_sym_LTprogressionFactor_GT,
      anon_sym_LTmaximumDuration_GT,
      anon_sym_LTerrorCodes_GT,
  [2266] = 1,
    ACTIONS(443), 5,
      anon_sym_GT,
      anon_sym_LT_SLASHhttp_GT,
      anon_sym_LTtimeout_GT,
      anon_sym_LTmarkForSuspension_GT,
      anon_sym_LTsuspendOnFailure_GT,
  [2274] = 1,
    ACTIONS(445), 5,
      anon_sym_LT_SLASHsuspendOnFailure_GT,
      anon_sym_LTinitialDuration_GT,
      anon_sym_LTprogressionFactor_GT,
      anon_sym_LTmaximumDuration_GT,
      anon_sym_LTerrorCodes_GT,
  [2282] = 5,
    ACTIONS(399), 1,
      anon_sym_LTcompleteCondition,
    ACTIONS(401), 1,
      anon_sym_LTonComplete,
    ACTIONS(447), 1,
      anon_sym_LT_SLASHaggregate_GT,
    STATE(164), 1,
      sym_complete_condition,
    STATE(365), 1,
      sym_on_complete,
  [2298] = 1,
    ACTIONS(449), 5,
      anon_sym_LT_SLASHsuspendOnFailure_GT,
      anon_sym_LTinitialDuration_GT,
      anon_sym_LTprogressionFactor_GT,
      anon_sym_LTmaximumDuration_GT,
      anon_sym_LTerrorCodes_GT,
  [2306] = 1,
    ACTIONS(451), 5,
      anon_sym_GT,
      anon_sym_LT_SLASHhttp_GT,
      anon_sym_LTtimeout_GT,
      anon_sym_LTmarkForSuspension_GT,
      anon_sym_LTsuspendOnFailure_GT,
  [2314] = 3,
    ACTIONS(453), 1,
      ts_builtin_sym_end,
    ACTIONS(455), 1,
      anon_sym_LTsequence,
    STATE(104), 3,
      sym__definition,
      sym_sequence_definition,
      aux_sym_source_file_repeat1,
  [2326] = 5,
    ACTIONS(458), 1,
      anon_sym_GT,
    ACTIONS(460), 1,
      anon_sym_blocking,
    ACTIONS(462), 1,
      anon_sym_name,
    STATE(153), 1,
      sym_name,
    STATE(253), 1,
      sym_blocking,
  [2342] = 3,
    ACTIONS(5), 1,
      anon_sym_LTsequence,
    ACTIONS(464), 1,
      ts_builtin_sym_end,
    STATE(104), 3,
      sym__definition,
      sym_sequence_definition,
      aux_sym_source_file_repeat1,
  [2354] = 5,
    ACTIONS(466), 1,
      anon_sym_GT,
    ACTIONS(468), 1,
      anon_sym_sequence,
    ACTIONS(470), 1,
      anon_sym_to,
    ACTIONS(472), 1,
      anon_sym_soapAction,
    ACTIONS(474), 1,
      anon_sym_endpoint,
  [2370] = 3,
    ACTIONS(5), 1,
      anon_sym_LTsequence,
    ACTIONS(476), 1,
      ts_builtin_sym_end,
    STATE(104), 3,
      sym__definition,
      sym_sequence_definition,
      aux_sym_source_file_repeat1,
  [2382] = 3,
    ACTIONS(5), 1,
      anon_sym_LTsequence,
    ACTIONS(476), 1,
      ts_builtin_sym_end,
    STATE(106), 3,
      sym__definition,
      sym_sequence_definition,
      aux_sym_source_file_repeat1,
  [2394] = 5,
    ACTIONS(399), 1,
      anon_sym_LTcompleteCondition,
    ACTIONS(401), 1,
      anon_sym_LTonComplete,
    ACTIONS(478), 1,
      anon_sym_LT_SLASHaggregate_GT,
    STATE(154), 1,
      sym_complete_condition,
    STATE(302), 1,
      sym_on_complete,
  [2410] = 4,
    ACTIONS(480), 1,
      anon_sym_LTendpoint,
    ACTIONS(482), 1,
      anon_sym_LTkey,
    STATE(275), 1,
      sym_endpoint_reference,
    STATE(276), 1,
      sym_endpoint,
  [2423] = 3,
    ACTIONS(486), 1,
      sym__unsigned_int,
    STATE(332), 1,
      sym_number,
    ACTIONS(484), 2,
      sym__float,
      sym__int,
  [2434] = 3,
    ACTIONS(486), 1,
      sym__unsigned_int,
    STATE(339), 1,
      sym_number,
    ACTIONS(484), 2,
      sym__float,
      sym__int,
  [2445] = 3,
    ACTIONS(486), 1,
      sym__unsigned_int,
    STATE(340), 1,
      sym_number,
    ACTIONS(484), 2,
      sym__float,
      sym__int,
  [2456] = 4,
    ACTIONS(480), 1,
      anon_sym_LTendpoint,
    ACTIONS(482), 1,
      anon_sym_LTkey,
    STATE(326), 1,
      sym_endpoint,
    STATE(413), 1,
      sym_endpoint_reference,
  [2469] = 3,
    ACTIONS(486), 1,
      sym__unsigned_int,
    STATE(146), 1,
      sym_number,
    ACTIONS(484), 2,
      sym__float,
      sym__int,
  [2480] = 4,
    ACTIONS(480), 1,
      anon_sym_LTendpoint,
    ACTIONS(482), 1,
      anon_sym_LTkey,
    STATE(429), 1,
      sym_endpoint,
    STATE(431), 1,
      sym_endpoint_reference,
  [2493] = 1,
    ACTIONS(488), 4,
      anon_sym_LT_SLASHhttp_GT,
      anon_sym_LTtimeout_GT,
      anon_sym_LTmarkForSuspension_GT,
      anon_sym_LTsuspendOnFailure_GT,
  [2500] = 3,
    ACTIONS(52), 1,
      anon_sym_LTproperty,
    ACTIONS(490), 1,
      anon_sym_LT_SLASHlog_GT,
    STATE(125), 2,
      sym_property,
      aux_sym_log_repeat1,
  [2511] = 1,
    ACTIONS(492), 4,
      anon_sym_LT_SLASHhttp_GT,
      anon_sym_LTtimeout_GT,
      anon_sym_LTmarkForSuspension_GT,
      anon_sym_LTsuspendOnFailure_GT,
  [2518] = 3,
    ACTIONS(486), 1,
      sym__unsigned_int,
    STATE(344), 1,
      sym_number,
    ACTIONS(484), 2,
      sym__float,
      sym__int,
  [2529] = 3,
    ACTIONS(486), 1,
      sym__unsigned_int,
    STATE(345), 1,
      sym_number,
    ACTIONS(484), 2,
      sym__float,
      sym__int,
  [2540] = 1,
    ACTIONS(494), 4,
      anon_sym_full,
      anon_sym_simple,
      anon_sym_custom,
      anon_sym_headers,
  [2547] = 3,
    ACTIONS(486), 1,
      sym__unsigned_int,
    STATE(346), 1,
      sym_number,
    ACTIONS(484), 2,
      sym__float,
      sym__int,
  [2558] = 3,
    ACTIONS(52), 1,
      anon_sym_LTproperty,
    ACTIONS(496), 1,
      anon_sym_LT_SLASHlog_GT,
    STATE(131), 2,
      sym_property,
      aux_sym_log_repeat1,
  [2569] = 4,
    ACTIONS(498), 1,
      anon_sym_GT,
    ACTIONS(500), 1,
      anon_sym_sequence,
    ACTIONS(502), 1,
      anon_sym_id,
    STATE(249), 1,
      sym_id,
  [2582] = 3,
    ACTIONS(486), 1,
      sym__unsigned_int,
    STATE(407), 1,
      sym_number,
    ACTIONS(484), 2,
      sym__float,
      sym__int,
  [2593] = 1,
    ACTIONS(504), 4,
      anon_sym_GT,
      anon_sym_blocking,
      anon_sym_value,
      anon_sym_expression,
  [2600] = 4,
    ACTIONS(289), 1,
      anon_sym_expression,
    ACTIONS(506), 1,
      anon_sym_value,
    STATE(278), 1,
      sym_expression,
    STATE(279), 1,
      sym_value,
  [2613] = 3,
    ACTIONS(486), 1,
      sym__unsigned_int,
    STATE(357), 1,
      sym_number,
    ACTIONS(484), 2,
      sym__float,
      sym__int,
  [2624] = 3,
    ACTIONS(508), 1,
      anon_sym_LT_SLASHlog_GT,
    ACTIONS(510), 1,
      anon_sym_LTproperty,
    STATE(131), 2,
      sym_property,
      aux_sym_log_repeat1,
  [2635] = 1,
    ACTIONS(513), 4,
      anon_sym_LT_SLASHhttp_GT,
      anon_sym_LTtimeout_GT,
      anon_sym_LTmarkForSuspension_GT,
      anon_sym_LTsuspendOnFailure_GT,
  [2642] = 1,
    ACTIONS(515), 4,
      anon_sym_LT_SLASHhttp_GT,
      anon_sym_LTtimeout_GT,
      anon_sym_LTmarkForSuspension_GT,
      anon_sym_LTsuspendOnFailure_GT,
  [2649] = 4,
    ACTIONS(517), 1,
      anon_sym_GT,
    ACTIONS(519), 1,
      anon_sym_sequence,
    ACTIONS(521), 1,
      anon_sym_soapAction,
    ACTIONS(523), 1,
      anon_sym_endpoint,
  [2662] = 3,
    ACTIONS(486), 1,
      sym__unsigned_int,
    STATE(208), 1,
      sym_number,
    ACTIONS(484), 2,
      sym__float,
      sym__int,
  [2673] = 4,
    ACTIONS(480), 1,
      anon_sym_LTendpoint,
    ACTIONS(482), 1,
      anon_sym_LTkey,
    STATE(450), 1,
      sym_endpoint_reference,
    STATE(452), 1,
      sym_endpoint,
  [2686] = 1,
    ACTIONS(525), 4,
      anon_sym_LT_SLASHmarkForSuspension_GT,
      anon_sym_LTretriesBeforeSuspension_GT,
      anon_sym_LTretryDelay_GT,
      anon_sym_LTerrorCodes_GT,
  [2693] = 1,
    ACTIONS(527), 4,
      anon_sym_LT_SLASHhttp_GT,
      anon_sym_LTtimeout_GT,
      anon_sym_LTmarkForSuspension_GT,
      anon_sym_LTsuspendOnFailure_GT,
  [2700] = 1,
    ACTIONS(529), 4,
      anon_sym_LT_SLASHmarkForSuspension_GT,
      anon_sym_LTretriesBeforeSuspension_GT,
      anon_sym_LTretryDelay_GT,
      anon_sym_LTerrorCodes_GT,
  [2707] = 1,
    ACTIONS(531), 3,
      anon_sym_GT,
      anon_sym_uri_DASHtemplate,
      anon_sym_method,
  [2713] = 3,
    ACTIONS(533), 1,
      anon_sym_COMMA,
    ACTIONS(536), 1,
      anon_sym_LT_SLASHerrorCodes_GT,
    STATE(141), 1,
      aux_sym_error_codes_repeat1,
  [2723] = 3,
    ACTIONS(460), 1,
      anon_sym_blocking,
    ACTIONS(538), 1,
      anon_sym_GT,
    STATE(342), 1,
      sym_blocking,
  [2733] = 3,
    ACTIONS(540), 1,
      anon_sym_COMMA,
    ACTIONS(542), 1,
      anon_sym_LT_SLASHerrorCodes_GT,
    STATE(141), 1,
      aux_sym_error_codes_repeat1,
  [2743] = 3,
    ACTIONS(544), 1,
      anon_sym_xpath,
    ACTIONS(546), 1,
      anon_sym_source,
    STATE(320), 1,
      sym_source,
  [2753] = 3,
    ACTIONS(548), 1,
      anon_sym_LT_SLASHcompleteCondition_GT,
    ACTIONS(550), 1,
      anon_sym_LTmessageCount,
    STATE(466), 1,
      sym_message_count,
  [2763] = 3,
    ACTIONS(540), 1,
      anon_sym_COMMA,
    ACTIONS(552), 1,
      anon_sym_LT_SLASHerrorCodes_GT,
    STATE(143), 1,
      aux_sym_error_codes_repeat1,
  [2773] = 1,
    ACTIONS(554), 3,
      anon_sym_LT_SLASHaggregate_GT,
      anon_sym_LTcompleteCondition,
      anon_sym_LTonComplete,
  [2779] = 2,
    STATE(347), 1,
      sym_boolean,
    ACTIONS(556), 2,
      anon_sym_true,
      anon_sym_false,
  [2787] = 1,
    ACTIONS(558), 3,
      anon_sym_GT,
      anon_sym_uri_DASHtemplate,
      anon_sym_method,
  [2793] = 2,
    ACTIONS(560), 1,
      anon_sym_LThttp,
    STATE(370), 2,
      sym__endpoint_type,
      sym_http_endpoint,
  [2801] = 3,
    ACTIONS(462), 1,
      anon_sym_name,
    ACTIONS(562), 1,
      anon_sym_GT,
    STATE(372), 1,
      sym_name,
  [2811] = 3,
    ACTIONS(564), 1,
      anon_sym_GT,
    ACTIONS(566), 1,
      anon_sym_sequence,
    ACTIONS(568), 1,
      anon_sym_endpoint,
  [2821] = 3,
    ACTIONS(460), 1,
      anon_sym_blocking,
    ACTIONS(570), 1,
      anon_sym_GT,
    STATE(274), 1,
      sym_blocking,
  [2831] = 3,
    ACTIONS(401), 1,
      anon_sym_LTonComplete,
    ACTIONS(572), 1,
      anon_sym_LT_SLASHaggregate_GT,
    STATE(478), 1,
      sym_on_complete,
  [2841] = 3,
    ACTIONS(550), 1,
      anon_sym_LTmessageCount,
    ACTIONS(574), 1,
      anon_sym_LT_SLASHcompleteCondition_GT,
    STATE(382), 1,
      sym_message_count,
  [2851] = 3,
    ACTIONS(333), 1,
      anon_sym_LTtimeout_GT,
    ACTIONS(576), 1,
      anon_sym_GT,
    STATE(258), 1,
      sym_timeout,
  [2861] = 2,
    ACTIONS(560), 1,
      anon_sym_LThttp,
    STATE(470), 2,
      sym__endpoint_type,
      sym_http_endpoint,
  [2869] = 3,
    ACTIONS(578), 1,
      anon_sym_GT,
    ACTIONS(580), 1,
      anon_sym_sequence,
    ACTIONS(582), 1,
      anon_sym_endpoint,
  [2879] = 1,
    ACTIONS(584), 3,
      anon_sym_LT_SLASHtimeout_GT,
      anon_sym_LTduration_GT,
      anon_sym_LTresponseAction_GT,
  [2885] = 3,
    ACTIONS(586), 1,
      anon_sym_QMARK_GT,
    ACTIONS(588), 1,
      anon_sym_encoding,
    STATE(254), 1,
      sym_encoding_declaration,
  [2895] = 1,
    ACTIONS(590), 3,
      anon_sym_LT_SLASHtimeout_GT,
      anon_sym_LTduration_GT,
      anon_sym_LTresponseAction_GT,
  [2901] = 3,
    ACTIONS(401), 1,
      anon_sym_LTonComplete,
    ACTIONS(592), 1,
      anon_sym_LT_SLASHaggregate_GT,
    STATE(310), 1,
      sym_on_complete,
  [2911] = 1,
    ACTIONS(594), 3,
      anon_sym_never,
      anon_sym_discard,
      anon_sym_fault,
  [2917] = 3,
    ACTIONS(401), 1,
      anon_sym_LTonComplete,
    ACTIONS(596), 1,
      anon_sym_LT_SLASHaggregate_GT,
    STATE(273), 1,
      sym_on_complete,
  [2927] = 3,
    ACTIONS(401), 1,
      anon_sym_LTonComplete,
    ACTIONS(598), 1,
      anon_sym_LT_SLASHaggregate_GT,
    STATE(363), 1,
      sym_on_complete,
  [2937] = 2,
    STATE(333), 1,
      sym_boolean,
    ACTIONS(556), 2,
      anon_sym_true,
      anon_sym_false,
  [2945] = 2,
    STATE(353), 1,
      sym_boolean,
    ACTIONS(556), 2,
      anon_sym_true,
      anon_sym_false,
  [2953] = 1,
    ACTIONS(600), 2,
      anon_sym_true,
      anon_sym_false,
  [2958] = 2,
    ACTIONS(602), 1,
      aux_sym_identifier_token1,
    STATE(305), 1,
      sym_identifier,
  [2965] = 2,
    ACTIONS(604), 1,
      anon_sym_LTsequence_GT,
    STATE(484), 1,
      sym_sequence,
  [2972] = 2,
    ACTIONS(602), 1,
      aux_sym_identifier_token1,
    STATE(368), 1,
      sym_identifier,
  [2979] = 2,
    ACTIONS(602), 1,
      aux_sym_identifier_token1,
    STATE(481), 1,
      sym_identifier,
  [2986] = 2,
    ACTIONS(604), 1,
      anon_sym_LTsequence_GT,
    STATE(475), 1,
      sym_sequence,
  [2993] = 2,
    ACTIONS(604), 1,
      anon_sym_LTsequence_GT,
    STATE(474), 1,
      sym_sequence,
  [3000] = 2,
    ACTIONS(604), 1,
      anon_sym_LTsequence_GT,
    STATE(472), 1,
      sym_sequence,
  [3007] = 2,
    ACTIONS(604), 1,
      anon_sym_LTsequence_GT,
    STATE(471), 1,
      sym_sequence,
  [3014] = 2,
    ACTIONS(606), 1,
      anon_sym_GT,
    ACTIONS(608), 1,
      anon_sym_endpoint,
  [3021] = 2,
    ACTIONS(602), 1,
      aux_sym_identifier_token1,
    STATE(461), 1,
      sym_identifier,
  [3028] = 2,
    ACTIONS(610), 1,
      anon_sym_min,
    STATE(205), 1,
      sym_min,
  [3035] = 1,
    ACTIONS(612), 2,
      anon_sym_LT_SLASHaggregate_GT,
      anon_sym_LTonComplete,
  [3040] = 2,
    ACTIONS(602), 1,
      aux_sym_identifier_token1,
    STATE(256), 1,
      sym_identifier,
  [3047] = 2,
    ACTIONS(602), 1,
      aux_sym_identifier_token1,
    STATE(257), 1,
      sym_identifier,
  [3054] = 2,
    ACTIONS(614), 1,
      anon_sym_LTelse_GT,
    STATE(411), 1,
      sym_else,
  [3061] = 2,
    ACTIONS(602), 1,
      aux_sym_identifier_token1,
    STATE(460), 1,
      sym_identifier,
  [3068] = 2,
    ACTIONS(604), 1,
      anon_sym_LTsequence_GT,
    STATE(428), 1,
      sym_sequence,
  [3075] = 2,
    ACTIONS(602), 1,
      aux_sym_identifier_token1,
    STATE(459), 1,
      sym_identifier,
  [3082] = 2,
    ACTIONS(602), 1,
      aux_sym_identifier_token1,
    STATE(458), 1,
      sym_identifier,
  [3089] = 2,
    ACTIONS(604), 1,
      anon_sym_LTsequence_GT,
    STATE(447), 1,
      sym_sequence,
  [3096] = 2,
    ACTIONS(604), 1,
      anon_sym_LTsequence_GT,
    STATE(445), 1,
      sym_sequence,
  [3103] = 2,
    ACTIONS(604), 1,
      anon_sym_LTsequence_GT,
    STATE(444), 1,
      sym_sequence,
  [3110] = 2,
    ACTIONS(604), 1,
      anon_sym_LTsequence_GT,
    STATE(441), 1,
      sym_sequence,
  [3117] = 1,
    ACTIONS(616), 2,
      anon_sym_LT_SLASHforeach_GT,
      anon_sym_LT_SLASHtarget_GT,
  [3122] = 2,
    ACTIONS(604), 1,
      anon_sym_LTsequence_GT,
    STATE(439), 1,
      sym_sequence,
  [3129] = 2,
    ACTIONS(604), 1,
      anon_sym_LTsequence_GT,
    STATE(438), 1,
      sym_sequence,
  [3136] = 2,
    ACTIONS(602), 1,
      aux_sym_identifier_token1,
    STATE(261), 1,
      sym_identifier,
  [3143] = 2,
    ACTIONS(618), 1,
      anon_sym_GT,
    ACTIONS(620), 1,
      anon_sym_endpoint,
  [3150] = 2,
    ACTIONS(622), 1,
      anon_sym_version,
    STATE(160), 1,
      sym_version_info,
  [3157] = 2,
    ACTIONS(624), 1,
      anon_sym_GT,
    ACTIONS(626), 1,
      anon_sym_endpoint,
  [3164] = 2,
    ACTIONS(602), 1,
      aux_sym_identifier_token1,
    STATE(421), 1,
      sym_identifier,
  [3171] = 2,
    ACTIONS(602), 1,
      aux_sym_identifier_token1,
    STATE(420), 1,
      sym_identifier,
  [3178] = 2,
    ACTIONS(602), 1,
      aux_sym_identifier_token1,
    STATE(419), 1,
      sym_identifier,
  [3185] = 1,
    ACTIONS(628), 2,
      ts_builtin_sym_end,
      anon_sym_LTsequence,
  [3190] = 2,
    ACTIONS(602), 1,
      aux_sym_identifier_token1,
    STATE(418), 1,
      sym_identifier,
  [3197] = 2,
    ACTIONS(602), 1,
      aux_sym_identifier_token1,
    STATE(417), 1,
      sym_identifier,
  [3204] = 2,
    ACTIONS(630), 1,
      anon_sym_max,
    STATE(269), 1,
      sym_max,
  [3211] = 1,
    ACTIONS(632), 2,
      anon_sym_LT_SLASHaggregate_GT,
      anon_sym_LTonComplete,
  [3216] = 2,
    ACTIONS(602), 1,
      aux_sym_identifier_token1,
    STATE(416), 1,
      sym_identifier,
  [3223] = 1,
    ACTIONS(536), 2,
      anon_sym_COMMA,
      anon_sym_LT_SLASHerrorCodes_GT,
  [3228] = 2,
    ACTIONS(604), 1,
      anon_sym_LTsequence_GT,
    STATE(405), 1,
      sym_sequence,
  [3235] = 2,
    ACTIONS(604), 1,
      anon_sym_LTsequence_GT,
    STATE(402), 1,
      sym_sequence,
  [3242] = 2,
    ACTIONS(604), 1,
      anon_sym_LTsequence_GT,
    STATE(398), 1,
      sym_sequence,
  [3249] = 1,
    ACTIONS(634), 2,
      anon_sym_LT_SLASHaggregate_GT,
      anon_sym_LTonComplete,
  [3254] = 2,
    ACTIONS(604), 1,
      anon_sym_LTsequence_GT,
    STATE(396), 1,
      sym_sequence,
  [3261] = 1,
    ACTIONS(636), 2,
      ts_builtin_sym_end,
      anon_sym_LTsequence,
  [3266] = 2,
    ACTIONS(602), 1,
      aux_sym_identifier_token1,
    STATE(348), 1,
      sym_identifier,
  [3273] = 1,
    ACTIONS(638), 2,
      ts_builtin_sym_end,
      anon_sym_LTsequence,
  [3278] = 2,
    ACTIONS(640), 1,
      anon_sym_LTtarget,
    STATE(483), 1,
      sym_target,
  [3285] = 2,
    ACTIONS(642), 1,
      anon_sym_level,
    STATE(227), 1,
      sym_level,
  [3292] = 2,
    ACTIONS(462), 1,
      anon_sym_name,
    STATE(129), 1,
      sym_name,
  [3299] = 2,
    ACTIONS(289), 1,
      anon_sym_expression,
    STATE(126), 1,
      sym_expression,
  [3306] = 2,
    ACTIONS(502), 1,
      anon_sym_id,
    STATE(315), 1,
      sym_id,
  [3313] = 1,
    ACTIONS(644), 2,
      anon_sym_QMARK_GT,
      anon_sym_encoding,
  [3318] = 1,
    ACTIONS(646), 2,
      ts_builtin_sym_end,
      anon_sym_LTsequence,
  [3323] = 2,
    ACTIONS(648), 1,
      anon_sym_GT,
    ACTIONS(650), 1,
      anon_sym_endpoint,
  [3330] = 2,
    ACTIONS(604), 1,
      anon_sym_LTsequence_GT,
    STATE(374), 1,
      sym_sequence,
  [3337] = 2,
    ACTIONS(480), 1,
      anon_sym_LTendpoint,
    STATE(291), 1,
      sym_endpoint,
  [3344] = 2,
    ACTIONS(652), 1,
      anon_sym_GT,
    ACTIONS(654), 1,
      anon_sym_SLASH_GT,
  [3351] = 2,
    ACTIONS(614), 1,
      anon_sym_LTelse_GT,
    STATE(354), 1,
      sym_else,
  [3358] = 2,
    ACTIONS(604), 1,
      anon_sym_LTsequence_GT,
    STATE(352), 1,
      sym_sequence,
  [3365] = 2,
    ACTIONS(604), 1,
      anon_sym_LTsequence_GT,
    STATE(280), 1,
      sym_sequence,
  [3372] = 2,
    ACTIONS(602), 1,
      aux_sym_identifier_token1,
    STATE(349), 1,
      sym_identifier,
  [3379] = 2,
    ACTIONS(289), 1,
      anon_sym_expression,
    STATE(260), 1,
      sym_expression,
  [3386] = 2,
    ACTIONS(289), 1,
      anon_sym_expression,
    STATE(246), 1,
      sym_expression,
  [3393] = 2,
    ACTIONS(602), 1,
      aux_sym_identifier_token1,
    STATE(338), 1,
      sym_identifier,
  [3400] = 2,
    ACTIONS(602), 1,
      aux_sym_identifier_token1,
    STATE(337), 1,
      sym_identifier,
  [3407] = 2,
    ACTIONS(602), 1,
      aux_sym_identifier_token1,
    STATE(336), 1,
      sym_identifier,
  [3414] = 2,
    ACTIONS(602), 1,
      aux_sym_identifier_token1,
    STATE(335), 1,
      sym_identifier,
  [3421] = 2,
    ACTIONS(462), 1,
      anon_sym_name,
    STATE(391), 1,
      sym_name,
  [3428] = 2,
    ACTIONS(656), 1,
      anon_sym_LTthen_GT,
    STATE(228), 1,
      sym_then,
  [3435] = 1,
    ACTIONS(658), 2,
      anon_sym_LT_SLASHsend_GT,
      anon_sym_LT_SLASHcall_GT,
  [3440] = 2,
    ACTIONS(602), 1,
      aux_sym_identifier_token1,
    STATE(297), 1,
      sym_identifier,
  [3447] = 1,
    ACTIONS(660), 2,
      anon_sym_GT,
      anon_sym_sequence,
  [3452] = 1,
    ACTIONS(662), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
  [3457] = 2,
    ACTIONS(664), 1,
      anon_sym_regex,
    STATE(300), 1,
      sym_regex,
  [3464] = 2,
    ACTIONS(480), 1,
      anon_sym_LTendpoint,
    STATE(386), 1,
      sym_endpoint,
  [3471] = 2,
    ACTIONS(666), 1,
      anon_sym_GT,
    ACTIONS(668), 1,
      anon_sym_sequence,
  [3478] = 2,
    ACTIONS(604), 1,
      anon_sym_LTsequence_GT,
    STATE(434), 1,
      sym_sequence,
  [3485] = 1,
    ACTIONS(670), 2,
      anon_sym_LT_SLASHaggregate_GT,
      anon_sym_LTonComplete,
  [3490] = 2,
    ACTIONS(672), 1,
      anon_sym_GT,
    ACTIONS(674), 1,
      anon_sym_sequence,
  [3497] = 2,
    ACTIONS(656), 1,
      anon_sym_LTthen_GT,
    STATE(183), 1,
      sym_then,
  [3504] = 1,
    ACTIONS(676), 2,
      anon_sym_LT_SLASHforeach_GT,
      anon_sym_LT_SLASHtarget_GT,
  [3509] = 1,
    ACTIONS(678), 2,
      anon_sym_LT_SLASHsend_GT,
      anon_sym_LT_SLASHcall_GT,
  [3514] = 1,
    ACTIONS(680), 1,
      anon_sym_GT,
  [3518] = 1,
    ACTIONS(682), 1,
      anon_sym_QMARK_GT,
  [3522] = 1,
    ACTIONS(684), 1,
      anon_sym_GT,
  [3526] = 1,
    ACTIONS(686), 1,
      anon_sym_DQUOTE,
  [3530] = 1,
    ACTIONS(688), 1,
      anon_sym_DQUOTE,
  [3534] = 1,
    ACTIONS(690), 1,
      anon_sym_GT,
  [3538] = 1,
    ACTIONS(692), 1,
      anon_sym_RPAREN,
  [3542] = 1,
    ACTIONS(694), 1,
      anon_sym_SLASH_GT,
  [3546] = 1,
    ACTIONS(696), 1,
      anon_sym_DQUOTE,
  [3550] = 1,
    ACTIONS(698), 1,
      anon_sym_DQUOTE,
  [3554] = 1,
    ACTIONS(700), 1,
      anon_sym_GT,
  [3558] = 1,
    ACTIONS(702), 1,
      anon_sym_LTelse_GT,
  [3562] = 1,
    ACTIONS(704), 1,
      anon_sym_LT_SLASHfilter_GT,
  [3566] = 1,
    ACTIONS(706), 1,
      anon_sym_DQUOTE,
  [3570] = 1,
    ACTIONS(708), 1,
      anon_sym_DQUOTE,
  [3574] = 1,
    ACTIONS(710), 1,
      anon_sym_EQ,
  [3578] = 1,
    ACTIONS(712), 1,
      anon_sym_SLASH_GT,
  [3582] = 1,
    ACTIONS(714), 1,
      anon_sym_EQ,
  [3586] = 1,
    ACTIONS(716), 1,
      anon_sym_LT_SLASHaggregate_GT,
  [3590] = 1,
    ACTIONS(718), 1,
      anon_sym_DQUOTE,
  [3594] = 1,
    ACTIONS(720), 1,
      anon_sym_LT_SLASHaggregate_GT,
  [3598] = 1,
    ACTIONS(722), 1,
      anon_sym_GT,
  [3602] = 1,
    ACTIONS(724), 1,
      anon_sym_LT_SLASHcall_GT,
  [3606] = 1,
    ACTIONS(726), 1,
      anon_sym_LT_SLASHcall_GT,
  [3610] = 1,
    ACTIONS(728), 1,
      anon_sym_EQ,
  [3614] = 1,
    ACTIONS(730), 1,
      anon_sym_SLASH_GT,
  [3618] = 1,
    ACTIONS(732), 1,
      anon_sym_SLASH_GT,
  [3622] = 1,
    ACTIONS(734), 1,
      anon_sym_LT_SLASHtarget_GT,
  [3626] = 1,
    ACTIONS(736), 1,
      anon_sym_DQUOTE,
  [3630] = 1,
    ACTIONS(738), 1,
      anon_sym_DQUOTE,
  [3634] = 1,
    ACTIONS(740), 1,
      anon_sym_DQUOTE,
  [3638] = 1,
    ACTIONS(742), 1,
      anon_sym_DQUOTE,
  [3642] = 1,
    ACTIONS(744), 1,
      anon_sym_LT_SLASHendpoint_GT,
  [3646] = 1,
    ACTIONS(746), 1,
      anon_sym_EQ,
  [3650] = 1,
    ACTIONS(748), 1,
      anon_sym_DQUOTE,
  [3654] = 1,
    ACTIONS(750), 1,
      anon_sym_DQUOTE,
  [3658] = 1,
    ACTIONS(752), 1,
      anon_sym_DQUOTE,
  [3662] = 1,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
  [3666] = 1,
    ACTIONS(756), 1,
      anon_sym_LT_SLASHsend_GT,
  [3670] = 1,
    ACTIONS(758), 1,
      anon_sym_QMARK_GT,
  [3674] = 1,
    ACTIONS(760), 1,
      anon_sym_SLASH_GT,
  [3678] = 1,
    ACTIONS(762), 1,
      anon_sym_SLASH_GT,
  [3682] = 1,
    ACTIONS(764), 1,
      anon_sym_DQUOTE,
  [3686] = 1,
    ACTIONS(766), 1,
      anon_sym_GT,
  [3690] = 1,
    ACTIONS(768), 1,
      anon_sym_DQUOTE,
  [3694] = 1,
    ACTIONS(770), 1,
      anon_sym_DQUOTE,
  [3698] = 1,
    ACTIONS(772), 1,
      anon_sym_EQ,
  [3702] = 1,
    ACTIONS(774), 1,
      anon_sym_GT,
  [3706] = 1,
    ACTIONS(776), 1,
      anon_sym_LT_SLASHfilter_GT,
  [3710] = 1,
    ACTIONS(778), 1,
      anon_sym_LT_SLASHaggregate_GT,
  [3714] = 1,
    ACTIONS(780), 1,
      anon_sym_DQUOTE,
  [3718] = 1,
    ACTIONS(782), 1,
      anon_sym_LT_SLASHcompleteCondition_GT,
  [3722] = 1,
    ACTIONS(784), 1,
      anon_sym_DQUOTE,
  [3726] = 1,
    ACTIONS(786), 1,
      anon_sym_EQ,
  [3730] = 1,
    ACTIONS(788), 1,
      anon_sym_LT_SLASHiterate_GT,
  [3734] = 1,
    ACTIONS(790), 1,
      anon_sym_EQ,
  [3738] = 1,
    ACTIONS(792), 1,
      anon_sym_EQ,
  [3742] = 1,
    ACTIONS(794), 1,
      anon_sym_LT_SLASHaggregate_GT,
  [3746] = 1,
    ACTIONS(796), 1,
      anon_sym_DQUOTE,
  [3750] = 1,
    ACTIONS(798), 1,
      anon_sym_EQ,
  [3754] = 1,
    ACTIONS(800), 1,
      anon_sym_EQ,
  [3758] = 1,
    ACTIONS(802), 1,
      anon_sym_EQ,
  [3762] = 1,
    ACTIONS(804), 1,
      anon_sym_GT,
  [3766] = 1,
    ACTIONS(806), 1,
      anon_sym_EQ,
  [3770] = 1,
    ACTIONS(808), 1,
      anon_sym_LT_SLASHaggregate_GT,
  [3774] = 1,
    ACTIONS(810), 1,
      anon_sym_EQ,
  [3778] = 1,
    ACTIONS(812), 1,
      anon_sym_EQ,
  [3782] = 1,
    ACTIONS(814), 1,
      anon_sym_GT,
  [3786] = 1,
    ACTIONS(816), 1,
      anon_sym_EQ,
  [3790] = 1,
    ACTIONS(818), 1,
      anon_sym_LT_SLASHendpoint_GT,
  [3794] = 1,
    ACTIONS(820), 1,
      anon_sym_EQ,
  [3798] = 1,
    ACTIONS(822), 1,
      anon_sym_EQ,
  [3802] = 1,
    ACTIONS(824), 1,
      anon_sym_EQ,
  [3806] = 1,
    ACTIONS(826), 1,
      anon_sym_LT_SLASHcall_GT,
  [3810] = 1,
    ACTIONS(828), 1,
      anon_sym_LT_SLASHcall_GT,
  [3814] = 1,
    ACTIONS(830), 1,
      anon_sym_EQ,
  [3818] = 1,
    ACTIONS(832), 1,
      anon_sym_GT,
  [3822] = 1,
    ACTIONS(834), 1,
      anon_sym_DQUOTE,
  [3826] = 1,
    ACTIONS(836), 1,
      anon_sym_DQUOTE,
  [3830] = 1,
    ACTIONS(838), 1,
      anon_sym_DQUOTE,
  [3834] = 1,
    ACTIONS(840), 1,
      anon_sym_DQUOTE,
  [3838] = 1,
    ACTIONS(842), 1,
      anon_sym_GT,
  [3842] = 1,
    ACTIONS(844), 1,
      anon_sym_DQUOTE,
  [3846] = 1,
    ACTIONS(846), 1,
      anon_sym_DQUOTE,
  [3850] = 1,
    ACTIONS(848), 1,
      anon_sym_DQUOTE,
  [3854] = 1,
    ACTIONS(850), 1,
      anon_sym_DQUOTE,
  [3858] = 1,
    ACTIONS(852), 1,
      anon_sym_LT_SLASHretriesBeforeSuspension_GT,
  [3862] = 1,
    ACTIONS(854), 1,
      anon_sym_LT_SLASHretryDelay_GT,
  [3866] = 1,
    ACTIONS(856), 1,
      anon_sym_EQ,
  [3870] = 1,
    ACTIONS(858), 1,
      anon_sym_GT,
  [3874] = 1,
    ACTIONS(860), 1,
      anon_sym_EQ,
  [3878] = 1,
    ACTIONS(862), 1,
      anon_sym_LT_SLASHinitialDuration_GT,
  [3882] = 1,
    ACTIONS(864), 1,
      anon_sym_LT_SLASHprogressionFactor_GT,
  [3886] = 1,
    ACTIONS(866), 1,
      anon_sym_LT_SLASHmaximumDuration_GT,
  [3890] = 1,
    ACTIONS(868), 1,
      anon_sym_DQUOTE,
  [3894] = 1,
    ACTIONS(870), 1,
      anon_sym_DQUOTE,
  [3898] = 1,
    ACTIONS(872), 1,
      anon_sym_DQUOTE,
  [3902] = 1,
    ACTIONS(874), 1,
      anon_sym_DQUOTE,
  [3906] = 1,
    ACTIONS(876), 1,
      anon_sym_LT_SLASHendpoint_GT,
  [3910] = 1,
    ACTIONS(878), 1,
      anon_sym_LT_SLASHforeach_GT,
  [3914] = 1,
    ACTIONS(880), 1,
      anon_sym_DQUOTE,
  [3918] = 1,
    ACTIONS(882), 1,
      anon_sym_LT_SLASHfilter_GT,
  [3922] = 1,
    ACTIONS(884), 1,
      sym_expression_string,
  [3926] = 1,
    ACTIONS(886), 1,
      anon_sym_max,
  [3930] = 1,
    ACTIONS(888), 1,
      anon_sym_DQUOTE,
  [3934] = 1,
    ACTIONS(890), 1,
      anon_sym_DQUOTE,
  [3938] = 1,
    ACTIONS(892), 1,
      anon_sym_LT_SLASHaggregate_GT,
  [3942] = 1,
    ACTIONS(894), 1,
      anon_sym_DQUOTE,
  [3946] = 1,
    ACTIONS(896), 1,
      sym_encoding,
  [3950] = 1,
    ACTIONS(898), 1,
      anon_sym_GT,
  [3954] = 1,
    ACTIONS(900), 1,
      anon_sym_LT_SLASHaggregate_GT,
  [3958] = 1,
    ACTIONS(902), 1,
      anon_sym_DQUOTE,
  [3962] = 1,
    ACTIONS(904), 1,
      anon_sym_LT_SLASHaggregate_GT,
  [3966] = 1,
    ACTIONS(906), 1,
      anon_sym_DQUOTE,
  [3970] = 1,
    ACTIONS(908), 1,
      anon_sym_DQUOTE,
  [3974] = 1,
    ACTIONS(910), 1,
      anon_sym_DQUOTE,
  [3978] = 1,
    ACTIONS(912), 1,
      anon_sym_DQUOTE,
  [3982] = 1,
    ACTIONS(914), 1,
      anon_sym_LT_SLASHendpoint_GT,
  [3986] = 1,
    ACTIONS(916), 1,
      anon_sym_EQ,
  [3990] = 1,
    ACTIONS(918), 1,
      anon_sym_GT,
  [3994] = 1,
    ACTIONS(920), 1,
      sym_version_number,
  [3998] = 1,
    ACTIONS(922), 1,
      anon_sym_LT_SLASHforeach_GT,
  [4002] = 1,
    ACTIONS(924), 1,
      anon_sym_DQUOTE,
  [4006] = 1,
    ACTIONS(926), 1,
      anon_sym_DQUOTE,
  [4010] = 1,
    ACTIONS(928), 1,
      anon_sym_SLASH_GT,
  [4014] = 1,
    ACTIONS(930), 1,
      anon_sym_LT_SLASHaggregate_GT,
  [4018] = 1,
    ACTIONS(932), 1,
      anon_sym_EQ,
  [4022] = 1,
    ACTIONS(934), 1,
      anon_sym_LT_SLASHaggregate_GT,
  [4026] = 1,
    ACTIONS(936), 1,
      anon_sym_EQ,
  [4030] = 1,
    ACTIONS(938), 1,
      anon_sym_LT_SLASHcompleteCondition_GT,
  [4034] = 1,
    ACTIONS(940), 1,
      anon_sym_EQ,
  [4038] = 1,
    ACTIONS(942), 1,
      anon_sym_EQ,
  [4042] = 1,
    ACTIONS(944), 1,
      anon_sym_EQ,
  [4046] = 1,
    ACTIONS(946), 1,
      anon_sym_LT_SLASHsend_GT,
  [4050] = 1,
    ACTIONS(948), 1,
      anon_sym_EQ,
  [4054] = 1,
    ACTIONS(950), 1,
      anon_sym_EQ,
  [4058] = 1,
    ACTIONS(952), 1,
      anon_sym_DQUOTE,
  [4062] = 1,
    ACTIONS(954), 1,
      anon_sym_LT_SLASHresponseAction_GT,
  [4066] = 1,
    ACTIONS(956), 1,
      anon_sym_GT,
  [4070] = 1,
    ACTIONS(958), 1,
      anon_sym_EQ,
  [4074] = 1,
    ACTIONS(960), 1,
      ts_builtin_sym_end,
  [4078] = 1,
    ACTIONS(962), 1,
      anon_sym_GT,
  [4082] = 1,
    ACTIONS(964), 1,
      anon_sym_LT_SLASHaggregate_GT,
  [4086] = 1,
    ACTIONS(966), 1,
      anon_sym_LT_SLASHtarget_GT,
  [4090] = 1,
    ACTIONS(968), 1,
      anon_sym_DQUOTE,
  [4094] = 1,
    ACTIONS(970), 1,
      anon_sym_LT_SLASHtarget_GT,
  [4098] = 1,
    ACTIONS(972), 1,
      anon_sym_DQUOTE,
  [4102] = 1,
    ACTIONS(974), 1,
      anon_sym_DQUOTE,
  [4106] = 1,
    ACTIONS(976), 1,
      anon_sym_DQUOTE,
  [4110] = 1,
    ACTIONS(978), 1,
      anon_sym_LT_SLASHtarget_GT,
  [4114] = 1,
    ACTIONS(980), 1,
      anon_sym_DQUOTE,
  [4118] = 1,
    ACTIONS(982), 1,
      anon_sym_DQUOTE,
  [4122] = 1,
    ACTIONS(984), 1,
      anon_sym_LT_SLASHtarget_GT,
  [4126] = 1,
    ACTIONS(986), 1,
      anon_sym_LT_SLASHiterate_GT,
  [4130] = 1,
    ACTIONS(988), 1,
      anon_sym_LT_SLASHduration_GT,
  [4134] = 1,
    ACTIONS(990), 1,
      anon_sym_LT_SLASHiterate_GT,
  [4138] = 1,
    ACTIONS(992), 1,
      anon_sym_DQUOTE,
  [4142] = 1,
    ACTIONS(994), 1,
      anon_sym_EQ,
  [4146] = 1,
    ACTIONS(996), 1,
      anon_sym_LT_SLASHfilter_GT,
  [4150] = 1,
    ACTIONS(998), 1,
      anon_sym_LT_SLASHiterate_GT,
  [4154] = 1,
    ACTIONS(1000), 1,
      anon_sym_LT_SLASHcall_GT,
  [4158] = 1,
    ACTIONS(1002), 1,
      anon_sym_LTelse_GT,
  [4162] = 1,
    ACTIONS(1004), 1,
      anon_sym_LT_SLASHiterate_GT,
  [4166] = 1,
    ACTIONS(1006), 1,
      anon_sym_DQUOTE,
  [4170] = 1,
    ACTIONS(1008), 1,
      anon_sym_DQUOTE,
  [4174] = 1,
    ACTIONS(1010), 1,
      anon_sym_DQUOTE,
  [4178] = 1,
    ACTIONS(1012), 1,
      anon_sym_DQUOTE,
  [4182] = 1,
    ACTIONS(1014), 1,
      anon_sym_DQUOTE,
  [4186] = 1,
    ACTIONS(1016), 1,
      anon_sym_DQUOTE,
  [4190] = 1,
    ACTIONS(1018), 1,
      anon_sym_GT,
  [4194] = 1,
    ACTIONS(1020), 1,
      anon_sym_DQUOTE,
  [4198] = 1,
    ACTIONS(1022), 1,
      anon_sym_DQUOTE,
  [4202] = 1,
    ACTIONS(1024), 1,
      anon_sym_GT,
  [4206] = 1,
    ACTIONS(1026), 1,
      anon_sym_DQUOTE,
  [4210] = 1,
    ACTIONS(1028), 1,
      anon_sym_GT,
  [4214] = 1,
    ACTIONS(1030), 1,
      anon_sym_LT_SLASHforeach_GT,
  [4218] = 1,
    ACTIONS(1032), 1,
      anon_sym_LT_SLASHcall_GT,
  [4222] = 1,
    ACTIONS(1034), 1,
      anon_sym_EQ,
  [4226] = 1,
    ACTIONS(1036), 1,
      anon_sym_LT_SLASHcall_GT,
  [4230] = 1,
    ACTIONS(1038), 1,
      anon_sym_EQ,
  [4234] = 1,
    ACTIONS(1040), 1,
      anon_sym_EQ,
  [4238] = 1,
    ACTIONS(1042), 1,
      anon_sym_LT_SLASHforeach_GT,
  [4242] = 1,
    ACTIONS(1044), 1,
      anon_sym_DQUOTE,
  [4246] = 1,
    ACTIONS(1046), 1,
      anon_sym_EQ,
  [4250] = 1,
    ACTIONS(1048), 1,
      sym_expression_string,
  [4254] = 1,
    ACTIONS(1050), 1,
      anon_sym_LT_SLASHtarget_GT,
  [4258] = 1,
    ACTIONS(1052), 1,
      anon_sym_LT_SLASHtarget_GT,
  [4262] = 1,
    ACTIONS(1054), 1,
      anon_sym_DQUOTE,
  [4266] = 1,
    ACTIONS(1056), 1,
      anon_sym_LT_SLASHtarget_GT,
  [4270] = 1,
    ACTIONS(1058), 1,
      anon_sym_DQUOTE,
  [4274] = 1,
    ACTIONS(1060), 1,
      anon_sym_DQUOTE,
  [4278] = 1,
    ACTIONS(1062), 1,
      anon_sym_LT_SLASHtarget_GT,
  [4282] = 1,
    ACTIONS(1064), 1,
      anon_sym_LT_SLASHtarget_GT,
  [4286] = 1,
    ACTIONS(1066), 1,
      anon_sym_DQUOTE,
  [4290] = 1,
    ACTIONS(1068), 1,
      anon_sym_LT_SLASHtarget_GT,
  [4294] = 1,
    ACTIONS(1070), 1,
      anon_sym_LT_SLASHiterate_GT,
  [4298] = 1,
    ACTIONS(1072), 1,
      anon_sym_LT_SLASHiterate_GT,
  [4302] = 1,
    ACTIONS(1074), 1,
      anon_sym_LT_SLASHcall_GT,
  [4306] = 1,
    ACTIONS(1076), 1,
      anon_sym_LT_SLASHiterate_GT,
  [4310] = 1,
    ACTIONS(1078), 1,
      anon_sym_LT_SLASHcall_GT,
  [4314] = 1,
    ACTIONS(1080), 1,
      anon_sym_DQUOTE,
  [4318] = 1,
    ACTIONS(1082), 1,
      anon_sym_LT_SLASHiterate_GT,
  [4322] = 1,
    ACTIONS(1084), 1,
      anon_sym_LT_SLASHiterate_GT,
  [4326] = 1,
    ACTIONS(1086), 1,
      anon_sym_EQ,
  [4330] = 1,
    ACTIONS(1088), 1,
      anon_sym_LT_SLASHiterate_GT,
  [4334] = 1,
    ACTIONS(1090), 1,
      anon_sym_DQUOTE,
  [4338] = 1,
    ACTIONS(1092), 1,
      anon_sym_DQUOTE,
  [4342] = 1,
    ACTIONS(1094), 1,
      anon_sym_DQUOTE,
  [4346] = 1,
    ACTIONS(1096), 1,
      anon_sym_DQUOTE,
  [4350] = 1,
    ACTIONS(1098), 1,
      anon_sym_GT,
  [4354] = 1,
    ACTIONS(1100), 1,
      anon_sym_DQUOTE,
  [4358] = 1,
    ACTIONS(1102), 1,
      anon_sym_GT,
  [4362] = 1,
    ACTIONS(1104), 1,
      anon_sym_GT,
  [4366] = 1,
    ACTIONS(1106), 1,
      anon_sym_LT_SLASHcompleteCondition_GT,
  [4370] = 1,
    ACTIONS(1108), 1,
      anon_sym_DQUOTE,
  [4374] = 1,
    ACTIONS(1110), 1,
      anon_sym_EQ,
  [4378] = 1,
    ACTIONS(1112), 1,
      anon_sym_EQ,
  [4382] = 1,
    ACTIONS(1114), 1,
      anon_sym_LT_SLASHendpoint_GT,
  [4386] = 1,
    ACTIONS(1116), 1,
      anon_sym_LT_SLASHtarget_GT,
  [4390] = 1,
    ACTIONS(1118), 1,
      anon_sym_LT_SLASHtarget_GT,
  [4394] = 1,
    ACTIONS(1120), 1,
      anon_sym_DQUOTE,
  [4398] = 1,
    ACTIONS(1122), 1,
      anon_sym_LT_SLASHtarget_GT,
  [4402] = 1,
    ACTIONS(1124), 1,
      anon_sym_LT_SLASHtarget_GT,
  [4406] = 1,
    ACTIONS(1126), 1,
      anon_sym_LT_SLASHiterate_GT,
  [4410] = 1,
    ACTIONS(1128), 1,
      anon_sym_LT_SLASHiterate_GT,
  [4414] = 1,
    ACTIONS(1130), 1,
      anon_sym_LT_SLASHaggregate_GT,
  [4418] = 1,
    ACTIONS(1132), 1,
      anon_sym_LT_SLASHiterate_GT,
  [4422] = 1,
    ACTIONS(1134), 1,
      anon_sym_LT_SLASHiterate_GT,
  [4426] = 1,
    ACTIONS(1136), 1,
      anon_sym_DQUOTE,
  [4430] = 1,
    ACTIONS(1138), 1,
      anon_sym_GT,
  [4434] = 1,
    ACTIONS(1140), 1,
      anon_sym_LT_SLASHiterate_GT,
  [4438] = 1,
    ACTIONS(1142), 1,
      anon_sym_LT_SLASHtarget_GT,
  [4442] = 1,
    ACTIONS(1144), 1,
      anon_sym_LT_SLASHiterate_GT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 55,
  [SMALL_STATE(4)] = 107,
  [SMALL_STATE(5)] = 159,
  [SMALL_STATE(6)] = 211,
  [SMALL_STATE(7)] = 263,
  [SMALL_STATE(8)] = 315,
  [SMALL_STATE(9)] = 367,
  [SMALL_STATE(10)] = 419,
  [SMALL_STATE(11)] = 471,
  [SMALL_STATE(12)] = 523,
  [SMALL_STATE(13)] = 575,
  [SMALL_STATE(14)] = 627,
  [SMALL_STATE(15)] = 679,
  [SMALL_STATE(16)] = 700,
  [SMALL_STATE(17)] = 721,
  [SMALL_STATE(18)] = 741,
  [SMALL_STATE(19)] = 761,
  [SMALL_STATE(20)] = 781,
  [SMALL_STATE(21)] = 801,
  [SMALL_STATE(22)] = 821,
  [SMALL_STATE(23)] = 841,
  [SMALL_STATE(24)] = 861,
  [SMALL_STATE(25)] = 881,
  [SMALL_STATE(26)] = 901,
  [SMALL_STATE(27)] = 921,
  [SMALL_STATE(28)] = 941,
  [SMALL_STATE(29)] = 961,
  [SMALL_STATE(30)] = 981,
  [SMALL_STATE(31)] = 1001,
  [SMALL_STATE(32)] = 1021,
  [SMALL_STATE(33)] = 1041,
  [SMALL_STATE(34)] = 1061,
  [SMALL_STATE(35)] = 1081,
  [SMALL_STATE(36)] = 1101,
  [SMALL_STATE(37)] = 1121,
  [SMALL_STATE(38)] = 1141,
  [SMALL_STATE(39)] = 1161,
  [SMALL_STATE(40)] = 1181,
  [SMALL_STATE(41)] = 1201,
  [SMALL_STATE(42)] = 1221,
  [SMALL_STATE(43)] = 1241,
  [SMALL_STATE(44)] = 1261,
  [SMALL_STATE(45)] = 1281,
  [SMALL_STATE(46)] = 1301,
  [SMALL_STATE(47)] = 1321,
  [SMALL_STATE(48)] = 1341,
  [SMALL_STATE(49)] = 1361,
  [SMALL_STATE(50)] = 1381,
  [SMALL_STATE(51)] = 1401,
  [SMALL_STATE(52)] = 1421,
  [SMALL_STATE(53)] = 1441,
  [SMALL_STATE(54)] = 1461,
  [SMALL_STATE(55)] = 1481,
  [SMALL_STATE(56)] = 1501,
  [SMALL_STATE(57)] = 1518,
  [SMALL_STATE(58)] = 1541,
  [SMALL_STATE(59)] = 1564,
  [SMALL_STATE(60)] = 1601,
  [SMALL_STATE(61)] = 1624,
  [SMALL_STATE(62)] = 1661,
  [SMALL_STATE(63)] = 1695,
  [SMALL_STATE(64)] = 1719,
  [SMALL_STATE(65)] = 1743,
  [SMALL_STATE(66)] = 1767,
  [SMALL_STATE(67)] = 1786,
  [SMALL_STATE(68)] = 1805,
  [SMALL_STATE(69)] = 1824,
  [SMALL_STATE(70)] = 1846,
  [SMALL_STATE(71)] = 1868,
  [SMALL_STATE(72)] = 1888,
  [SMALL_STATE(73)] = 1910,
  [SMALL_STATE(74)] = 1922,
  [SMALL_STATE(75)] = 1944,
  [SMALL_STATE(76)] = 1956,
  [SMALL_STATE(77)] = 1976,
  [SMALL_STATE(78)] = 1998,
  [SMALL_STATE(79)] = 2018,
  [SMALL_STATE(80)] = 2029,
  [SMALL_STATE(81)] = 2040,
  [SMALL_STATE(82)] = 2056,
  [SMALL_STATE(83)] = 2072,
  [SMALL_STATE(84)] = 2094,
  [SMALL_STATE(85)] = 2116,
  [SMALL_STATE(86)] = 2132,
  [SMALL_STATE(87)] = 2141,
  [SMALL_STATE(88)] = 2156,
  [SMALL_STATE(89)] = 2165,
  [SMALL_STATE(90)] = 2174,
  [SMALL_STATE(91)] = 2183,
  [SMALL_STATE(92)] = 2192,
  [SMALL_STATE(93)] = 2201,
  [SMALL_STATE(94)] = 2210,
  [SMALL_STATE(95)] = 2219,
  [SMALL_STATE(96)] = 2234,
  [SMALL_STATE(97)] = 2249,
  [SMALL_STATE(98)] = 2258,
  [SMALL_STATE(99)] = 2266,
  [SMALL_STATE(100)] = 2274,
  [SMALL_STATE(101)] = 2282,
  [SMALL_STATE(102)] = 2298,
  [SMALL_STATE(103)] = 2306,
  [SMALL_STATE(104)] = 2314,
  [SMALL_STATE(105)] = 2326,
  [SMALL_STATE(106)] = 2342,
  [SMALL_STATE(107)] = 2354,
  [SMALL_STATE(108)] = 2370,
  [SMALL_STATE(109)] = 2382,
  [SMALL_STATE(110)] = 2394,
  [SMALL_STATE(111)] = 2410,
  [SMALL_STATE(112)] = 2423,
  [SMALL_STATE(113)] = 2434,
  [SMALL_STATE(114)] = 2445,
  [SMALL_STATE(115)] = 2456,
  [SMALL_STATE(116)] = 2469,
  [SMALL_STATE(117)] = 2480,
  [SMALL_STATE(118)] = 2493,
  [SMALL_STATE(119)] = 2500,
  [SMALL_STATE(120)] = 2511,
  [SMALL_STATE(121)] = 2518,
  [SMALL_STATE(122)] = 2529,
  [SMALL_STATE(123)] = 2540,
  [SMALL_STATE(124)] = 2547,
  [SMALL_STATE(125)] = 2558,
  [SMALL_STATE(126)] = 2569,
  [SMALL_STATE(127)] = 2582,
  [SMALL_STATE(128)] = 2593,
  [SMALL_STATE(129)] = 2600,
  [SMALL_STATE(130)] = 2613,
  [SMALL_STATE(131)] = 2624,
  [SMALL_STATE(132)] = 2635,
  [SMALL_STATE(133)] = 2642,
  [SMALL_STATE(134)] = 2649,
  [SMALL_STATE(135)] = 2662,
  [SMALL_STATE(136)] = 2673,
  [SMALL_STATE(137)] = 2686,
  [SMALL_STATE(138)] = 2693,
  [SMALL_STATE(139)] = 2700,
  [SMALL_STATE(140)] = 2707,
  [SMALL_STATE(141)] = 2713,
  [SMALL_STATE(142)] = 2723,
  [SMALL_STATE(143)] = 2733,
  [SMALL_STATE(144)] = 2743,
  [SMALL_STATE(145)] = 2753,
  [SMALL_STATE(146)] = 2763,
  [SMALL_STATE(147)] = 2773,
  [SMALL_STATE(148)] = 2779,
  [SMALL_STATE(149)] = 2787,
  [SMALL_STATE(150)] = 2793,
  [SMALL_STATE(151)] = 2801,
  [SMALL_STATE(152)] = 2811,
  [SMALL_STATE(153)] = 2821,
  [SMALL_STATE(154)] = 2831,
  [SMALL_STATE(155)] = 2841,
  [SMALL_STATE(156)] = 2851,
  [SMALL_STATE(157)] = 2861,
  [SMALL_STATE(158)] = 2869,
  [SMALL_STATE(159)] = 2879,
  [SMALL_STATE(160)] = 2885,
  [SMALL_STATE(161)] = 2895,
  [SMALL_STATE(162)] = 2901,
  [SMALL_STATE(163)] = 2911,
  [SMALL_STATE(164)] = 2917,
  [SMALL_STATE(165)] = 2927,
  [SMALL_STATE(166)] = 2937,
  [SMALL_STATE(167)] = 2945,
  [SMALL_STATE(168)] = 2953,
  [SMALL_STATE(169)] = 2958,
  [SMALL_STATE(170)] = 2965,
  [SMALL_STATE(171)] = 2972,
  [SMALL_STATE(172)] = 2979,
  [SMALL_STATE(173)] = 2986,
  [SMALL_STATE(174)] = 2993,
  [SMALL_STATE(175)] = 3000,
  [SMALL_STATE(176)] = 3007,
  [SMALL_STATE(177)] = 3014,
  [SMALL_STATE(178)] = 3021,
  [SMALL_STATE(179)] = 3028,
  [SMALL_STATE(180)] = 3035,
  [SMALL_STATE(181)] = 3040,
  [SMALL_STATE(182)] = 3047,
  [SMALL_STATE(183)] = 3054,
  [SMALL_STATE(184)] = 3061,
  [SMALL_STATE(185)] = 3068,
  [SMALL_STATE(186)] = 3075,
  [SMALL_STATE(187)] = 3082,
  [SMALL_STATE(188)] = 3089,
  [SMALL_STATE(189)] = 3096,
  [SMALL_STATE(190)] = 3103,
  [SMALL_STATE(191)] = 3110,
  [SMALL_STATE(192)] = 3117,
  [SMALL_STATE(193)] = 3122,
  [SMALL_STATE(194)] = 3129,
  [SMALL_STATE(195)] = 3136,
  [SMALL_STATE(196)] = 3143,
  [SMALL_STATE(197)] = 3150,
  [SMALL_STATE(198)] = 3157,
  [SMALL_STATE(199)] = 3164,
  [SMALL_STATE(200)] = 3171,
  [SMALL_STATE(201)] = 3178,
  [SMALL_STATE(202)] = 3185,
  [SMALL_STATE(203)] = 3190,
  [SMALL_STATE(204)] = 3197,
  [SMALL_STATE(205)] = 3204,
  [SMALL_STATE(206)] = 3211,
  [SMALL_STATE(207)] = 3216,
  [SMALL_STATE(208)] = 3223,
  [SMALL_STATE(209)] = 3228,
  [SMALL_STATE(210)] = 3235,
  [SMALL_STATE(211)] = 3242,
  [SMALL_STATE(212)] = 3249,
  [SMALL_STATE(213)] = 3254,
  [SMALL_STATE(214)] = 3261,
  [SMALL_STATE(215)] = 3266,
  [SMALL_STATE(216)] = 3273,
  [SMALL_STATE(217)] = 3278,
  [SMALL_STATE(218)] = 3285,
  [SMALL_STATE(219)] = 3292,
  [SMALL_STATE(220)] = 3299,
  [SMALL_STATE(221)] = 3306,
  [SMALL_STATE(222)] = 3313,
  [SMALL_STATE(223)] = 3318,
  [SMALL_STATE(224)] = 3323,
  [SMALL_STATE(225)] = 3330,
  [SMALL_STATE(226)] = 3337,
  [SMALL_STATE(227)] = 3344,
  [SMALL_STATE(228)] = 3351,
  [SMALL_STATE(229)] = 3358,
  [SMALL_STATE(230)] = 3365,
  [SMALL_STATE(231)] = 3372,
  [SMALL_STATE(232)] = 3379,
  [SMALL_STATE(233)] = 3386,
  [SMALL_STATE(234)] = 3393,
  [SMALL_STATE(235)] = 3400,
  [SMALL_STATE(236)] = 3407,
  [SMALL_STATE(237)] = 3414,
  [SMALL_STATE(238)] = 3421,
  [SMALL_STATE(239)] = 3428,
  [SMALL_STATE(240)] = 3435,
  [SMALL_STATE(241)] = 3440,
  [SMALL_STATE(242)] = 3447,
  [SMALL_STATE(243)] = 3452,
  [SMALL_STATE(244)] = 3457,
  [SMALL_STATE(245)] = 3464,
  [SMALL_STATE(246)] = 3471,
  [SMALL_STATE(247)] = 3478,
  [SMALL_STATE(248)] = 3485,
  [SMALL_STATE(249)] = 3490,
  [SMALL_STATE(250)] = 3497,
  [SMALL_STATE(251)] = 3504,
  [SMALL_STATE(252)] = 3509,
  [SMALL_STATE(253)] = 3514,
  [SMALL_STATE(254)] = 3518,
  [SMALL_STATE(255)] = 3522,
  [SMALL_STATE(256)] = 3526,
  [SMALL_STATE(257)] = 3530,
  [SMALL_STATE(258)] = 3534,
  [SMALL_STATE(259)] = 3538,
  [SMALL_STATE(260)] = 3542,
  [SMALL_STATE(261)] = 3546,
  [SMALL_STATE(262)] = 3550,
  [SMALL_STATE(263)] = 3554,
  [SMALL_STATE(264)] = 3558,
  [SMALL_STATE(265)] = 3562,
  [SMALL_STATE(266)] = 3566,
  [SMALL_STATE(267)] = 3570,
  [SMALL_STATE(268)] = 3574,
  [SMALL_STATE(269)] = 3578,
  [SMALL_STATE(270)] = 3582,
  [SMALL_STATE(271)] = 3586,
  [SMALL_STATE(272)] = 3590,
  [SMALL_STATE(273)] = 3594,
  [SMALL_STATE(274)] = 3598,
  [SMALL_STATE(275)] = 3602,
  [SMALL_STATE(276)] = 3606,
  [SMALL_STATE(277)] = 3610,
  [SMALL_STATE(278)] = 3614,
  [SMALL_STATE(279)] = 3618,
  [SMALL_STATE(280)] = 3622,
  [SMALL_STATE(281)] = 3626,
  [SMALL_STATE(282)] = 3630,
  [SMALL_STATE(283)] = 3634,
  [SMALL_STATE(284)] = 3638,
  [SMALL_STATE(285)] = 3642,
  [SMALL_STATE(286)] = 3646,
  [SMALL_STATE(287)] = 3650,
  [SMALL_STATE(288)] = 3654,
  [SMALL_STATE(289)] = 3658,
  [SMALL_STATE(290)] = 3662,
  [SMALL_STATE(291)] = 3666,
  [SMALL_STATE(292)] = 3670,
  [SMALL_STATE(293)] = 3674,
  [SMALL_STATE(294)] = 3678,
  [SMALL_STATE(295)] = 3682,
  [SMALL_STATE(296)] = 3686,
  [SMALL_STATE(297)] = 3690,
  [SMALL_STATE(298)] = 3694,
  [SMALL_STATE(299)] = 3698,
  [SMALL_STATE(300)] = 3702,
  [SMALL_STATE(301)] = 3706,
  [SMALL_STATE(302)] = 3710,
  [SMALL_STATE(303)] = 3714,
  [SMALL_STATE(304)] = 3718,
  [SMALL_STATE(305)] = 3722,
  [SMALL_STATE(306)] = 3726,
  [SMALL_STATE(307)] = 3730,
  [SMALL_STATE(308)] = 3734,
  [SMALL_STATE(309)] = 3738,
  [SMALL_STATE(310)] = 3742,
  [SMALL_STATE(311)] = 3746,
  [SMALL_STATE(312)] = 3750,
  [SMALL_STATE(313)] = 3754,
  [SMALL_STATE(314)] = 3758,
  [SMALL_STATE(315)] = 3762,
  [SMALL_STATE(316)] = 3766,
  [SMALL_STATE(317)] = 3770,
  [SMALL_STATE(318)] = 3774,
  [SMALL_STATE(319)] = 3778,
  [SMALL_STATE(320)] = 3782,
  [SMALL_STATE(321)] = 3786,
  [SMALL_STATE(322)] = 3790,
  [SMALL_STATE(323)] = 3794,
  [SMALL_STATE(324)] = 3798,
  [SMALL_STATE(325)] = 3802,
  [SMALL_STATE(326)] = 3806,
  [SMALL_STATE(327)] = 3810,
  [SMALL_STATE(328)] = 3814,
  [SMALL_STATE(329)] = 3818,
  [SMALL_STATE(330)] = 3822,
  [SMALL_STATE(331)] = 3826,
  [SMALL_STATE(332)] = 3830,
  [SMALL_STATE(333)] = 3834,
  [SMALL_STATE(334)] = 3838,
  [SMALL_STATE(335)] = 3842,
  [SMALL_STATE(336)] = 3846,
  [SMALL_STATE(337)] = 3850,
  [SMALL_STATE(338)] = 3854,
  [SMALL_STATE(339)] = 3858,
  [SMALL_STATE(340)] = 3862,
  [SMALL_STATE(341)] = 3866,
  [SMALL_STATE(342)] = 3870,
  [SMALL_STATE(343)] = 3874,
  [SMALL_STATE(344)] = 3878,
  [SMALL_STATE(345)] = 3882,
  [SMALL_STATE(346)] = 3886,
  [SMALL_STATE(347)] = 3890,
  [SMALL_STATE(348)] = 3894,
  [SMALL_STATE(349)] = 3898,
  [SMALL_STATE(350)] = 3902,
  [SMALL_STATE(351)] = 3906,
  [SMALL_STATE(352)] = 3910,
  [SMALL_STATE(353)] = 3914,
  [SMALL_STATE(354)] = 3918,
  [SMALL_STATE(355)] = 3922,
  [SMALL_STATE(356)] = 3926,
  [SMALL_STATE(357)] = 3930,
  [SMALL_STATE(358)] = 3934,
  [SMALL_STATE(359)] = 3938,
  [SMALL_STATE(360)] = 3942,
  [SMALL_STATE(361)] = 3946,
  [SMALL_STATE(362)] = 3950,
  [SMALL_STATE(363)] = 3954,
  [SMALL_STATE(364)] = 3958,
  [SMALL_STATE(365)] = 3962,
  [SMALL_STATE(366)] = 3966,
  [SMALL_STATE(367)] = 3970,
  [SMALL_STATE(368)] = 3974,
  [SMALL_STATE(369)] = 3978,
  [SMALL_STATE(370)] = 3982,
  [SMALL_STATE(371)] = 3986,
  [SMALL_STATE(372)] = 3990,
  [SMALL_STATE(373)] = 3994,
  [SMALL_STATE(374)] = 3998,
  [SMALL_STATE(375)] = 4002,
  [SMALL_STATE(376)] = 4006,
  [SMALL_STATE(377)] = 4010,
  [SMALL_STATE(378)] = 4014,
  [SMALL_STATE(379)] = 4018,
  [SMALL_STATE(380)] = 4022,
  [SMALL_STATE(381)] = 4026,
  [SMALL_STATE(382)] = 4030,
  [SMALL_STATE(383)] = 4034,
  [SMALL_STATE(384)] = 4038,
  [SMALL_STATE(385)] = 4042,
  [SMALL_STATE(386)] = 4046,
  [SMALL_STATE(387)] = 4050,
  [SMALL_STATE(388)] = 4054,
  [SMALL_STATE(389)] = 4058,
  [SMALL_STATE(390)] = 4062,
  [SMALL_STATE(391)] = 4066,
  [SMALL_STATE(392)] = 4070,
  [SMALL_STATE(393)] = 4074,
  [SMALL_STATE(394)] = 4078,
  [SMALL_STATE(395)] = 4082,
  [SMALL_STATE(396)] = 4086,
  [SMALL_STATE(397)] = 4090,
  [SMALL_STATE(398)] = 4094,
  [SMALL_STATE(399)] = 4098,
  [SMALL_STATE(400)] = 4102,
  [SMALL_STATE(401)] = 4106,
  [SMALL_STATE(402)] = 4110,
  [SMALL_STATE(403)] = 4114,
  [SMALL_STATE(404)] = 4118,
  [SMALL_STATE(405)] = 4122,
  [SMALL_STATE(406)] = 4126,
  [SMALL_STATE(407)] = 4130,
  [SMALL_STATE(408)] = 4134,
  [SMALL_STATE(409)] = 4138,
  [SMALL_STATE(410)] = 4142,
  [SMALL_STATE(411)] = 4146,
  [SMALL_STATE(412)] = 4150,
  [SMALL_STATE(413)] = 4154,
  [SMALL_STATE(414)] = 4158,
  [SMALL_STATE(415)] = 4162,
  [SMALL_STATE(416)] = 4166,
  [SMALL_STATE(417)] = 4170,
  [SMALL_STATE(418)] = 4174,
  [SMALL_STATE(419)] = 4178,
  [SMALL_STATE(420)] = 4182,
  [SMALL_STATE(421)] = 4186,
  [SMALL_STATE(422)] = 4190,
  [SMALL_STATE(423)] = 4194,
  [SMALL_STATE(424)] = 4198,
  [SMALL_STATE(425)] = 4202,
  [SMALL_STATE(426)] = 4206,
  [SMALL_STATE(427)] = 4210,
  [SMALL_STATE(428)] = 4214,
  [SMALL_STATE(429)] = 4218,
  [SMALL_STATE(430)] = 4222,
  [SMALL_STATE(431)] = 4226,
  [SMALL_STATE(432)] = 4230,
  [SMALL_STATE(433)] = 4234,
  [SMALL_STATE(434)] = 4238,
  [SMALL_STATE(435)] = 4242,
  [SMALL_STATE(436)] = 4246,
  [SMALL_STATE(437)] = 4250,
  [SMALL_STATE(438)] = 4254,
  [SMALL_STATE(439)] = 4258,
  [SMALL_STATE(440)] = 4262,
  [SMALL_STATE(441)] = 4266,
  [SMALL_STATE(442)] = 4270,
  [SMALL_STATE(443)] = 4274,
  [SMALL_STATE(444)] = 4278,
  [SMALL_STATE(445)] = 4282,
  [SMALL_STATE(446)] = 4286,
  [SMALL_STATE(447)] = 4290,
  [SMALL_STATE(448)] = 4294,
  [SMALL_STATE(449)] = 4298,
  [SMALL_STATE(450)] = 4302,
  [SMALL_STATE(451)] = 4306,
  [SMALL_STATE(452)] = 4310,
  [SMALL_STATE(453)] = 4314,
  [SMALL_STATE(454)] = 4318,
  [SMALL_STATE(455)] = 4322,
  [SMALL_STATE(456)] = 4326,
  [SMALL_STATE(457)] = 4330,
  [SMALL_STATE(458)] = 4334,
  [SMALL_STATE(459)] = 4338,
  [SMALL_STATE(460)] = 4342,
  [SMALL_STATE(461)] = 4346,
  [SMALL_STATE(462)] = 4350,
  [SMALL_STATE(463)] = 4354,
  [SMALL_STATE(464)] = 4358,
  [SMALL_STATE(465)] = 4362,
  [SMALL_STATE(466)] = 4366,
  [SMALL_STATE(467)] = 4370,
  [SMALL_STATE(468)] = 4374,
  [SMALL_STATE(469)] = 4378,
  [SMALL_STATE(470)] = 4382,
  [SMALL_STATE(471)] = 4386,
  [SMALL_STATE(472)] = 4390,
  [SMALL_STATE(473)] = 4394,
  [SMALL_STATE(474)] = 4398,
  [SMALL_STATE(475)] = 4402,
  [SMALL_STATE(476)] = 4406,
  [SMALL_STATE(477)] = 4410,
  [SMALL_STATE(478)] = 4414,
  [SMALL_STATE(479)] = 4418,
  [SMALL_STATE(480)] = 4422,
  [SMALL_STATE(481)] = 4426,
  [SMALL_STATE(482)] = 4430,
  [SMALL_STATE(483)] = 4434,
  [SMALL_STATE(484)] = 4438,
  [SMALL_STATE(485)] = 4442,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_definition_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_definition_repeat1, 2), SHIFT_REPEAT(26),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_definition_repeat1, 2), SHIFT_REPEAT(27),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_definition_repeat1, 2), SHIFT_REPEAT(142),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_definition_repeat1, 2), SHIFT_REPEAT(218),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_definition_repeat1, 2), SHIFT_REPEAT(219),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_definition_repeat1, 2), SHIFT_REPEAT(105),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_definition_repeat1, 2), SHIFT_REPEAT(220),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_definition_repeat1, 2), SHIFT_REPEAT(144),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_definition_repeat1, 2), SHIFT_REPEAT(83),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_definition_repeat1, 2), SHIFT_REPEAT(221),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_definition_repeat1, 2), SHIFT_REPEAT(62),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, .production_id = 13),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4, .production_id = 13),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, .production_id = 14),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4, .production_id = 14),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, .production_id = 12),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4, .production_id = 12),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 6, .production_id = 34),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 6, .production_id = 34),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 6, .production_id = 40),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 6, .production_id = 40),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach, 10, .production_id = 48),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach, 10, .production_id = 48),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_send, 5, .production_id = 21),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_send, 5, .production_id = 21),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log, 5, .production_id = 7),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log, 5, .production_id = 7),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 6, .production_id = 41),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 6, .production_id = 41),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 6, .production_id = 42),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 6, .production_id = 42),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5, .production_id = 21),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 5, .production_id = 21),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_respond, 1),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_respond, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_send, 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_send, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5, .production_id = 22),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 5, .production_id = 22),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log, 3, .production_id = 7),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log, 3, .production_id = 7),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5, .production_id = 23),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 5, .production_id = 23),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5, .production_id = 24),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 5, .production_id = 24),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach, 11, .production_id = 51),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach, 11, .production_id = 51),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach, 6, .production_id = 36),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach, 6, .production_id = 36),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 6, .production_id = 35),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 6, .production_id = 35),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 4, .production_id = 17),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 4, .production_id = 17),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mediator, 1),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mediator, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach, 5, .production_id = 25),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach, 5, .production_id = 25),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 3, .production_id = 8),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 3, .production_id = 8),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 3, .production_id = 9),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 3, .production_id = 9),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, .production_id = 15),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4, .production_id = 15),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 6, .production_id = 37),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 6, .production_id = 37),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 4, .production_id = 20),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 4, .production_id = 20),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iterate, 5, .production_id = 32),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iterate, 5, .production_id = 32),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 10, .production_id = 49),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 10, .production_id = 49),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 7, .production_id = 46),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 7, .production_id = 46),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 3, .production_id = 10),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 3, .production_id = 10),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 5, .production_id = 31),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 5, .production_id = 31),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 5, .production_id = 30),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 5, .production_id = 30),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log, 4, .production_id = 7),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log, 4, .production_id = 7),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 5, .production_id = 29),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 5, .production_id = 29),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 4, .production_id = 18),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 4, .production_id = 18),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_send, 4, .production_id = 12),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_send, 4, .production_id = 12),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 2),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 5, .production_id = 28),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 5, .production_id = 28),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 4, .production_id = 19),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 4, .production_id = 19),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_iterate_repeat1, 2, .production_id = 11),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_iterate_repeat1, 2, .production_id = 11), SHIFT_REPEAT(314),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_iterate_repeat1, 2, .production_id = 11), SHIFT_REPEAT(313),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_iterate_repeat1, 2, .production_id = 11), SHIFT_REPEAT(312),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_iterate_repeat1, 2, .production_id = 11), SHIFT_REPEAT(306),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_iterate_repeat1, 2, .production_id = 11), SHIFT_REPEAT(325),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_suspend_on_failure_repeat1, 2),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_suspend_on_failure_repeat1, 2), SHIFT_REPEAT(121),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_suspend_on_failure_repeat1, 2), SHIFT_REPEAT(122),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_suspend_on_failure_repeat1, 2), SHIFT_REPEAT(124),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_suspend_on_failure_repeat1, 2), SHIFT_REPEAT(116),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_xpath_repeat1, 2),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(67),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(67),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xpath, 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mark_for_suspending_repeat1, 2),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mark_for_suspending_repeat1, 2), SHIFT_REPEAT(113),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mark_for_suspending_repeat1, 2), SHIFT_REPEAT(114),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mark_for_suspending_repeat1, 2), SHIFT_REPEAT(116),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 5),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_http_endpoint_repeat2, 2),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_http_endpoint_repeat2, 2), SHIFT_REPEAT(81),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_http_endpoint_repeat2, 2), SHIFT_REPEAT(76),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_http_endpoint_repeat2, 2), SHIFT_REPEAT(64),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_codes, 4),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_codes, 3),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_timeout_repeat1, 2),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_timeout_repeat1, 2), SHIFT_REPEAT(127),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_timeout_repeat1, 2), SHIFT_REPEAT(163),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preservePayload, 5),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_http_endpoint_repeat1, 2),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_http_endpoint_repeat1, 2), SHIFT_REPEAT(309),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_http_endpoint_repeat1, 2), SHIFT_REPEAT(308),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attachPath, 5),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_iterate_repeat1, 1, .production_id = 2),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_iterate_repeat1, 1, .production_id = 3),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continueParent, 5),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_iterate_repeat1, 1, .production_id = 4),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_iterate_repeat1, 1, .production_id = 5),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential, 5),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_iterate_repeat1, 1, .production_id = 6),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_progression_factor, 3, .production_id = 38),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timeout, 3),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_initial_duration, 3, .production_id = 38),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maximum_duration, 3, .production_id = 38),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timeout, 2),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [455] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(238),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_suspend_on_failure, 2),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endpoint_error_property, 1),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 5),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_log_repeat1, 2),
  [510] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_repeat1, 2), SHIFT_REPEAT(219),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mark_for_suspending, 3),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_suspend_on_failure, 3),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retries_before_suspending, 3, .production_id = 38),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mark_for_suspending, 2),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_delay, 3, .production_id = 38),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 5),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_error_codes_repeat1, 2), SHIFT_REPEAT(135),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_error_codes_repeat1, 2),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_correlateOn, 3, .production_id = 16),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__endpoint_attribute, 5),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration, 3, .production_id = 38),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_action, 3),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complete_condition, 3),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 2),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_definition, 5, .production_id = 1),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complete_condition, 4, .production_id = 26),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complete_condition, 4, .production_id = 27),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_declaration, 3),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_definition, 4, .production_id = 1),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_info, 3),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_declaration, 4),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endpoint, 4, .production_id = 33),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 5),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_level, 5),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complete_condition, 5, .production_id = 39),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 3),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endpoint, 5, .production_id = 43),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blocking, 5),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_then, 3),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else, 2),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_complete, 5, .production_id = 16),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_endpoint, 3),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_encoding_declaration, 3),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 5),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_eval, 3),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 6, .production_id = 44),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else, 3),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_count, 4, .production_id = 45),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 4, .production_id = 47),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_endpoint, 4),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endpoint_reference, 6),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_endpoint, 5),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_min, 5),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_max, 5),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_complete, 9, .production_id = 50),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_complete, 4, .production_id = 16),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [960] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 5),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_complete, 10, .production_id = 50),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 9, .production_id = 52),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 9, .production_id = 53),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 9, .production_id = 54),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_then, 2),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 9, .production_id = 55),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 14, .production_id = 56),
  [1072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 14, .production_id = 57),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 14, .production_id = 58),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 14, .production_id = 59),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 14, .production_id = 60),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 14, .production_id = 61),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 19, .production_id = 62),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 19, .production_id = 63),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 19, .production_id = 64),
  [1134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 19, .production_id = 65),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 24, .production_id = 66),
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
