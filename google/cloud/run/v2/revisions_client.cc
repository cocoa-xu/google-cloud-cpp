// Copyright 2022 Google LLC
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
// source: google/cloud/run/v2/revision.proto

#include "google/cloud/run/v2/revisions_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace run_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RevisionsClient::RevisionsClient(
    std::shared_ptr<RevisionsConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
RevisionsClient::~RevisionsClient() = default;

StatusOr<google::cloud::run::v2::Revision> RevisionsClient::GetRevision(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::run::v2::GetRevisionRequest request;
  request.set_name(name);
  return connection_->GetRevision(request);
}

StatusOr<google::cloud::run::v2::Revision> RevisionsClient::GetRevision(
    google::cloud::run::v2::GetRevisionRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetRevision(request);
}

StreamRange<google::cloud::run::v2::Revision> RevisionsClient::ListRevisions(
    std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::run::v2::ListRevisionsRequest request;
  request.set_parent(parent);
  return connection_->ListRevisions(request);
}

StreamRange<google::cloud::run::v2::Revision> RevisionsClient::ListRevisions(
    google::cloud::run::v2::ListRevisionsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListRevisions(std::move(request));
}

future<StatusOr<google::cloud::run::v2::Revision>>
RevisionsClient::DeleteRevision(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::run::v2::DeleteRevisionRequest request;
  request.set_name(name);
  return connection_->DeleteRevision(request);
}

future<StatusOr<google::cloud::run::v2::Revision>>
RevisionsClient::DeleteRevision(
    google::cloud::run::v2::DeleteRevisionRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteRevision(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace run_v2
}  // namespace cloud
}  // namespace google
