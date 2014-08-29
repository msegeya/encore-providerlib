// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: BufferInfo.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "BufferInfo.pb.h"

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

namespace omnimusic {

namespace {

const ::google::protobuf::Descriptor* BufferInfo_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  BufferInfo_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_BufferInfo_2eproto() {
  protobuf_AddDesc_BufferInfo_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "BufferInfo.proto");
  GOOGLE_CHECK(file != NULL);
  BufferInfo_descriptor_ = file->message_type(0);
  static const int BufferInfo_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BufferInfo, samples_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BufferInfo, stutter_),
  };
  BufferInfo_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      BufferInfo_descriptor_,
      BufferInfo::default_instance_,
      BufferInfo_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BufferInfo, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BufferInfo, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(BufferInfo));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_BufferInfo_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    BufferInfo_descriptor_, &BufferInfo::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_BufferInfo_2eproto() {
  delete BufferInfo::default_instance_;
  delete BufferInfo_reflection_;
}

void protobuf_AddDesc_BufferInfo_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\020BufferInfo.proto\022\tomnimusic\".\n\nBufferI"
    "nfo\022\017\n\007samples\030\001 \002(\005\022\017\n\007stutter\030\002 \002(\005", 77);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "BufferInfo.proto", &protobuf_RegisterTypes);
  BufferInfo::default_instance_ = new BufferInfo();
  BufferInfo::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_BufferInfo_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_BufferInfo_2eproto {
  StaticDescriptorInitializer_BufferInfo_2eproto() {
    protobuf_AddDesc_BufferInfo_2eproto();
  }
} static_descriptor_initializer_BufferInfo_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int BufferInfo::kSamplesFieldNumber;
const int BufferInfo::kStutterFieldNumber;
#endif  // !_MSC_VER

BufferInfo::BufferInfo()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void BufferInfo::InitAsDefaultInstance() {
}

BufferInfo::BufferInfo(const BufferInfo& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void BufferInfo::SharedCtor() {
  _cached_size_ = 0;
  samples_ = 0;
  stutter_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

BufferInfo::~BufferInfo() {
  SharedDtor();
}

void BufferInfo::SharedDtor() {
  if (this != default_instance_) {
  }
}

void BufferInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BufferInfo::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BufferInfo_descriptor_;
}

const BufferInfo& BufferInfo::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_BufferInfo_2eproto();
  return *default_instance_;
}

BufferInfo* BufferInfo::default_instance_ = NULL;

BufferInfo* BufferInfo::New() const {
  return new BufferInfo;
}

void BufferInfo::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    samples_ = 0;
    stutter_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool BufferInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 samples = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &samples_)));
          set_has_samples();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_stutter;
        break;
      }

      // required int32 stutter = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_stutter:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &stutter_)));
          set_has_stutter();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void BufferInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int32 samples = 1;
  if (has_samples()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->samples(), output);
  }

  // required int32 stutter = 2;
  if (has_stutter()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->stutter(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* BufferInfo::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int32 samples = 1;
  if (has_samples()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->samples(), target);
  }

  // required int32 stutter = 2;
  if (has_stutter()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->stutter(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int BufferInfo::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 samples = 1;
    if (has_samples()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->samples());
    }

    // required int32 stutter = 2;
    if (has_stutter()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->stutter());
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

void BufferInfo::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const BufferInfo* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const BufferInfo*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void BufferInfo::MergeFrom(const BufferInfo& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_samples()) {
      set_samples(from.samples());
    }
    if (from.has_stutter()) {
      set_stutter(from.stutter());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void BufferInfo::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BufferInfo::CopyFrom(const BufferInfo& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BufferInfo::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void BufferInfo::Swap(BufferInfo* other) {
  if (other != this) {
    std::swap(samples_, other->samples_);
    std::swap(stutter_, other->stutter_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata BufferInfo::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = BufferInfo_descriptor_;
  metadata.reflection = BufferInfo_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace omnimusic

// @@protoc_insertion_point(global_scope)