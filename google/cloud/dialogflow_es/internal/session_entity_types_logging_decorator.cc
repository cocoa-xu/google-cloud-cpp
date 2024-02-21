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
// source: google/cloud/dialogflow/v2/session_entity_type.proto

#include "google/cloud/dialogflow_es/internal/session_entity_types_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/dialogflow/v2/session_entity_type.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SessionEntityTypesLogging::SessionEntityTypesLogging(
    std::shared_ptr<SessionEntityTypesStub> child,
    TracingOptions tracing_options, std::set<std::string> const& components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      stream_logging_(components.find("rpc-streams") != components.end()) {}

StatusOr<google::cloud::dialogflow::v2::ListSessionEntityTypesResponse>
SessionEntityTypesLogging::ListSessionEntityTypes(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::ListSessionEntityTypesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::dialogflow::v2::ListSessionEntityTypesRequest const&
                 request) {
        return child_->ListSessionEntityTypes(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dialogflow::v2::SessionEntityType>
SessionEntityTypesLogging::GetSessionEntityType(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::GetSessionEntityTypeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::dialogflow::v2::GetSessionEntityTypeRequest const&
                 request) {
        return child_->GetSessionEntityType(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dialogflow::v2::SessionEntityType>
SessionEntityTypesLogging::CreateSessionEntityType(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::CreateSessionEntityTypeRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::dialogflow::v2::CreateSessionEntityTypeRequest const&
              request) {
        return child_->CreateSessionEntityType(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dialogflow::v2::SessionEntityType>
SessionEntityTypesLogging::UpdateSessionEntityType(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::UpdateSessionEntityTypeRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::dialogflow::v2::UpdateSessionEntityTypeRequest const&
              request) {
        return child_->UpdateSessionEntityType(context, request);
      },
      context, request, __func__, tracing_options_);
}

Status SessionEntityTypesLogging::DeleteSessionEntityType(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::DeleteSessionEntityTypeRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::dialogflow::v2::DeleteSessionEntityTypeRequest const&
              request) {
        return child_->DeleteSessionEntityType(context, request);
      },
      context, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
