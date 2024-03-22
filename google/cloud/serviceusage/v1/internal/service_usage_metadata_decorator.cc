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
// source: google/api/serviceusage/v1/serviceusage.proto

#include "google/cloud/serviceusage/v1/internal/service_usage_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/api/serviceusage/v1/serviceusage.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace serviceusage_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ServiceUsageMetadata::ServiceUsageMetadata(
    std::shared_ptr<ServiceUsageStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

future<StatusOr<google::longrunning::Operation>>
ServiceUsageMetadata::AsyncEnableService(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::api::serviceusage::v1::EnableServiceRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncEnableService(cq, std::move(context), std::move(options),
                                    request);
}

future<StatusOr<google::longrunning::Operation>>
ServiceUsageMetadata::AsyncDisableService(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::api::serviceusage::v1::DisableServiceRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDisableService(cq, std::move(context), std::move(options),
                                     request);
}

StatusOr<google::api::serviceusage::v1::Service>
ServiceUsageMetadata::GetService(
    grpc::ClientContext& context, Options const& options,
    google::api::serviceusage::v1::GetServiceRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetService(context, options, request);
}

StatusOr<google::api::serviceusage::v1::ListServicesResponse>
ServiceUsageMetadata::ListServices(
    grpc::ClientContext& context, Options const& options,
    google::api::serviceusage::v1::ListServicesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListServices(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ServiceUsageMetadata::AsyncBatchEnableServices(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::api::serviceusage::v1::BatchEnableServicesRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncBatchEnableServices(cq, std::move(context),
                                          std::move(options), request);
}

StatusOr<google::api::serviceusage::v1::BatchGetServicesResponse>
ServiceUsageMetadata::BatchGetServices(
    grpc::ClientContext& context, Options const& options,
    google::api::serviceusage::v1::BatchGetServicesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->BatchGetServices(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ServiceUsageMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), std::move(options),
                                   request);
}

future<Status> ServiceUsageMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context),
                                      std::move(options), request);
}

void ServiceUsageMetadata::SetMetadata(grpc::ClientContext& context,
                                       Options const& options,
                                       std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void ServiceUsageMetadata::SetMetadata(grpc::ClientContext& context,
                                       Options const& options) {
  for (auto const& kv : fixed_metadata_) {
    context.AddMetadata(kv.first, kv.second);
  }
  context.AddMetadata("x-goog-api-client", api_client_header_);
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
  for (auto const& h : options.get<CustomHeadersOption>()) {
    context.AddMetadata(h.first, h.second);
  }
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace serviceusage_v1_internal
}  // namespace cloud
}  // namespace google
