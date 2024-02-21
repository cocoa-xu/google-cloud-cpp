// Copyright 2023 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/resourcemanager/v3/tag_bindings.proto

#include "google/cloud/resourcemanager/v3/tag_bindings_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace resourcemanager_v3 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TagBindingsClient::TagBindingsClient(
    std::shared_ptr<TagBindingsConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
TagBindingsClient::~TagBindingsClient() = default;

StreamRange<google::cloud::resourcemanager::v3::TagBinding>
TagBindingsClient::ListTagBindings(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::resourcemanager::v3::ListTagBindingsRequest request;
  request.set_parent(parent);
  return connection_->ListTagBindings(request);
}

StreamRange<google::cloud::resourcemanager::v3::TagBinding>
TagBindingsClient::ListTagBindings(
    google::cloud::resourcemanager::v3::ListTagBindingsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListTagBindings(std::move(request));
}

future<StatusOr<google::cloud::resourcemanager::v3::TagBinding>>
TagBindingsClient::CreateTagBinding(
    google::cloud::resourcemanager::v3::TagBinding const& tag_binding,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::resourcemanager::v3::CreateTagBindingRequest request;
  *request.mutable_tag_binding() = tag_binding;
  return connection_->CreateTagBinding(request);
}

future<StatusOr<google::cloud::resourcemanager::v3::TagBinding>>
TagBindingsClient::CreateTagBinding(
    google::cloud::resourcemanager::v3::CreateTagBindingRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateTagBinding(request);
}

future<StatusOr<google::cloud::resourcemanager::v3::DeleteTagBindingMetadata>>
TagBindingsClient::DeleteTagBinding(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::resourcemanager::v3::DeleteTagBindingRequest request;
  request.set_name(name);
  return connection_->DeleteTagBinding(request);
}

future<StatusOr<google::cloud::resourcemanager::v3::DeleteTagBindingMetadata>>
TagBindingsClient::DeleteTagBinding(
    google::cloud::resourcemanager::v3::DeleteTagBindingRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteTagBinding(request);
}

StreamRange<google::cloud::resourcemanager::v3::EffectiveTag>
TagBindingsClient::ListEffectiveTags(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::resourcemanager::v3::ListEffectiveTagsRequest request;
  request.set_parent(parent);
  return connection_->ListEffectiveTags(request);
}

StreamRange<google::cloud::resourcemanager::v3::EffectiveTag>
TagBindingsClient::ListEffectiveTags(
    google::cloud::resourcemanager::v3::ListEffectiveTagsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListEffectiveTags(std::move(request));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager_v3
}  // namespace cloud
}  // namespace google
