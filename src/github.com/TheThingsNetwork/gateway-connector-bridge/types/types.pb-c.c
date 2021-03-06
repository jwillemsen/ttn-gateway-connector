/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: github.com/TheThingsNetwork/gateway-connector-bridge/types/types.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "github.com/TheThingsNetwork/gateway-connector-bridge/types/types.pb-c.h"
void   types__connect_message__init
                     (Types__ConnectMessage         *message)
{
  static Types__ConnectMessage init_value = TYPES__CONNECT_MESSAGE__INIT;
  *message = init_value;
}
size_t types__connect_message__get_packed_size
                     (const Types__ConnectMessage *message)
{
  assert(message->base.descriptor == &types__connect_message__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t types__connect_message__pack
                     (const Types__ConnectMessage *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &types__connect_message__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t types__connect_message__pack_to_buffer
                     (const Types__ConnectMessage *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &types__connect_message__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Types__ConnectMessage *
       types__connect_message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Types__ConnectMessage *)
     protobuf_c_message_unpack (&types__connect_message__descriptor,
                                allocator, len, data);
}
void   types__connect_message__free_unpacked
                     (Types__ConnectMessage *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &types__connect_message__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   types__disconnect_message__init
                     (Types__DisconnectMessage         *message)
{
  static Types__DisconnectMessage init_value = TYPES__DISCONNECT_MESSAGE__INIT;
  *message = init_value;
}
size_t types__disconnect_message__get_packed_size
                     (const Types__DisconnectMessage *message)
{
  assert(message->base.descriptor == &types__disconnect_message__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t types__disconnect_message__pack
                     (const Types__DisconnectMessage *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &types__disconnect_message__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t types__disconnect_message__pack_to_buffer
                     (const Types__DisconnectMessage *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &types__disconnect_message__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Types__DisconnectMessage *
       types__disconnect_message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Types__DisconnectMessage *)
     protobuf_c_message_unpack (&types__disconnect_message__descriptor,
                                allocator, len, data);
}
void   types__disconnect_message__free_unpacked
                     (Types__DisconnectMessage *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &types__disconnect_message__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor types__connect_message__field_descriptors[3] =
{
  {
    "id",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Types__ConnectMessage, id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "token",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Types__ConnectMessage, token),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "key",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Types__ConnectMessage, key),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned types__connect_message__field_indices_by_name[] = {
  0,   /* field[0] = id */
  2,   /* field[2] = key */
  1,   /* field[1] = token */
};
static const ProtobufCIntRange types__connect_message__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor types__connect_message__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "types.ConnectMessage",
  "ConnectMessage",
  "Types__ConnectMessage",
  "types",
  sizeof(Types__ConnectMessage),
  3,
  types__connect_message__field_descriptors,
  types__connect_message__field_indices_by_name,
  1,  types__connect_message__number_ranges,
  (ProtobufCMessageInit) types__connect_message__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor types__disconnect_message__field_descriptors[1] =
{
  {
    "id",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Types__DisconnectMessage, id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned types__disconnect_message__field_indices_by_name[] = {
  0,   /* field[0] = id */
};
static const ProtobufCIntRange types__disconnect_message__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor types__disconnect_message__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "types.DisconnectMessage",
  "DisconnectMessage",
  "Types__DisconnectMessage",
  "types",
  sizeof(Types__DisconnectMessage),
  1,
  types__disconnect_message__field_descriptors,
  types__disconnect_message__field_indices_by_name,
  1,  types__disconnect_message__number_ranges,
  (ProtobufCMessageInit) types__disconnect_message__init,
  NULL,NULL,NULL    /* reserved[123] */
};
