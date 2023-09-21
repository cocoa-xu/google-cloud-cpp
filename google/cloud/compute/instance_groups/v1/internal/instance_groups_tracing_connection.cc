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
// source: google/cloud/compute/instance_groups/v1/instance_groups.proto

#include "google/cloud/compute/instance_groups/v1/internal/instance_groups_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_instance_groups_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

InstanceGroupsTracingConnection::InstanceGroupsTracingConnection(
    std::shared_ptr<compute_instance_groups_v1::InstanceGroupsConnection> child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupsTracingConnection::AddInstances(
    google::cloud::cpp::compute::instance_groups::v1::AddInstancesRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_instance_groups_v1::InstanceGroupsConnection::AddInstances");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->AddInstances(request));
}

StreamRange<std::pair<
    std::string, google::cloud::cpp::compute::v1::InstanceGroupsScopedList>>
InstanceGroupsTracingConnection::AggregatedListInstanceGroups(
    google::cloud::cpp::compute::instance_groups::v1::
        AggregatedListInstanceGroupsRequest request) {
  auto span = internal::MakeSpan(
      "compute_instance_groups_v1::InstanceGroupsConnection::"
      "AggregatedListInstanceGroups");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->AggregatedListInstanceGroups(std::move(request));
  return internal::MakeTracedStreamRange<std::pair<
      std::string, google::cloud::cpp::compute::v1::InstanceGroupsScopedList>>(
      std::move(span), std::move(sr));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupsTracingConnection::DeleteInstanceGroup(
    google::cloud::cpp::compute::instance_groups::v1::
        DeleteInstanceGroupRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_instance_groups_v1::InstanceGroupsConnection::"
      "DeleteInstanceGroup");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteInstanceGroup(request));
}

StatusOr<google::cloud::cpp::compute::v1::InstanceGroup>
InstanceGroupsTracingConnection::GetInstanceGroup(
    google::cloud::cpp::compute::instance_groups::v1::
        GetInstanceGroupRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_instance_groups_v1::InstanceGroupsConnection::GetInstanceGroup");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetInstanceGroup(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupsTracingConnection::InsertInstanceGroup(
    google::cloud::cpp::compute::instance_groups::v1::
        InsertInstanceGroupRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_instance_groups_v1::InstanceGroupsConnection::"
      "InsertInstanceGroup");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->InsertInstanceGroup(request));
}

StreamRange<google::cloud::cpp::compute::v1::InstanceGroup>
InstanceGroupsTracingConnection::ListInstanceGroups(
    google::cloud::cpp::compute::instance_groups::v1::ListInstanceGroupsRequest
        request) {
  auto span = internal::MakeSpan(
      "compute_instance_groups_v1::InstanceGroupsConnection::"
      "ListInstanceGroups");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListInstanceGroups(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::InstanceGroup>(std::move(span),
                                                      std::move(sr));
}

StreamRange<google::cloud::cpp::compute::v1::InstanceWithNamedPorts>
InstanceGroupsTracingConnection::ListInstances(
    google::cloud::cpp::compute::instance_groups::v1::ListInstancesRequest
        request) {
  auto span = internal::MakeSpan(
      "compute_instance_groups_v1::InstanceGroupsConnection::ListInstances");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListInstances(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::InstanceWithNamedPorts>(std::move(span),
                                                               std::move(sr));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupsTracingConnection::RemoveInstances(
    google::cloud::cpp::compute::instance_groups::v1::
        RemoveInstancesRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_instance_groups_v1::InstanceGroupsConnection::RemoveInstances");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->RemoveInstances(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupsTracingConnection::SetNamedPorts(
    google::cloud::cpp::compute::instance_groups::v1::
        SetNamedPortsRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_instance_groups_v1::InstanceGroupsConnection::SetNamedPorts");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->SetNamedPorts(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<compute_instance_groups_v1::InstanceGroupsConnection>
MakeInstanceGroupsTracingConnection(
    std::shared_ptr<compute_instance_groups_v1::InstanceGroupsConnection>
        conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<InstanceGroupsTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_instance_groups_v1_internal
}  // namespace cloud
}  // namespace google
