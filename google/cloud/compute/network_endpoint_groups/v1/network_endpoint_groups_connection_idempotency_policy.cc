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
// google/cloud/compute/network_endpoint_groups/v1/network_endpoint_groups.proto

#include "google/cloud/compute/network_endpoint_groups/v1/network_endpoint_groups_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_network_endpoint_groups_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

NetworkEndpointGroupsConnectionIdempotencyPolicy::
    ~NetworkEndpointGroupsConnectionIdempotencyPolicy() = default;

std::unique_ptr<NetworkEndpointGroupsConnectionIdempotencyPolicy>
NetworkEndpointGroupsConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<NetworkEndpointGroupsConnectionIdempotencyPolicy>(
      *this);
}

Idempotency NetworkEndpointGroupsConnectionIdempotencyPolicy::
    AggregatedListNetworkEndpointGroups(
        google::cloud::cpp::compute::network_endpoint_groups::v1::
            AggregatedListNetworkEndpointGroupsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency
NetworkEndpointGroupsConnectionIdempotencyPolicy::AttachNetworkEndpoints(
    google::cloud::cpp::compute::network_endpoint_groups::v1::
        AttachNetworkEndpointsRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
NetworkEndpointGroupsConnectionIdempotencyPolicy::DeleteNetworkEndpointGroup(
    google::cloud::cpp::compute::network_endpoint_groups::v1::
        DeleteNetworkEndpointGroupRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
NetworkEndpointGroupsConnectionIdempotencyPolicy::DetachNetworkEndpoints(
    google::cloud::cpp::compute::network_endpoint_groups::v1::
        DetachNetworkEndpointsRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
NetworkEndpointGroupsConnectionIdempotencyPolicy::GetNetworkEndpointGroup(
    google::cloud::cpp::compute::network_endpoint_groups::v1::
        GetNetworkEndpointGroupRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
NetworkEndpointGroupsConnectionIdempotencyPolicy::InsertNetworkEndpointGroup(
    google::cloud::cpp::compute::network_endpoint_groups::v1::
        InsertNetworkEndpointGroupRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
NetworkEndpointGroupsConnectionIdempotencyPolicy::ListNetworkEndpointGroups(
    google::cloud::cpp::compute::network_endpoint_groups::v1::
        ListNetworkEndpointGroupsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency
NetworkEndpointGroupsConnectionIdempotencyPolicy::ListNetworkEndpoints(
    google::cloud::cpp::compute::network_endpoint_groups::v1::
        ListNetworkEndpointsRequest) {  // NOLINT
  return Idempotency::kNonIdempotent;
}

Idempotency
NetworkEndpointGroupsConnectionIdempotencyPolicy::TestIamPermissions(
    google::cloud::cpp::compute::network_endpoint_groups::v1::
        TestIamPermissionsRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<NetworkEndpointGroupsConnectionIdempotencyPolicy>
MakeDefaultNetworkEndpointGroupsConnectionIdempotencyPolicy() {
  return std::make_unique<NetworkEndpointGroupsConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_network_endpoint_groups_v1
}  // namespace cloud
}  // namespace google
