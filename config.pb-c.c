/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: config.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "config.pb-c.h"
void nsjail__ns_jail_config__init(Nsjail__NsJailConfig * message) {
	static Nsjail__NsJailConfig init_value = NSJAIL__NS_JAIL_CONFIG__INIT;
	*message = init_value;
}

size_t nsjail__ns_jail_config__get_packed_size(const Nsjail__NsJailConfig * message) {
	assert(message->base.descriptor == &nsjail__ns_jail_config__descriptor);
	return protobuf_c_message_get_packed_size((const ProtobufCMessage *)(message));
}

size_t nsjail__ns_jail_config__pack(const Nsjail__NsJailConfig * message, uint8_t * out) {
	assert(message->base.descriptor == &nsjail__ns_jail_config__descriptor);
	return protobuf_c_message_pack((const ProtobufCMessage *)message, out);
}

size_t nsjail__ns_jail_config__pack_to_buffer
    (const Nsjail__NsJailConfig * message, ProtobufCBuffer * buffer) {
	assert(message->base.descriptor == &nsjail__ns_jail_config__descriptor);
	return protobuf_c_message_pack_to_buffer((const ProtobufCMessage *)message, buffer);
}

Nsjail__NsJailConfig *nsjail__ns_jail_config__unpack
    (ProtobufCAllocator * allocator, size_t len, const uint8_t * data) {
	return (Nsjail__NsJailConfig *)
	    protobuf_c_message_unpack(&nsjail__ns_jail_config__descriptor, allocator, len, data);
}

void nsjail__ns_jail_config__free_unpacked
    (Nsjail__NsJailConfig * message, ProtobufCAllocator * allocator) {
	assert(message->base.descriptor == &nsjail__ns_jail_config__descriptor);
	protobuf_c_message_free_unpacked((ProtobufCMessage *) message, allocator);
}

uint8_t nsjail__ns_jail_config__hostname__default_value_data[] = "NSJAIL";
uint8_t nsjail__ns_jail_config__cwd__default_value_data[] = "/";
uint8_t nsjail__ns_jail_config__bindhost__default_value_data[] = "::";
static const Nsjail__Mode nsjail__ns_jail_config__mode__default_value = NSJAIL__MODE__ONCE;
static const protobuf_c_boolean nsjail__ns_jail_config__is_root_rw__default_value = 0;
static const ProtobufCBinaryData nsjail__ns_jail_config__hostname__default_value =
    { 6, nsjail__ns_jail_config__hostname__default_value_data };
static const ProtobufCBinaryData nsjail__ns_jail_config__cwd__default_value =
    { 1, nsjail__ns_jail_config__cwd__default_value_data };
static const uint32_t nsjail__ns_jail_config__port__default_value = 0u;
static const ProtobufCBinaryData nsjail__ns_jail_config__bindhost__default_value =
    { 2, nsjail__ns_jail_config__bindhost__default_value_data };
