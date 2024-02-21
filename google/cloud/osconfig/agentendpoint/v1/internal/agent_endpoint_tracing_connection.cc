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
// source: google/cloud/osconfig/agentendpoint/v1/agentendpoint.proto

#include "google/cloud/osconfig/agentendpoint/v1/internal/agent_endpoint_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace osconfig_agentendpoint_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

AgentEndpointServiceTracingConnection::AgentEndpointServiceTracingConnection(
    std::shared_ptr<osconfig_agentendpoint_v1::AgentEndpointServiceConnection>
        child)
    : child_(std::move(child)) {}

StreamRange<
    google::cloud::osconfig::agentendpoint::v1::ReceiveTaskNotificationResponse>
AgentEndpointServiceTracingConnection::ReceiveTaskNotification(
    google::cloud::osconfig::agentendpoint::v1::
        ReceiveTaskNotificationRequest const& request) {
  auto span = internal::MakeSpan(
      "osconfig_agentendpoint_v1::AgentEndpointServiceConnection::"
      "ReceiveTaskNotification");
  internal::OTelScope scope(span);
  auto sr = child_->ReceiveTaskNotification(request);
  return internal::MakeTracedStreamRange<
      google::cloud::osconfig::agentendpoint::v1::
          ReceiveTaskNotificationResponse>(std::move(span), std::move(sr));
}
StatusOr<google::cloud::osconfig::agentendpoint::v1::StartNextTaskResponse>
AgentEndpointServiceTracingConnection::StartNextTask(
    google::cloud::osconfig::agentendpoint::v1::StartNextTaskRequest const&
        request) {
  auto span = internal::MakeSpan(
      "osconfig_agentendpoint_v1::AgentEndpointServiceConnection::"
      "StartNextTask");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->StartNextTask(request));
}

StatusOr<google::cloud::osconfig::agentendpoint::v1::ReportTaskProgressResponse>
AgentEndpointServiceTracingConnection::ReportTaskProgress(
    google::cloud::osconfig::agentendpoint::v1::ReportTaskProgressRequest const&
        request) {
  auto span = internal::MakeSpan(
      "osconfig_agentendpoint_v1::AgentEndpointServiceConnection::"
      "ReportTaskProgress");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ReportTaskProgress(request));
}

StatusOr<google::cloud::osconfig::agentendpoint::v1::ReportTaskCompleteResponse>
AgentEndpointServiceTracingConnection::ReportTaskComplete(
    google::cloud::osconfig::agentendpoint::v1::ReportTaskCompleteRequest const&
        request) {
  auto span = internal::MakeSpan(
      "osconfig_agentendpoint_v1::AgentEndpointServiceConnection::"
      "ReportTaskComplete");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ReportTaskComplete(request));
}

StatusOr<google::cloud::osconfig::agentendpoint::v1::RegisterAgentResponse>
AgentEndpointServiceTracingConnection::RegisterAgent(
    google::cloud::osconfig::agentendpoint::v1::RegisterAgentRequest const&
        request) {
  auto span = internal::MakeSpan(
      "osconfig_agentendpoint_v1::AgentEndpointServiceConnection::"
      "RegisterAgent");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->RegisterAgent(request));
}

StatusOr<google::cloud::osconfig::agentendpoint::v1::ReportInventoryResponse>
AgentEndpointServiceTracingConnection::ReportInventory(
    google::cloud::osconfig::agentendpoint::v1::ReportInventoryRequest const&
        request) {
  auto span = internal::MakeSpan(
      "osconfig_agentendpoint_v1::AgentEndpointServiceConnection::"
      "ReportInventory");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ReportInventory(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<osconfig_agentendpoint_v1::AgentEndpointServiceConnection>
MakeAgentEndpointServiceTracingConnection(
    std::shared_ptr<osconfig_agentendpoint_v1::AgentEndpointServiceConnection>
        conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<AgentEndpointServiceTracingConnection>(
        std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace osconfig_agentendpoint_v1_internal
}  // namespace cloud
}  // namespace google
