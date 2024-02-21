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
// source: google/cloud/contentwarehouse/v1/ruleset_service.proto

#include "google/cloud/contentwarehouse/v1/internal/rule_set_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace contentwarehouse_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

RuleSetServiceTracingConnection::RuleSetServiceTracingConnection(
    std::shared_ptr<contentwarehouse_v1::RuleSetServiceConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::contentwarehouse::v1::RuleSet>
RuleSetServiceTracingConnection::CreateRuleSet(
    google::cloud::contentwarehouse::v1::CreateRuleSetRequest const& request) {
  auto span = internal::MakeSpan(
      "contentwarehouse_v1::RuleSetServiceConnection::CreateRuleSet");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateRuleSet(request));
}

StatusOr<google::cloud::contentwarehouse::v1::RuleSet>
RuleSetServiceTracingConnection::GetRuleSet(
    google::cloud::contentwarehouse::v1::GetRuleSetRequest const& request) {
  auto span = internal::MakeSpan(
      "contentwarehouse_v1::RuleSetServiceConnection::GetRuleSet");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetRuleSet(request));
}

StatusOr<google::cloud::contentwarehouse::v1::RuleSet>
RuleSetServiceTracingConnection::UpdateRuleSet(
    google::cloud::contentwarehouse::v1::UpdateRuleSetRequest const& request) {
  auto span = internal::MakeSpan(
      "contentwarehouse_v1::RuleSetServiceConnection::UpdateRuleSet");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateRuleSet(request));
}

Status RuleSetServiceTracingConnection::DeleteRuleSet(
    google::cloud::contentwarehouse::v1::DeleteRuleSetRequest const& request) {
  auto span = internal::MakeSpan(
      "contentwarehouse_v1::RuleSetServiceConnection::DeleteRuleSet");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteRuleSet(request));
}

StreamRange<google::cloud::contentwarehouse::v1::RuleSet>
RuleSetServiceTracingConnection::ListRuleSets(
    google::cloud::contentwarehouse::v1::ListRuleSetsRequest request) {
  auto span = internal::MakeSpan(
      "contentwarehouse_v1::RuleSetServiceConnection::ListRuleSets");
  internal::OTelScope scope(span);
  auto sr = child_->ListRuleSets(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::contentwarehouse::v1::RuleSet>(std::move(span),
                                                    std::move(sr));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<contentwarehouse_v1::RuleSetServiceConnection>
MakeRuleSetServiceTracingConnection(
    std::shared_ptr<contentwarehouse_v1::RuleSetServiceConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<RuleSetServiceTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace contentwarehouse_v1_internal
}  // namespace cloud
}  // namespace google
