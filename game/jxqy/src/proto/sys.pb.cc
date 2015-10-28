// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/sys.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "proto/sys.pb.h"

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

namespace sys {

namespace {

const ::google::protobuf::Descriptor* PING_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PING_reflection_ = NULL;
const ::google::protobuf::Descriptor* TEST_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  TEST_reflection_ = NULL;
const ::google::protobuf::Descriptor* GM_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  GM_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_proto_2fsys_2eproto() {
  protobuf_AddDesc_proto_2fsys_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "proto/sys.proto");
  GOOGLE_CHECK(file != NULL);
  PING_descriptor_ = file->message_type(0);
  static const int PING_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PING, st_),
  };
  PING_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      PING_descriptor_,
      PING::default_instance_,
      PING_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PING, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PING, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(PING));
  TEST_descriptor_ = file->message_type(1);
  static const int TEST_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TEST, str_),
  };
  TEST_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      TEST_descriptor_,
      TEST::default_instance_,
      TEST_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TEST, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TEST, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(TEST));
  GM_descriptor_ = file->message_type(2);
  static const int GM_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GM, str_),
  };
  GM_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      GM_descriptor_,
      GM::default_instance_,
      GM_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GM, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GM, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(GM));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_proto_2fsys_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    PING_descriptor_, &PING::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    TEST_descriptor_, &TEST::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    GM_descriptor_, &GM::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_proto_2fsys_2eproto() {
  delete PING::default_instance_;
  delete PING_reflection_;
  delete TEST::default_instance_;
  delete TEST_reflection_;
  delete GM::default_instance_;
  delete GM_reflection_;
}

void protobuf_AddDesc_proto_2fsys_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\017proto/sys.proto\022\003sys\"\025\n\004PING\022\r\n\002st\030\001 \001"
    "(\005:\0010\"\025\n\004TEST\022\r\n\003str\030\001 \001(\t:\000\"\023\n\002GM\022\r\n\003st"
    "r\030\001 \001(\t:\000", 89);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "proto/sys.proto", &protobuf_RegisterTypes);
  PING::default_instance_ = new PING();
  TEST::default_instance_ = new TEST();
  GM::default_instance_ = new GM();
  PING::default_instance_->InitAsDefaultInstance();
  TEST::default_instance_->InitAsDefaultInstance();
  GM::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_proto_2fsys_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_proto_2fsys_2eproto {
  StaticDescriptorInitializer_proto_2fsys_2eproto() {
    protobuf_AddDesc_proto_2fsys_2eproto();
  }
} static_descriptor_initializer_proto_2fsys_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int PING::kStFieldNumber;
#endif  // !_MSC_VER

PING::PING()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:sys.PING)
}

void PING::InitAsDefaultInstance() {
}

PING::PING(const PING& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:sys.PING)
}

void PING::SharedCtor() {
  _cached_size_ = 0;
  st_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PING::~PING() {
  // @@protoc_insertion_point(destructor:sys.PING)
  SharedDtor();
}

void PING::SharedDtor() {
  if (this != default_instance_) {
  }
}

void PING::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PING::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PING_descriptor_;
}

const PING& PING::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_proto_2fsys_2eproto();
  return *default_instance_;
}

PING* PING::default_instance_ = NULL;

PING* PING::New() const {
  return new PING;
}

void PING::Clear() {
  st_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool PING::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:sys.PING)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 st = 1 [default = 0];
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &st_)));
          set_has_st();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:sys.PING)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:sys.PING)
  return false;
#undef DO_
}

void PING::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:sys.PING)
  // optional int32 st = 1 [default = 0];
  if (has_st()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->st(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:sys.PING)
}

::google::protobuf::uint8* PING::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:sys.PING)
  // optional int32 st = 1 [default = 0];
  if (has_st()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->st(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:sys.PING)
  return target;
}

