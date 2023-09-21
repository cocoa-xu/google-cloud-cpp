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
// source: google/cloud/compute/forwarding_rules/v1/forwarding_rules.proto

#include "google/cloud/compute/forwarding_rules/v1/internal/forwarding_rules_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_forwarding_rules_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ForwardingRulesTracingConnection::ForwardingRulesTracingConnection(
    std::shared_ptr<compute_forwarding_rules_v1::ForwardingRulesConnection>
        child)
    : child_(std::move(child)) {}

StreamRange<std::pair<
    std::string, google::cloud::cpp::compute::v1::ForwardingRulesScopedList>>
ForwardingRulesTracingConnection::AggregatedListForwardingRules(
    google::cloud::cpp::compute::forwarding_rules::v1::
        AggregatedListForwardingRulesRequest request) {
  auto span = internal::MakeSpan(
      "compute_forwarding_rules_v1::ForwardingRulesConnection::"
      "AggregatedListForwardingRules");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->AggregatedListForwardingRules(std::move(request));
  return internal::MakeTracedStreamRange<std::pair<
      std::string, google::cloud::cpp::compute::v1::ForwardingRulesScopedList>>(
      std::move(span), std::move(sr));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ForwardingRulesTracingConnection::DeleteForwardingRule(
    google::cloud::cpp::compute::forwarding_rules::v1::
        DeleteForwardingRuleRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_forwarding_rules_v1::ForwardingRulesConnection::"
      "DeleteForwardingRule");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteForwardingRule(request));
}

StatusOr<google::cloud::cpp::compute::v1::ForwardingRule>
ForwardingRulesTracingConnection::GetForwardingRule(
    google::cloud::cpp::compute::forwarding_rules::v1::
        GetForwardingRuleRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_forwarding_rules_v1::ForwardingRulesConnection::"
      "GetForwardingRule");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetForwardingRule(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ForwardingRulesTracingConnection::InsertForwardingRule(
    google::cloud::cpp::compute::forwarding_rules::v1::
        InsertForwardingRuleRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_forwarding_rules_v1::ForwardingRulesConnection::"
      "InsertForwardingRule");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->InsertForwardingRule(request));
}

StreamRange<google::cloud::cpp::compute::v1::ForwardingRule>
ForwardingRulesTracingConnection::ListForwardingRules(
    google::cloud::cpp::compute::forwarding_rules::v1::
        ListForwardingRulesRequest request) {
  auto span = internal::MakeSpan(
      "compute_forwarding_rules_v1::ForwardingRulesConnection::"
      "ListForwardingRules");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListForwardingRules(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::ForwardingRule>(std::move(span),
                                                       std::move(sr));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ForwardingRulesTracingConnection::PatchForwardingRule(
    google::cloud::cpp::compute::forwarding_rules::v1::
        PatchForwardingRuleRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_forwarding_rules_v1::ForwardingRulesConnection::"
      "PatchForwardingRule");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->PatchForwardingRule(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ForwardingRulesTracingConnection::SetLabels(
    google::cloud::cpp::compute::forwarding_rules::v1::SetLabelsRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_forwarding_rules_v1::ForwardingRulesConnection::SetLabels");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->SetLabels(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ForwardingRulesTracingConnection::SetTarget(
    google::cloud::cpp::compute::forwarding_rules::v1::SetTargetRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_forwarding_rules_v1::ForwardingRulesConnection::SetTarget");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->SetTarget(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<compute_forwarding_rules_v1::ForwardingRulesConnection>
MakeForwardingRulesTracingConnection(
    std::shared_ptr<compute_forwarding_rules_v1::ForwardingRulesConnection>
        conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<ForwardingRulesTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_forwarding_rules_v1_internal
}  // namespace cloud
}  // namespace google
