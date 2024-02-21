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
// source: google/cloud/orgpolicy/v2/orgpolicy.proto

#include "google/cloud/orgpolicy/v2/internal/org_policy_auth_decorator.h"
#include <google/cloud/orgpolicy/v2/orgpolicy.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace orgpolicy_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

OrgPolicyAuth::OrgPolicyAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<OrgPolicyStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::orgpolicy::v2::ListConstraintsResponse>
OrgPolicyAuth::ListConstraints(
    grpc::ClientContext& context,
    google::cloud::orgpolicy::v2::ListConstraintsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListConstraints(context, request);
}

StatusOr<google::cloud::orgpolicy::v2::ListPoliciesResponse>
OrgPolicyAuth::ListPolicies(
    grpc::ClientContext& context,
    google::cloud::orgpolicy::v2::ListPoliciesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListPolicies(context, request);
}

StatusOr<google::cloud::orgpolicy::v2::Policy> OrgPolicyAuth::GetPolicy(
    grpc::ClientContext& context,
    google::cloud::orgpolicy::v2::GetPolicyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetPolicy(context, request);
}

StatusOr<google::cloud::orgpolicy::v2::Policy>
OrgPolicyAuth::GetEffectivePolicy(
    grpc::ClientContext& context,
    google::cloud::orgpolicy::v2::GetEffectivePolicyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetEffectivePolicy(context, request);
}

StatusOr<google::cloud::orgpolicy::v2::Policy> OrgPolicyAuth::CreatePolicy(
    grpc::ClientContext& context,
    google::cloud::orgpolicy::v2::CreatePolicyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreatePolicy(context, request);
}

StatusOr<google::cloud::orgpolicy::v2::Policy> OrgPolicyAuth::UpdatePolicy(
    grpc::ClientContext& context,
    google::cloud::orgpolicy::v2::UpdatePolicyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdatePolicy(context, request);
}

Status OrgPolicyAuth::DeletePolicy(
    grpc::ClientContext& context,
    google::cloud::orgpolicy::v2::DeletePolicyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeletePolicy(context, request);
}

StatusOr<google::cloud::orgpolicy::v2::CustomConstraint>
OrgPolicyAuth::CreateCustomConstraint(
    grpc::ClientContext& context,
    google::cloud::orgpolicy::v2::CreateCustomConstraintRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateCustomConstraint(context, request);
}

StatusOr<google::cloud::orgpolicy::v2::CustomConstraint>
OrgPolicyAuth::UpdateCustomConstraint(
    grpc::ClientContext& context,
    google::cloud::orgpolicy::v2::UpdateCustomConstraintRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateCustomConstraint(context, request);
}

StatusOr<google::cloud::orgpolicy::v2::CustomConstraint>
OrgPolicyAuth::GetCustomConstraint(
    grpc::ClientContext& context,
    google::cloud::orgpolicy::v2::GetCustomConstraintRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetCustomConstraint(context, request);
}

StatusOr<google::cloud::orgpolicy::v2::ListCustomConstraintsResponse>
OrgPolicyAuth::ListCustomConstraints(
    grpc::ClientContext& context,
    google::cloud::orgpolicy::v2::ListCustomConstraintsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListCustomConstraints(context, request);
}

Status OrgPolicyAuth::DeleteCustomConstraint(
    grpc::ClientContext& context,
    google::cloud::orgpolicy::v2::DeleteCustomConstraintRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteCustomConstraint(context, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace orgpolicy_v2_internal
}  // namespace cloud
}  // namespace google