static const uint32_t nsjail__ns_jail_config__max_conns_per_ip__default_value = 0u;
static const ProtobufCFieldDescriptor nsjail__ns_jail_config__field_descriptors[8] = {
	{
	 "mode",
	 1,
	 PROTOBUF_C_LABEL_REQUIRED,
	 PROTOBUF_C_TYPE_ENUM,
	 0,			/* quantifier_offset */
	 offsetof(Nsjail__NsJailConfig, mode),
	 &nsjail__mode__descriptor,
	 &nsjail__ns_jail_config__mode__default_value,
	 0,			/* flags */
	 0, NULL, NULL		/* reserved1,reserved2, etc */
	 },
	{
	 "chroot",
	 2,
	 PROTOBUF_C_LABEL_OPTIONAL,
	 PROTOBUF_C_TYPE_BYTES,
	 offsetof(Nsjail__NsJailConfig, has_chroot),
	 offsetof(Nsjail__NsJailConfig, chroot),
	 NULL,
	 NULL,
	 0,			/* flags */
	 0, NULL, NULL		/* reserved1,reserved2, etc */
	 },
	{
	 "is_root_rw",
	 3,
	 PROTOBUF_C_LABEL_REQUIRED,
	 PROTOBUF_C_TYPE_BOOL,
	 0,			/* quantifier_offset */
	 offsetof(Nsjail__NsJailConfig, is_root_rw),
	 NULL,
	 &nsjail__ns_jail_config__is_root_rw__default_value,
	 0,			/* flags */
	 0, NULL, NULL		/* reserved1,reserved2, etc */
	 },
	{
	 "hostname",
	 6,
	 PROTOBUF_C_LABEL_REQUIRED,
	 PROTOBUF_C_TYPE_BYTES,
	 0,			/* quantifier_offset */
	 offsetof(Nsjail__NsJailConfig, hostname),
	 NULL,
	 &nsjail__ns_jail_config__hostname__default_value,
	 0,			/* flags */
	 0, NULL, NULL		/* reserved1,reserved2, etc */
	 },
	{
	 "cwd",
	 7,
	 PROTOBUF_C_LABEL_REQUIRED,
	 PROTOBUF_C_TYPE_BYTES,
	 0,			/* quantifier_offset */
	 offsetof(Nsjail__NsJailConfig, cwd),
	 NULL,
	 &nsjail__ns_jail_config__cwd__default_value,
	 0,			/* flags */
	 0, NULL, NULL		/* reserved1,reserved2, etc */
	 },
	{
	 "port",
	 8,
	 PROTOBUF_C_LABEL_REQUIRED,
	 PROTOBUF_C_TYPE_UINT32,
	 0,			/* quantifier_offset */
	 offsetof(Nsjail__NsJailConfig, port),
	 NULL,
	 &nsjail__ns_jail_config__port__default_value,
	 0,			/* flags */
	 0, NULL, NULL		/* reserved1,reserved2, etc */
	 },
	{
	 "bindhost",
	 9,
	 PROTOBUF_C_LABEL_REQUIRED,
	 PROTOBUF_C_TYPE_BYTES,
	 0,			/* quantifier_offset */
	 offsetof(Nsjail__NsJailConfig, bindhost),
	 NULL,
	 &nsjail__ns_jail_config__bindhost__default_value,
	 0,			/* flags */
	 0, NULL, NULL		/* reserved1,reserved2, etc */
	 },
	{
	 "max_conns_per_ip",
	 10,
	 PROTOBUF_C_LABEL_REQUIRED,
	 PROTOBUF_C_TYPE_UINT32,
	 0,			/* quantifier_offset */
	 offsetof(Nsjail__NsJailConfig, max_conns_per_ip),
	 NULL,
	 &nsjail__ns_jail_config__max_conns_per_ip__default_value,
	 0,			/* flags */
	 0, NULL, NULL		/* reserved1,reserved2, etc */
	 },
};

static const unsigned nsjail__ns_jail_config__field_indices_by_name[] = {
	6,			/* field[6] = bindhost */
	1,			/* field[1] = chroot */
	4,			/* field[4] = cwd */
	3,			/* field[3] = hostname */
	2,			/* field[2] = is_root_rw */
	7,			/* field[7] = max_conns_per_ip */
	0,			/* field[0] = mode */
	5,			/* field[5] = port */
};

static const ProtobufCIntRange nsjail__ns_jail_config__number_ranges[2 + 1] = {
	{1, 0},
	{6, 3},
	{0, 8}
};

const ProtobufCMessageDescriptor nsjail__ns_jail_config__descriptor = {
	PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
	"nsjail.NsJailConfig",
	"NsJailConfig",
	"Nsjail__NsJailConfig",
	"nsjail",
	sizeof(Nsjail__NsJailConfig),
	8,
	nsjail__ns_jail_config__field_descriptors,
	nsjail__ns_jail_config__field_indices_by_name,
	2, nsjail__ns_jail_config__number_ranges,
	(ProtobufCMessageInit) nsjail__ns_jail_config__init,
	NULL, NULL, NULL	/* reserved[123] */
};

static const ProtobufCEnumValue nsjail__mode__enum_values_by_number[4] = {
	{"LISTEN", "NSJAIL__MODE__LISTEN", 0},
	{"ONCE", "NSJAIL__MODE__ONCE", 1},
	{"RERUN", "NSJAIL__MODE__RERUN", 2},
	{"EXECVE", "NSJAIL__MODE__EXECVE", 3},
};

static const ProtobufCIntRange nsjail__mode__value_ranges[] = {
	{0, 0}, {0, 4}
};

static const ProtobufCEnumValueIndex nsjail__mode__enum_values_by_name[4] = {
	{"EXECVE", 3},
	{"LISTEN", 0},
	{"ONCE", 1},
	{"RERUN", 2},
};

const ProtobufCEnumDescriptor nsjail__mode__descriptor = {
	PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
	"nsjail.Mode",
	"Mode",
	"Nsjail__Mode",
	"nsjail",
	4,
	nsjail__mode__enum_values_by_number,
	4,
	nsjail__mode__enum_values_by_name,
	1,
	nsjail__mode__value_ranges,
	NULL, NULL, NULL, NULL	/* reserved[1234] */
};