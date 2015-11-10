// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/api.proto

#ifndef PROTOBUF_google_2fprotobuf_2fapi_2eproto__INCLUDED
#define PROTOBUF_google_2fprotobuf_2fapi_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "google/protobuf/source_context.pb.h"
#include "google/protobuf/type.pb.h"
// @@protoc_insertion_point(includes)

namespace google {
namespace protobuf {

// Internal implementation detail -- do not call these.
void LIBPROTOBUF_EXPORT protobuf_AddDesc_google_2fprotobuf_2fapi_2eproto();
void protobuf_AssignDesc_google_2fprotobuf_2fapi_2eproto();
void protobuf_ShutdownFile_google_2fprotobuf_2fapi_2eproto();

class Api;
class Method;
class Mixin;

// ===================================================================

class LIBPROTOBUF_EXPORT Api : public ::google::protobuf::Message {
 public:
  Api();
  virtual ~Api();

  Api(const Api& from);

  inline Api& operator=(const Api& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Api& default_instance();

  void Swap(Api* other);

  // implements Message ----------------------------------------------

  inline Api* New() const { return New(NULL); }

  Api* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Api& from);
  void MergeFrom(const Api& from);
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
  void InternalSwap(Api* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // repeated .google.protobuf.Method methods = 2;
  int methods_size() const;
  void clear_methods();
  static const int kMethodsFieldNumber = 2;
  const ::google::protobuf::Method& methods(int index) const;
  ::google::protobuf::Method* mutable_methods(int index);
  ::google::protobuf::Method* add_methods();
  ::google::protobuf::RepeatedPtrField< ::google::protobuf::Method >*
      mutable_methods();
  const ::google::protobuf::RepeatedPtrField< ::google::protobuf::Method >&
      methods() const;

  // repeated .google.protobuf.Option options = 3;
  int options_size() const;
  void clear_options();
  static const int kOptionsFieldNumber = 3;
  const ::google::protobuf::Option& options(int index) const;
  ::google::protobuf::Option* mutable_options(int index);
  ::google::protobuf::Option* add_options();
  ::google::protobuf::RepeatedPtrField< ::google::protobuf::Option >*
      mutable_options();
  const ::google::protobuf::RepeatedPtrField< ::google::protobuf::Option >&
      options() const;

  // optional string version = 4;
  void clear_version();
  static const int kVersionFieldNumber = 4;
  const ::std::string& version() const;
  void set_version(const ::std::string& value);
  void set_version(const char* value);
  void set_version(const char* value, size_t size);
  ::std::string* mutable_version();
  ::std::string* release_version();
  void set_allocated_version(::std::string* version);

  // optional .google.protobuf.SourceContext source_context = 5;
  bool has_source_context() const;
  void clear_source_context();
  static const int kSourceContextFieldNumber = 5;
  const ::google::protobuf::SourceContext& source_context() const;
  ::google::protobuf::SourceContext* mutable_source_context();
  ::google::protobuf::SourceContext* release_source_context();
  void set_allocated_source_context(::google::protobuf::SourceContext* source_context);

  // repeated .google.protobuf.Mixin mixins = 6;
  int mixins_size() const;
  void clear_mixins();
  static const int kMixinsFieldNumber = 6;
  const ::google::protobuf::Mixin& mixins(int index) const;
  ::google::protobuf::Mixin* mutable_mixins(int index);
  ::google::protobuf::Mixin* add_mixins();
  ::google::protobuf::RepeatedPtrField< ::google::protobuf::Mixin >*
      mutable_mixins();
  const ::google::protobuf::RepeatedPtrField< ::google::protobuf::Mixin >&
      mixins() const;

  // optional .google.protobuf.Syntax syntax = 7;
  void clear_syntax();
  static const int kSyntaxFieldNumber = 7;
  ::google::protobuf::Syntax syntax() const;
  void set_syntax(::google::protobuf::Syntax value);

  // @@protoc_insertion_point(class_scope:google.protobuf.Api)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::RepeatedPtrField< ::google::protobuf::Method > methods_;
  ::google::protobuf::RepeatedPtrField< ::google::protobuf::Option > options_;
  ::google::protobuf::internal::ArenaStringPtr version_;
  ::google::protobuf::SourceContext* source_context_;
  ::google::protobuf::RepeatedPtrField< ::google::protobuf::Mixin > mixins_;
  int syntax_;
  mutable int _cached_size_;
  friend void LIBPROTOBUF_EXPORT protobuf_AddDesc_google_2fprotobuf_2fapi_2eproto();
  friend void protobuf_AssignDesc_google_2fprotobuf_2fapi_2eproto();
  friend void protobuf_ShutdownFile_google_2fprotobuf_2fapi_2eproto();

  void InitAsDefaultInstance();
  static Api* default_instance_;
};
// -------------------------------------------------------------------

class LIBPROTOBUF_EXPORT Method : public ::google::protobuf::Message {
 public:
  Method();
  virtual ~Method();

