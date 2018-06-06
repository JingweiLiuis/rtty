/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: rtty.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "rtty.pb-c.h"
void   rtty_message__data__init
                     (RttyMessage__Data         *message)
{
  static RttyMessage__Data init_value = RTTY_MESSAGE__DATA__INIT;
  *message = init_value;
}
void   rtty_message__init
                     (RttyMessage         *message)
{
  static RttyMessage init_value = RTTY_MESSAGE__INIT;
  *message = init_value;
}
size_t rtty_message__get_packed_size
                     (const RttyMessage *message)
{
  assert(message->base.descriptor == &rtty_message__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t rtty_message__pack
                     (const RttyMessage *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &rtty_message__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t rtty_message__pack_to_buffer
                     (const RttyMessage *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &rtty_message__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
RttyMessage *
       rtty_message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (RttyMessage *)
     protobuf_c_message_unpack (&rtty_message__descriptor,
                                allocator, len, data);
}
void   rtty_message__free_unpacked
                     (RttyMessage *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &rtty_message__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor rtty_message__data__field_descriptors[4] =
{
  {
    "code",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(RttyMessage__Data, has_code),
    offsetof(RttyMessage__Data, code),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "data",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    offsetof(RttyMessage__Data, has_data),
    offsetof(RttyMessage__Data, data),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "name",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(RttyMessage__Data, name),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "size",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(RttyMessage__Data, has_size),
    offsetof(RttyMessage__Data, size),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned rtty_message__data__field_indices_by_name[] = {
  0,   /* field[0] = code */
  1,   /* field[1] = data */
  2,   /* field[2] = name */
  3,   /* field[3] = size */
};
static const ProtobufCIntRange rtty_message__data__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 4 }
};
const ProtobufCMessageDescriptor rtty_message__data__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "rtty_message.data",
  "Data",
  "RttyMessage__Data",
  "",
  sizeof(RttyMessage__Data),
  4,
  rtty_message__data__field_descriptors,
  rtty_message__data__field_indices_by_name,
  1,  rtty_message__data__number_ranges,
  (ProtobufCMessageInit) rtty_message__data__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCEnumValue rtty_message__type__enum_values_by_number[8] =
{
  { "UNKNOWN", "RTTY_MESSAGE__TYPE__UNKNOWN", 0 },
  { "LOGIN", "RTTY_MESSAGE__TYPE__LOGIN", 1 },
  { "LOGINACK", "RTTY_MESSAGE__TYPE__LOGINACK", 2 },
  { "LOGOUT", "RTTY_MESSAGE__TYPE__LOGOUT", 3 },
  { "TTY", "RTTY_MESSAGE__TYPE__TTY", 4 },
  { "ANNOUNCE", "RTTY_MESSAGE__TYPE__ANNOUNCE", 5 },
  { "UPFILE", "RTTY_MESSAGE__TYPE__UPFILE", 6 },
  { "DOWNFILE", "RTTY_MESSAGE__TYPE__DOWNFILE", 7 },
};
static const ProtobufCIntRange rtty_message__type__value_ranges[] = {
{0, 0},{0, 8}
};
static const ProtobufCEnumValueIndex rtty_message__type__enum_values_by_name[8] =
{
  { "ANNOUNCE", 5 },
  { "DOWNFILE", 7 },
  { "LOGIN", 1 },
  { "LOGINACK", 2 },
  { "LOGOUT", 3 },
  { "TTY", 4 },
  { "UNKNOWN", 0 },
  { "UPFILE", 6 },
};
const ProtobufCEnumDescriptor rtty_message__type__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "rtty_message.Type",
  "Type",
  "RttyMessage__Type",
  "",
  8,
  rtty_message__type__enum_values_by_number,
  8,
  rtty_message__type__enum_values_by_name,
  1,
  rtty_message__type__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCFieldDescriptor rtty_message__field_descriptors[3] =
{
  {
    "version",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(RttyMessage, has_version),
    offsetof(RttyMessage, version),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "type",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(RttyMessage, has_type),
    offsetof(RttyMessage, type),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sid",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(RttyMessage, sid),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned rtty_message__field_indices_by_name[] = {
  2,   /* field[2] = sid */
  1,   /* field[1] = type */
  0,   /* field[0] = version */
};
static const ProtobufCIntRange rtty_message__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor rtty_message__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "rtty_message",
  "RttyMessage",
  "RttyMessage",
  "",
  sizeof(RttyMessage),
  3,
  rtty_message__field_descriptors,
  rtty_message__field_indices_by_name,
  1,  rtty_message__number_ranges,
  (ProtobufCMessageInit) rtty_message__init,
  NULL,NULL,NULL    /* reserved[123] */
};
