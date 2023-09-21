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
// source: google/cloud/compute/security_policies/v1/security_policies.proto

#include "google/cloud/compute/security_policies/v1/security_policies_connection.h"
#include "google/cloud/compute/security_policies/v1/internal/security_policies_option_defaults.h"
#include "google/cloud/compute/security_policies/v1/internal/security_policies_tracing_connection.h"
#include "google/cloud/compute/security_policies/v1/security_policies_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_security_policies_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SecurityPoliciesConnection::~SecurityPoliciesConnection() = default;

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SecurityPoliciesConnection::AddRule(
    google::cloud::cpp::compute::security_policies::v1::AddRuleRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<std::pair<
    std::string, google::cloud::cpp::compute::v1::SecurityPoliciesScopedList>>
SecurityPoliciesConnection::AggregatedListSecurityPolicies(
    google::cloud::cpp::compute::security_policies::v1::
        AggregatedListSecurityPoliciesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<std::pair<std::string, google::cloud::cpp::compute::v1::
                                             SecurityPoliciesScopedList>>>();
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SecurityPoliciesConnection::DeleteSecurityPolicy(
    google::cloud::cpp::compute::security_policies::v1::
        DeleteSecurityPolicyRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::SecurityPolicy>
SecurityPoliciesConnection::GetSecurityPolicy(
    google::cloud::cpp::compute::security_policies::v1::
        GetSecurityPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::cpp::compute::v1::SecurityPolicyRule>
SecurityPoliciesConnection::GetRule(
    google::cloud::cpp::compute::security_policies::v1::GetRuleRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SecurityPoliciesConnection::InsertSecurityPolicy(
    google::cloud::cpp::compute::security_policies::v1::
        InsertSecurityPolicyRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::cpp::compute::v1::SecurityPolicy>
SecurityPoliciesConnection::ListSecurityPolicies(
    google::cloud::cpp::compute::security_policies::v1::
        ListSecurityPoliciesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::SecurityPolicy>>();
}

StatusOr<google::cloud::cpp::compute::v1::
             SecurityPoliciesListPreconfiguredExpressionSetsResponse>
SecurityPoliciesConnection::ListPreconfiguredExpressionSets(
    google::cloud::cpp::compute::security_policies::v1::
        ListPreconfiguredExpressionSetsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SecurityPoliciesConnection::PatchSecurityPolicy(
    google::cloud::cpp::compute::security_policies::v1::
        PatchSecurityPolicyRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SecurityPoliciesConnection::PatchRule(
    google::cloud::cpp::compute::security_policies::v1::
        PatchRuleRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SecurityPoliciesConnection::RemoveRule(
    google::cloud::cpp::compute::security_policies::v1::
        RemoveRuleRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SecurityPoliciesConnection::SetLabels(
    google::cloud::cpp::compute::security_policies::v1::
        SetLabelsRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_security_policies_v1
}  // namespace cloud
}  // namespace google