  Method(const Method& from);

  inline Method& operator=(const Method& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Method& default_instance();

  void Swap(Method* other);

  // implements Message ----------------------------------------------

  inline Method* New() const { return New(NULL); }

  Method* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Method& from);
  void MergeFrom(const Method& from);
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
  void InternalSwap(Method* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // optional string request_type_url = 2;
  void clear_request_type_url();
  static const int kRequestTypeUrlFieldNumber = 2;
  const ::std::string& request_type_url() const;
  void set_request_type_url(const ::std::string& value);
  void set_request_type_url(const char* value);
  void set_request_type_url(const char* value, size_t size);
  ::std::string* mutable_request_type_url();
  ::std::string* release_request_type_url();
  void set_allocated_request_type_url(::std::string* request_type_url);

  // optional bool request_streaming = 3;
  void clear_request_streaming();
  static const int kRequestStreamingFieldNumber = 3;
  bool request_streaming() const;
  void set_request_streaming(bool value);

  // optional string response_type_url = 4;
  void clear_response_type_url();
  static const int kResponseTypeUrlFieldNumber = 4;
  const ::std::string& response_type_url() const;
  void set_response_type_url(const ::std::string& value);
  void set_response_type_url(const char* value);
  void set_response_type_url(const char* value, size_t size);
  ::std::string* mutable_response_type_url();
  ::std::string* release_response_type_url();
  void set_allocated_response_type_url(::std::string* response_type_url);

  // optional bool response_streaming = 5;
  void clear_response_streaming();
  static const int kResponseStreamingFieldNumber = 5;
  bool response_streaming() const;
  void set_response_streaming(bool value);

  // repeated .google.protobuf.Option options = 6;
  int options_size() const;
  void clear_options();
  static const int kOptionsFieldNumber = 6;
  const ::google::protobuf::Option& options(int index) const;
  ::google::protobuf::Option* mutable_options(int index);
  ::google::protobuf::Option* add_options();
  ::google::protobuf::RepeatedPtrField< ::google::protobuf::Option >*
      mutable_options();
  const ::google::protobuf::RepeatedPtrField< ::google::protobuf::Option >&
      options() const;

  // optional .google.protobuf.Syntax syntax = 7;
  void clear_syntax();
  static const int kSyntaxFieldNumber = 7;
  ::google::protobuf::Syntax syntax() const;
  void set_syntax(::google::protobuf::Syntax value);

  // @@protoc_insertion_point(class_scope:google.protobuf.Method)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr request_type_url_;
  ::google::protobuf::internal::ArenaStringPtr response_type_url_;
  bool request_streaming_;
  bool response_streaming_;
  int syntax_;
  ::google::protobuf::RepeatedPtrField< ::google::protobuf::Option > options_;
  mutable int _cached_size_;
  friend void LIBPROTOBUF_EXPORT protobuf_AddDesc_google_2fprotobuf_2fapi_2eproto();
  friend void protobuf_AssignDesc_google_2fprotobuf_2fapi_2eproto();
  friend void protobuf_ShutdownFile_google_2fprotobuf_2fapi_2eproto();

  void InitAsDefaultInstance();
  static Method* default_instance_;
};
// -------------------------------------------------------------------

class LIBPROTOBUF_EXPORT Mixin : public ::google::protobuf::Message {
 public:
  Mixin();
  virtual ~Mixin();

