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
// source: google/cloud/compute/vpn_gateways/v1/vpn_gateways.proto

#include "google/cloud/compute/vpn_gateways/v1/internal/vpn_gateways_rest_metadata_decorator.h"
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
namespace compute_vpn_gateways_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

VpnGatewaysRestMetadata::VpnGatewaysRestMetadata(
    std::shared_ptr<VpnGatewaysRestStub> child, std::string api_client_header)
    : child_(std::move(child)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::cpp::compute::v1::VpnGatewayAggregatedList>
VpnGatewaysRestMetadata::AggregatedListVpnGateways(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::vpn_gateways::v1::
        AggregatedListVpnGatewaysRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->AggregatedListVpnGateways(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
VpnGatewaysRestMetadata::AsyncDeleteVpnGateway(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::vpn_gateways::v1::
        DeleteVpnGatewayRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncDeleteVpnGateway(cq, std::move(rest_context),
                                       std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::VpnGateway>
VpnGatewaysRestMetadata::GetVpnGateway(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::vpn_gateways::v1::GetVpnGatewayRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->GetVpnGateway(rest_context, options, request);
}

StatusOr<google::cloud::cpp::compute::v1::VpnGatewaysGetStatusResponse>
VpnGatewaysRestMetadata::GetStatus(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::vpn_gateways::v1::GetStatusRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->GetStatus(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
VpnGatewaysRestMetadata::AsyncInsertVpnGateway(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::vpn_gateways::v1::
        InsertVpnGatewayRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncInsertVpnGateway(cq, std::move(rest_context),
                                       std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::VpnGatewayList>
VpnGatewaysRestMetadata::ListVpnGateways(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::vpn_gateways::v1::ListVpnGatewaysRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->ListVpnGateways(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
VpnGatewaysRestMetadata::AsyncSetLabels(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::vpn_gateways::v1::SetLabelsRequest const&
        request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncSetLabels(cq, std::move(rest_context), std::move(options),
                                request);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
VpnGatewaysRestMetadata::TestIamPermissions(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::vpn_gateways::v1::
        TestIamPermissionsRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->TestIamPermissions(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
VpnGatewaysRestMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_operations::v1::
        GetOperationRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncGetOperation(cq, std::move(rest_context),
                                   std::move(options), request);
}

future<Status> VpnGatewaysRestMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_operations::v1::
        DeleteOperationRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncCancelOperation(cq, std::move(rest_context),
                                      std::move(options), request);
}

void VpnGatewaysRestMetadata::SetMetadata(
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
}  // namespace compute_vpn_gateways_v1_internal
}  // namespace cloud
}  // namespace google
