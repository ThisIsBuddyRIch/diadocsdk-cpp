// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Organizations/AutoBlockStatus.proto

#ifndef PROTOBUF_Organizations_2fAutoBlockStatus_2eproto__INCLUDED
#define PROTOBUF_Organizations_2fAutoBlockStatus_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
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

namespace Diadoc {
namespace Api {
namespace Proto {
namespace Organizations {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_Organizations_2fAutoBlockStatus_2eproto();
void protobuf_AssignDesc_Organizations_2fAutoBlockStatus_2eproto();
void protobuf_ShutdownFile_Organizations_2fAutoBlockStatus_2eproto();

class AutoBlockStatus;

// ===================================================================

class AutoBlockStatus : public ::google::protobuf::Message {
 public:
  AutoBlockStatus();
  virtual ~AutoBlockStatus();

  AutoBlockStatus(const AutoBlockStatus& from);

  inline AutoBlockStatus& operator=(const AutoBlockStatus& from) {
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
  static const AutoBlockStatus& default_instance();

  void Swap(AutoBlockStatus* other);

  // implements Message ----------------------------------------------

  AutoBlockStatus* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const AutoBlockStatus& from);
  void MergeFrom(const AutoBlockStatus& from);
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

  // required bool IsBlocked = 1;
  inline bool has_isblocked() const;
  inline void clear_isblocked();
  static const int kIsBlockedFieldNumber = 1;
  inline bool isblocked() const;
  inline void set_isblocked(bool value);

  // @@protoc_insertion_point(class_scope:Diadoc.Api.Proto.Organizations.AutoBlockStatus)
 private:
  inline void set_has_isblocked();
  inline void clear_has_isblocked();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  bool isblocked_;
  friend void  protobuf_AddDesc_Organizations_2fAutoBlockStatus_2eproto();
  friend void protobuf_AssignDesc_Organizations_2fAutoBlockStatus_2eproto();
  friend void protobuf_ShutdownFile_Organizations_2fAutoBlockStatus_2eproto();

  void InitAsDefaultInstance();
  static AutoBlockStatus* default_instance_;
};
// ===================================================================


// ===================================================================

// AutoBlockStatus

// required bool IsBlocked = 1;
inline bool AutoBlockStatus::has_isblocked() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void AutoBlockStatus::set_has_isblocked() {
  _has_bits_[0] |= 0x00000001u;
}
inline void AutoBlockStatus::clear_has_isblocked() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void AutoBlockStatus::clear_isblocked() {
  isblocked_ = false;
  clear_has_isblocked();
}
inline bool AutoBlockStatus::isblocked() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.Organizations.AutoBlockStatus.IsBlocked)
  return isblocked_;
}
inline void AutoBlockStatus::set_isblocked(bool value) {
  set_has_isblocked();
  isblocked_ = value;
  // @@protoc_insertion_point(field_set:Diadoc.Api.Proto.Organizations.AutoBlockStatus.IsBlocked)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Organizations
}  // namespace Proto
}  // namespace Api
}  // namespace Diadoc

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Organizations_2fAutoBlockStatus_2eproto__INCLUDED