int PING::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 st = 1 [default = 0];
    if (has_st()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->st());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PING::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const PING* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const PING*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void PING::MergeFrom(const PING& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_st()) {
      set_st(from.st());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void PING::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PING::CopyFrom(const PING& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PING::IsInitialized() const {

  return true;
}

void PING::Swap(PING* other) {
  if (other != this) {
    std::swap(st_, other->st_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata PING::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PING_descriptor_;
  metadata.reflection = PING_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int TEST::kStrFieldNumber;
#endif  // !_MSC_VER

TEST::TEST()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:sys.TEST)
}

void TEST::InitAsDefaultInstance() {
}

TEST::TEST(const TEST& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:sys.TEST)
}

void TEST::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  str_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

TEST::~TEST() {
  // @@protoc_insertion_point(destructor:sys.TEST)
  SharedDtor();
}

void TEST::SharedDtor() {
  if (str_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete str_;
  }
  if (this != default_instance_) {
  }
}

void TEST::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TEST::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return TEST_descriptor_;
}

const TEST& TEST::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_proto_2fsys_2eproto();
  return *default_instance_;
}

TEST* TEST::default_instance_ = NULL;

TEST* TEST::New() const {
  return new TEST;
}

void TEST::Clear() {
  if (has_str()) {
    if (str_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
      str_->clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool TEST::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:sys.TEST)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string str = 1 [default = ""];
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_str()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->str().data(), this->str().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "str");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:sys.TEST)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:sys.TEST)
  return false;
#undef DO_
}

void TEST::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:sys.TEST)
  // optional string str = 1 [default = ""];
  if (has_str()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->str().data(), this->str().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "str");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->str(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:sys.TEST)
}

::google::protobuf::uint8* TEST::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:sys.TEST)
  // optional string str = 1 [default = ""];
  if (has_str()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->str().data(), this->str().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "str");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->str(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:sys.TEST)
  return target;
}

int TEST::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string str = 1 [default = ""];
    if (has_str()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->str());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void TEST::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const TEST* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const TEST*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void TEST::MergeFrom(const TEST& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_str()) {
      set_str(from.str());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void TEST::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TEST::CopyFrom(const TEST& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TEST::IsInitialized() const {

  return true;
}

void TEST::Swap(TEST* other) {
  if (other != this) {
    std::swap(str_, other->str_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata TEST::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = TEST_descriptor_;
  metadata.reflection = TEST_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int GM::kStrFieldNumber;
#endif  // !_MSC_VER

GM::GM()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:sys.GM)
}

void GM::InitAsDefaultInstance() {
}

GM::GM(const GM& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:sys.GM)
}

void GM::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  str_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

GM::~GM() {
  // @@protoc_insertion_point(destructor:sys.GM)
  SharedDtor();
}

void GM::SharedDtor() {
  if (str_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete str_;
  }
  if (this != default_instance_) {
  }
}

void GM::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* GM::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return GM_descriptor_;
}

const GM& GM::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_proto_2fsys_2eproto();
  return *default_instance_;
}

GM* GM::default_instance_ = NULL;

GM* GM::New() const {
  return new GM;
}

void GM::Clear() {
  if (has_str()) {
    if (str_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
      str_->clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool GM::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:sys.GM)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string str = 1 [default = ""];
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_str()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->str().data(), this->str().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "str");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:sys.GM)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:sys.GM)
  return false;
#undef DO_
}

void GM::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:sys.GM)
  // optional string str = 1 [default = ""];
  if (has_str()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->str().data(), this->str().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "str");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->str(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:sys.GM)
}

::google::protobuf::uint8* GM::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:sys.GM)
  // optional string str = 1 [default = ""];
  if (has_str()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->str().data(), this->str().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "str");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->str(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:sys.GM)
  return target;
}

int GM::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string str = 1 [default = ""];
    if (has_str()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->str());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GM::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const GM* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const GM*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void GM::MergeFrom(const GM& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_str()) {
      set_str(from.str());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void GM::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GM::CopyFrom(const GM& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GM::IsInitialized() const {

  return true;
}

void GM::Swap(GM* other) {
  if (other != this) {
    std::swap(str_, other->str_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata GM::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = GM_descriptor_;
  metadata.reflection = GM_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sys

// @@protoc_insertion_point(global_scope)