  Mixin(const Mixin& from);

  inline Mixin& operator=(const Mixin& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Mixin& default_instance();

  void Swap(Mixin* other);

  // implements Message ----------------------------------------------

  inline Mixin* New() const { return New(NULL); }

  Mixin* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Mixin& from);
  void MergeFrom(const Mixin& from);
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
  void InternalSwap(Mixin* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // optional string root = 2;
  void clear_root();
  static const int kRootFieldNumber = 2;
  const ::std::string& root() const;
  void set_root(const ::std::string& value);
  void set_root(const char* value);
  void set_root(const char* value, size_t size);
  ::std::string* mutable_root();
  ::std::string* release_root();
  void set_allocated_root(::std::string* root);

  // @@protoc_insertion_point(class_scope:google.protobuf.Mixin)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr root_;
  mutable int _cached_size_;
  friend void LIBPROTOBUF_EXPORT protobuf_AddDesc_google_2fprotobuf_2fapi_2eproto();
  friend void protobuf_AssignDesc_google_2fprotobuf_2fapi_2eproto();
  friend void protobuf_ShutdownFile_google_2fprotobuf_2fapi_2eproto();

  void InitAsDefaultInstance();
  static Mixin* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Api

// optional string name = 1;
inline void Api::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Api::name() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Api.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Api::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.Api.name)
}
inline void Api::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.Api.name)
}
inline void Api::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.Api.name)
}
inline ::std::string* Api::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:google.protobuf.Api.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Api::release_name() {
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Api::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.Api.name)
}

// repeated .google.protobuf.Method methods = 2;
inline int Api::methods_size() const {
  return methods_.size();
}
inline void Api::clear_methods() {
  methods_.Clear();
}
inline const ::google::protobuf::Method& Api::methods(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.Api.methods)
  return methods_.Get(index);
}
inline ::google::protobuf::Method* Api::mutable_methods(int index) {
  // @@protoc_insertion_point(field_mutable:google.protobuf.Api.methods)
  return methods_.Mutable(index);
}
inline ::google::protobuf::Method* Api::add_methods() {
  // @@protoc_insertion_point(field_add:google.protobuf.Api.methods)
  return methods_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::google::protobuf::Method >*
Api::mutable_methods() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.Api.methods)
  return &methods_;
}
inline const ::google::protobuf::RepeatedPtrField< ::google::protobuf::Method >&
Api::methods() const {
  // @@protoc_insertion_point(field_list:google.protobuf.Api.methods)
  return methods_;
}

// repeated .google.protobuf.Option options = 3;
inline int Api::options_size() const {
  return options_.size();
}
inline void Api::clear_options() {
  options_.Clear();
}
inline const ::google::protobuf::Option& Api::options(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.Api.options)
  return options_.Get(index);
}
inline ::google::protobuf::Option* Api::mutable_options(int index) {
  // @@protoc_insertion_point(field_mutable:google.protobuf.Api.options)
  return options_.Mutable(index);
}
inline ::google::protobuf::Option* Api::add_options() {
  // @@protoc_insertion_point(field_add:google.protobuf.Api.options)
  return options_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::google::protobuf::Option >*
Api::mutable_options() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.Api.options)
  return &options_;
}
inline const ::google::protobuf::RepeatedPtrField< ::google::protobuf::Option >&
Api::options() const {
  // @@protoc_insertion_point(field_list:google.protobuf.Api.options)
  return options_;
}

// optional string version = 4;
inline void Api::clear_version() {
  version_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Api::version() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Api.version)
  return version_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Api::set_version(const ::std::string& value) {
  
  version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.Api.version)
}
inline void Api::set_version(const char* value) {
  
  version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.Api.version)
}
inline void Api::set_version(const char* value, size_t size) {
  
  version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.Api.version)
}
inline ::std::string* Api::mutable_version() {
  
  // @@protoc_insertion_point(field_mutable:google.protobuf.Api.version)
  return version_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Api::release_version() {
  
  return version_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Api::set_allocated_version(::std::string* version) {
  if (version != NULL) {
    
  } else {
    
  }
  version_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), version);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.Api.version)
}

