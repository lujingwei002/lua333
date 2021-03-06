// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/regist.proto

#ifndef PROTOBUF_proto_2fregist_2eproto__INCLUDED
#define PROTOBUF_proto_2fregist_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace regist {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_proto_2fregist_2eproto();
void protobuf_AssignDesc_proto_2fregist_2eproto();
void protobuf_ShutdownFile_proto_2fregist_2eproto();

class CREATE;

// ===================================================================

class CREATE : public ::google::protobuf::Message {
 public:
  CREATE();
  virtual ~CREATE();

  CREATE(const CREATE& from);

  inline CREATE& operator=(const CREATE& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CREATE& default_instance();

  void Swap(CREATE* other);

  // implements Message ----------------------------------------------

  CREATE* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CREATE& from);
  void MergeFrom(const CREATE& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string uname = 1;
  inline bool has_uname() const;
  inline void clear_uname();
  static const int kUnameFieldNumber = 1;
  inline const ::std::string& uname() const;
  inline void set_uname(const ::std::string& value);
  inline void set_uname(const char* value);
  inline void set_uname(const char* value, size_t size);
  inline ::std::string* mutable_uname();
  inline ::std::string* release_uname();
  inline void set_allocated_uname(::std::string* uname);

  // optional int32 role_type = 3 [default = 1];
  inline bool has_role_type() const;
  inline void clear_role_type();
  static const int kRoleTypeFieldNumber = 3;
  inline ::google::protobuf::int32 role_type() const;
  inline void set_role_type(::google::protobuf::int32 value);

  // optional string platform_id = 5;
  inline bool has_platform_id() const;
  inline void clear_platform_id();
  static const int kPlatformIdFieldNumber = 5;
  inline const ::std::string& platform_id() const;
  inline void set_platform_id(const ::std::string& value);
  inline void set_platform_id(const char* value);
  inline void set_platform_id(const char* value, size_t size);
  inline ::std::string* mutable_platform_id();
  inline ::std::string* release_platform_id();
  inline void set_allocated_platform_id(::std::string* platform_id);

  // optional int32 errno = 4 [default = 1];
  inline bool has_errno() const;
  inline void clear_errno();
  static const int kErrnoFieldNumber = 4;
  inline ::google::protobuf::int32 errno() const;
  inline void set_errno(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:regist.CREATE)
 private:
  inline void set_has_uname();
  inline void clear_has_uname();
  inline void set_has_role_type();
  inline void clear_has_role_type();
  inline void set_has_platform_id();
  inline void clear_has_platform_id();
  inline void set_has_errno();
  inline void clear_has_errno();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* uname_;
  ::std::string* platform_id_;
  ::google::protobuf::int32 role_type_;
  ::google::protobuf::int32 errno_;
  friend void  protobuf_AddDesc_proto_2fregist_2eproto();
  friend void protobuf_AssignDesc_proto_2fregist_2eproto();
  friend void protobuf_ShutdownFile_proto_2fregist_2eproto();

  void InitAsDefaultInstance();
  static CREATE* default_instance_;
};
// ===================================================================


// ===================================================================

// CREATE

// required string uname = 1;
inline bool CREATE::has_uname() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CREATE::set_has_uname() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CREATE::clear_has_uname() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CREATE::clear_uname() {
  if (uname_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    uname_->clear();
  }
  clear_has_uname();
}
inline const ::std::string& CREATE::uname() const {
  // @@protoc_insertion_point(field_get:regist.CREATE.uname)
  return *uname_;
}
inline void CREATE::set_uname(const ::std::string& value) {
  set_has_uname();
  if (uname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    uname_ = new ::std::string;
  }
  uname_->assign(value);
  // @@protoc_insertion_point(field_set:regist.CREATE.uname)
}
inline void CREATE::set_uname(const char* value) {
  set_has_uname();
  if (uname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    uname_ = new ::std::string;
  }
  uname_->assign(value);
  // @@protoc_insertion_point(field_set_char:regist.CREATE.uname)
}
inline void CREATE::set_uname(const char* value, size_t size) {
  set_has_uname();
  if (uname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    uname_ = new ::std::string;
  }
  uname_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:regist.CREATE.uname)
}
inline ::std::string* CREATE::mutable_uname() {
  set_has_uname();
  if (uname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    uname_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:regist.CREATE.uname)
  return uname_;
}
inline ::std::string* CREATE::release_uname() {
  clear_has_uname();
  if (uname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = uname_;
    uname_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void CREATE::set_allocated_uname(::std::string* uname) {
  if (uname_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete uname_;
  }
  if (uname) {
    set_has_uname();
    uname_ = uname;
  } else {
    clear_has_uname();
    uname_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:regist.CREATE.uname)
}

// optional int32 role_type = 3 [default = 1];
inline bool CREATE::has_role_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CREATE::set_has_role_type() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CREATE::clear_has_role_type() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CREATE::clear_role_type() {
  role_type_ = 1;
  clear_has_role_type();
}
inline ::google::protobuf::int32 CREATE::role_type() const {
  // @@protoc_insertion_point(field_get:regist.CREATE.role_type)
  return role_type_;
}
inline void CREATE::set_role_type(::google::protobuf::int32 value) {
  set_has_role_type();
  role_type_ = value;
  // @@protoc_insertion_point(field_set:regist.CREATE.role_type)
}

// optional string platform_id = 5;
inline bool CREATE::has_platform_id() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void CREATE::set_has_platform_id() {
  _has_bits_[0] |= 0x00000004u;
}
inline void CREATE::clear_has_platform_id() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void CREATE::clear_platform_id() {
  if (platform_id_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    platform_id_->clear();
  }
  clear_has_platform_id();
}
inline const ::std::string& CREATE::platform_id() const {
  // @@protoc_insertion_point(field_get:regist.CREATE.platform_id)
  return *platform_id_;
}
inline void CREATE::set_platform_id(const ::std::string& value) {
  set_has_platform_id();
  if (platform_id_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    platform_id_ = new ::std::string;
  }
  platform_id_->assign(value);
  // @@protoc_insertion_point(field_set:regist.CREATE.platform_id)
}
inline void CREATE::set_platform_id(const char* value) {
  set_has_platform_id();
  if (platform_id_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    platform_id_ = new ::std::string;
  }
  platform_id_->assign(value);
  // @@protoc_insertion_point(field_set_char:regist.CREATE.platform_id)
}
inline void CREATE::set_platform_id(const char* value, size_t size) {
  set_has_platform_id();
  if (platform_id_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    platform_id_ = new ::std::string;
  }
  platform_id_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:regist.CREATE.platform_id)
}
inline ::std::string* CREATE::mutable_platform_id() {
  set_has_platform_id();
  if (platform_id_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    platform_id_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:regist.CREATE.platform_id)
  return platform_id_;
}
inline ::std::string* CREATE::release_platform_id() {
  clear_has_platform_id();
  if (platform_id_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = platform_id_;
    platform_id_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void CREATE::set_allocated_platform_id(::std::string* platform_id) {
  if (platform_id_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete platform_id_;
  }
  if (platform_id) {
    set_has_platform_id();
    platform_id_ = platform_id;
  } else {
    clear_has_platform_id();
    platform_id_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:regist.CREATE.platform_id)
}

// optional int32 errno = 4 [default = 1];
inline bool CREATE::has_errno() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void CREATE::set_has_errno() {
  _has_bits_[0] |= 0x00000008u;
}
inline void CREATE::clear_has_errno() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void CREATE::clear_errno() {
  errno_ = 1;
  clear_has_errno();
}
inline ::google::protobuf::int32 CREATE::errno() const {
  // @@protoc_insertion_point(field_get:regist.CREATE.errno)
  return errno_;
}
inline void CREATE::set_errno(::google::protobuf::int32 value) {
  set_has_errno();
  errno_ = value;
  // @@protoc_insertion_point(field_set:regist.CREATE.errno)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace regist

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_proto_2fregist_2eproto__INCLUDED
