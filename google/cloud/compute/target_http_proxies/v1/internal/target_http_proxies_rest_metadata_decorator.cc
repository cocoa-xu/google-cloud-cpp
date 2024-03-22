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
// source: google/cloud/compute/target_http_proxies/v1/target_http_proxies.proto

#include "google/cloud/compute/target_http_proxies/v1/internal/target_http_proxies_rest_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/absl_str_join_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include "absl/strings/str_format.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_target_http_proxies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TargetHttpProxiesRestMetadata::TargetHttpProxiesRestMetadata(
    std::shared_ptr<TargetHttpProxiesRestStub> child,
    std::string api_client_header)
    : child_(std::move(child)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::cpp::compute::v1::TargetHttpProxyAggregatedList>
TargetHttpProxiesRestMetadata::AggregatedListTargetHttpProxies(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::target_http_proxies::v1::
        AggregatedListTargetHttpProxiesRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->AggregatedListTargetHttpProxies(rest_context, options,
                                                 request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpProxiesRestMetadata::AsyncDeleteTargetHttpProxy(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::target_http_proxies::v1::
        DeleteTargetHttpProxyRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncDeleteTargetHttpProxy(cq, std::move(rest_context),
                                            std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::TargetHttpProxy>
TargetHttpProxiesRestMetadata::GetTargetHttpProxy(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::target_http_proxies::v1::
        GetTargetHttpProxyRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->GetTargetHttpProxy(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpProxiesRestMetadata::AsyncInsertTargetHttpProxy(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::target_http_proxies::v1::
        InsertTargetHttpProxyRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncInsertTargetHttpProxy(cq, std::move(rest_context),
                                            std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::TargetHttpProxyList>
TargetHttpProxiesRestMetadata::ListTargetHttpProxies(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::target_http_proxies::v1::
        ListTargetHttpProxiesRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->ListTargetHttpProxies(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpProxiesRestMetadata::AsyncPatchTargetHttpProxy(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::target_http_proxies::v1::
        PatchTargetHttpProxyRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncPatchTargetHttpProxy(cq, std::move(rest_context),
                                           std::move(options), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpProxiesRestMetadata::AsyncSetUrlMap(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::target_http_proxies::v1::
        SetUrlMapRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncSetUrlMap(cq, std::move(rest_context), std::move(options),
                                request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpProxiesRestMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::global_operations::v1::
        GetOperationRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncGetOperation(cq, std::move(rest_context),
                                   std::move(options), request);
}

future<Status> TargetHttpProxiesRestMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::global_operations::v1::
        DeleteOperationRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncCancelOperation(cq, std::move(rest_context),
                                      std::move(options), request);
}

void TargetHttpProxiesRestMetadata::SetMetadata(
    rest_internal::RestContext& rest_context, Options const& options,
    std::vector<std::string> const& params) {
  rest_context.AddHeader("x-goog-api-client", api_client_header_);
  if (!params.empty()) {
    rest_context.AddHeader("x-goog-request-params", absl::StrJoin(params, "&"));
  }
  if (options.has<UserProjectOption>()) {
    rest_context.AddHeader("x-goog-user-project",
                           options.get<UserProjectOption>());
  }
  if (options.has<QuotaUserOption>()) {
    rest_context.AddHeader("x-goog-quota-user", options.get<QuotaUserOption>());
  }
  if (options.has<ServerTimeoutOption>()) {
    auto ms_rep = absl::StrCat(
        absl::Dec(options.get<ServerTimeoutOption>().count(), absl::kZeroPad4));
    rest_context.AddHeader("x-server-timeout",
                           ms_rep.insert(ms_rep.size() - 3, "."));
  }
  for (auto const& h : options.get<CustomHeadersOption>()) {
    rest_context.AddHeader(h.first, h.second);
  }
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_http_proxies_v1_internal
}  // namespace cloud
}  // namespace google
