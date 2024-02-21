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
// source:
// google/cloud/compute/region_security_policies/v1/region_security_policies.proto

#include "google/cloud/compute/region_security_policies/v1/internal/region_security_policies_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_region_security_policies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

RegionSecurityPoliciesTracingConnection::
    RegionSecurityPoliciesTracingConnection(
        std::shared_ptr<compute_region_security_policies_v1::
                            RegionSecurityPoliciesConnection>
            child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionSecurityPoliciesTracingConnection::AddRule(
    google::cloud::cpp::compute::region_security_policies::v1::
        AddRuleRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_security_policies_v1::RegionSecurityPoliciesConnection::"
      "AddRule");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->AddRule(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionSecurityPoliciesTracingConnection::DeleteSecurityPolicy(
    google::cloud::cpp::compute::region_security_policies::v1::
        DeleteSecurityPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_security_policies_v1::RegionSecurityPoliciesConnection::"
      "DeleteSecurityPolicy");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteSecurityPolicy(request));
}

StatusOr<google::cloud::cpp::compute::v1::SecurityPolicy>
RegionSecurityPoliciesTracingConnection::GetSecurityPolicy(
    google::cloud::cpp::compute::region_security_policies::v1::
        GetSecurityPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_security_policies_v1::RegionSecurityPoliciesConnection::"
      "GetSecurityPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetSecurityPolicy(request));
}

StatusOr<google::cloud::cpp::compute::v1::SecurityPolicyRule>
RegionSecurityPoliciesTracingConnection::GetRule(
    google::cloud::cpp::compute::region_security_policies::v1::
        GetRuleRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_security_policies_v1::RegionSecurityPoliciesConnection::"
      "GetRule");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetRule(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionSecurityPoliciesTracingConnection::InsertSecurityPolicy(
    google::cloud::cpp::compute::region_security_policies::v1::
        InsertSecurityPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_security_policies_v1::RegionSecurityPoliciesConnection::"
      "InsertSecurityPolicy");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->InsertSecurityPolicy(request));
}

StreamRange<google::cloud::cpp::compute::v1::SecurityPolicy>
RegionSecurityPoliciesTracingConnection::ListRegionSecurityPolicies(
    google::cloud::cpp::compute::region_security_policies::v1::
        ListRegionSecurityPoliciesRequest request) {
  auto span = internal::MakeSpan(
      "compute_region_security_policies_v1::RegionSecurityPoliciesConnection::"
      "ListRegionSecurityPolicies");
  internal::OTelScope scope(span);
  auto sr = child_->ListRegionSecurityPolicies(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::SecurityPolicy>(std::move(span),
                                                       std::move(sr));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionSecurityPoliciesTracingConnection::PatchSecurityPolicy(
    google::cloud::cpp::compute::region_security_policies::v1::
        PatchSecurityPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_security_policies_v1::RegionSecurityPoliciesConnection::"
      "PatchSecurityPolicy");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->PatchSecurityPolicy(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionSecurityPoliciesTracingConnection::PatchRule(
    google::cloud::cpp::compute::region_security_policies::v1::
        PatchRuleRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_security_policies_v1::RegionSecurityPoliciesConnection::"
      "PatchRule");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->PatchRule(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionSecurityPoliciesTracingConnection::RemoveRule(
    google::cloud::cpp::compute::region_security_policies::v1::
        RemoveRuleRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_security_policies_v1::RegionSecurityPoliciesConnection::"
      "RemoveRule");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->RemoveRule(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<
    compute_region_security_policies_v1::RegionSecurityPoliciesConnection>
MakeRegionSecurityPoliciesTracingConnection(
    std::shared_ptr<
        compute_region_security_policies_v1::RegionSecurityPoliciesConnection>
        conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<RegionSecurityPoliciesTracingConnection>(
        std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_security_policies_v1_internal
}  // namespace cloud
}  // namespace google
