// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dbproto/proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "dbproto/proto.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {


}  // namespace


void protobuf_AssignDesc_dbproto_2fproto() {
  protobuf_AddDesc_dbproto_2fproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "dbproto/proto");
  GOOGLE_CHECK(file != NULL);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_dbproto_2fproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void protobuf_ShutdownFile_dbproto_2fproto() {
}

void protobuf_AddDesc_dbproto_2fproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\rdbproto/proto", 15);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "dbproto/proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_dbproto_2fproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_dbproto_2fproto {
  StaticDescriptorInitializer_dbproto_2fproto() {
    protobuf_AddDesc_dbproto_2fproto();
  }
} static_descriptor_initializer_dbproto_2fproto_;

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
