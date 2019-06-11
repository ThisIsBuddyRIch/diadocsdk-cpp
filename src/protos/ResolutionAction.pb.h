// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ResolutionAction.proto

#ifndef PROTOBUF_ResolutionAction_2eproto__INCLUDED
#define PROTOBUF_ResolutionAction_2eproto__INCLUDED

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
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
// @@protoc_insertion_point(includes)

namespace Diadoc {
namespace Api {
namespace Proto {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_ResolutionAction_2eproto();
void protobuf_AssignDesc_ResolutionAction_2eproto();
void protobuf_ShutdownFile_ResolutionAction_2eproto();


enum ResolutionAction {
  UnknownAction = 0,
  ApproveAction = 1,
  DisapproveAction = 2,
  SignWithApprovementSignature = 3,
  SignWithPrimarySignature = 4,
  DenySignatureRequest = 5,
  RejectSigning = 6
};
bool ResolutionAction_IsValid(int value);
const ResolutionAction ResolutionAction_MIN = UnknownAction;
const ResolutionAction ResolutionAction_MAX = RejectSigning;
const int ResolutionAction_ARRAYSIZE = ResolutionAction_MAX + 1;

const ::google::protobuf::EnumDescriptor* ResolutionAction_descriptor();
inline const ::std::string& ResolutionAction_Name(ResolutionAction value) {
  return ::google::protobuf::internal::NameOfEnum(
    ResolutionAction_descriptor(), value);
}
inline bool ResolutionAction_Parse(
    const ::std::string& name, ResolutionAction* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ResolutionAction>(
    ResolutionAction_descriptor(), name, value);
}
// ===================================================================


// ===================================================================


// ===================================================================


// @@protoc_insertion_point(namespace_scope)

}  // namespace Proto
}  // namespace Api
}  // namespace Diadoc

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::Diadoc::Api::Proto::ResolutionAction> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Diadoc::Api::Proto::ResolutionAction>() {
  return ::Diadoc::Api::Proto::ResolutionAction_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_ResolutionAction_2eproto__INCLUDED