// optional .google.protobuf.SourceContext source_context = 5;
inline bool Api::has_source_context() const {
  return !_is_default_instance_ && source_context_ != NULL;
}
inline void Api::clear_source_context() {
  if (GetArenaNoVirtual() == NULL && source_context_ != NULL) delete source_context_;
  source_context_ = NULL;
}
inline const ::google::protobuf::SourceContext& Api::source_context() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Api.source_context)
  return source_context_ != NULL ? *source_context_ : *default_instance_->source_context_;
}
inline ::google::protobuf::SourceContext* Api::mutable_source_context() {
  
  if (source_context_ == NULL) {
    source_context_ = new ::google::protobuf::SourceContext;
  }
  // @@protoc_insertion_point(field_mutable:google.protobuf.Api.source_context)
  return source_context_;
}
inline ::google::protobuf::SourceContext* Api::release_source_context() {
  
  ::google::protobuf::SourceContext* temp = source_context_;
  source_context_ = NULL;
  return temp;
}
inline void Api::set_allocated_source_context(::google::protobuf::SourceContext* source_context) {
  delete source_context_;
  source_context_ = source_context;
  if (source_context) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.Api.source_context)
}

// repeated .google.protobuf.Mixin mixins = 6;
inline int Api::mixins_size() const {
  return mixins_.size();
}
inline void Api::clear_mixins() {
  mixins_.Clear();
}
inline const ::google::protobuf::Mixin& Api::mixins(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.Api.mixins)
  return mixins_.Get(index);
}
inline ::google::protobuf::Mixin* Api::mutable_mixins(int index) {
  // @@protoc_insertion_point(field_mutable:google.protobuf.Api.mixins)
  return mixins_.Mutable(index);
}
inline ::google::protobuf::Mixin* Api::add_mixins() {
  // @@protoc_insertion_point(field_add:google.protobuf.Api.mixins)
  return mixins_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::google::protobuf::Mixin >*
Api::mutable_mixins() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.Api.mixins)
  return &mixins_;
}
inline const ::google::protobuf::RepeatedPtrField< ::google::protobuf::Mixin >&
Api::mixins() const {
  // @@protoc_insertion_point(field_list:google.protobuf.Api.mixins)
  return mixins_;
}

// optional .google.protobuf.Syntax syntax = 7;
inline void Api::clear_syntax() {
  syntax_ = 0;
}
inline ::google::protobuf::Syntax Api::syntax() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Api.syntax)
  return static_cast< ::google::protobuf::Syntax >(syntax_);
}
inline void Api::set_syntax(::google::protobuf::Syntax value) {
  
  syntax_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.Api.syntax)
}

// -------------------------------------------------------------------

// Method

// optional string name = 1;
inline void Method::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Method::name() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Method.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Method::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.Method.name)
}
inline void Method::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.Method.name)
}
inline void Method::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.Method.name)
}
inline ::std::string* Method::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:google.protobuf.Method.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Method::release_name() {
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Method::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.Method.name)
}

// optional string request_type_url = 2;
inline void Method::clear_request_type_url() {
  request_type_url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Method::request_type_url() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Method.request_type_url)
  return request_type_url_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Method::set_request_type_url(const ::std::string& value) {
  
  request_type_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.Method.request_type_url)
}
inline void Method::set_request_type_url(const char* value) {
  
  request_type_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.Method.request_type_url)
}
inline void Method::set_request_type_url(const char* value, size_t size) {
  
  request_type_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.Method.request_type_url)
}
inline ::std::string* Method::mutable_request_type_url() {
  
  // @@protoc_insertion_point(field_mutable:google.protobuf.Method.request_type_url)
  return request_type_url_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Method::release_request_type_url() {
  
  return request_type_url_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Method::set_allocated_request_type_url(::std::string* request_type_url) {
  if (request_type_url != NULL) {
    
  } else {
    
  }
  request_type_url_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), request_type_url);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.Method.request_type_url)
}

// optional bool request_streaming = 3;
inline void Method::clear_request_streaming() {
  request_streaming_ = false;
}
inline bool Method::request_streaming() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Method.request_streaming)
  return request_streaming_;
}
inline void Method::set_request_streaming(bool value) {
  
  request_streaming_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.Method.request_streaming)
}

// optional string response_type_url = 4;
inline void Method::clear_response_type_url() {
  response_type_url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Method::response_type_url() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Method.response_type_url)
  return response_type_url_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Method::set_response_type_url(const ::std::string& value) {
  
  response_type_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.Method.response_type_url)
}
inline void Method::set_response_type_url(const char* value) {
  
  response_type_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.Method.response_type_url)
}
inline void Method::set_response_type_url(const char* value, size_t size) {
  
  response_type_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.Method.response_type_url)
}
inline ::std::string* Method::mutable_response_type_url() {
  
  // @@protoc_insertion_point(field_mutable:google.protobuf.Method.response_type_url)
  return response_type_url_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Method::release_response_type_url() {
  
  return response_type_url_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Method::set_allocated_response_type_url(::std::string* response_type_url) {
  if (response_type_url != NULL) {
    
  } else {
    
  }
  response_type_url_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), response_type_url);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.Method.response_type_url)
}

// optional bool response_streaming = 5;
inline void Method::clear_response_streaming() {
  response_streaming_ = false;
}
inline bool Method::response_streaming() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Method.response_streaming)
  return response_streaming_;
}
inline void Method::set_response_streaming(bool value) {
  
  response_streaming_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.Method.response_streaming)
}

// repeated .google.protobuf.Option options = 6;
inline int Method::options_size() const {
  return options_.size();
}
inline void Method::clear_options() {
  options_.Clear();
}
inline const ::google::protobuf::Option& Method::options(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.Method.options)
  return options_.Get(index);
}
inline ::google::protobuf::Option* Method::mutable_options(int index) {
  // @@protoc_insertion_point(field_mutable:google.protobuf.Method.options)
  return options_.Mutable(index);
}
inline ::google::protobuf::Option* Method::add_options() {
  // @@protoc_insertion_point(field_add:google.protobuf.Method.options)
  return options_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::google::protobuf::Option >*
Method::mutable_options() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.Method.options)
  return &options_;
}
inline const ::google::protobuf::RepeatedPtrField< ::google::protobuf::Option >&
Method::options() const {
  // @@protoc_insertion_point(field_list:google.protobuf.Method.options)
  return options_;
}

// optional .google.protobuf.Syntax syntax = 7;
inline void Method::clear_syntax() {
  syntax_ = 0;
}
inline ::google::protobuf::Syntax Method::syntax() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Method.syntax)
  return static_cast< ::google::protobuf::Syntax >(syntax_);
}
inline void Method::set_syntax(::google::protobuf::Syntax value) {
  
  syntax_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.Method.syntax)
}

// -------------------------------------------------------------------

// Mixin

// optional string name = 1;
inline void Mixin::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Mixin::name() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Mixin.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Mixin::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.Mixin.name)
}
inline void Mixin::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.Mixin.name)
}
inline void Mixin::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.Mixin.name)
}
inline ::std::string* Mixin::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:google.protobuf.Mixin.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Mixin::release_name() {
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Mixin::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.Mixin.name)
}

// optional string root = 2;
inline void Mixin::clear_root() {
  root_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Mixin::root() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Mixin.root)
  return root_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Mixin::set_root(const ::std::string& value) {
  
  root_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.Mixin.root)
}
inline void Mixin::set_root(const char* value) {
  
  root_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.Mixin.root)
}
inline void Mixin::set_root(const char* value, size_t size) {
  
  root_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.Mixin.root)
}
inline ::std::string* Mixin::mutable_root() {
  
  // @@protoc_insertion_point(field_mutable:google.protobuf.Mixin.root)
  return root_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Mixin::release_root() {
  
  return root_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Mixin::set_allocated_root(::std::string* root) {
  if (root != NULL) {
    
  } else {
    
  }
  root_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), root);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.Mixin.root)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_google_2fprotobuf_2fapi_2eproto__INCLUDED