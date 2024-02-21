// Copyright 2024 Google LLC
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
// source: google/cloud/servicehealth/v1/event_service.proto

#include "google/cloud/servicehealth/v1/internal/service_health_auth_decorator.h"
#include <google/cloud/servicehealth/v1/event_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace servicehealth_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ServiceHealthAuth::ServiceHealthAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<ServiceHealthStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::servicehealth::v1::ListEventsResponse>
ServiceHealthAuth::ListEvents(
    grpc::ClientContext& context,
    google::cloud::servicehealth::v1::ListEventsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListEvents(context, request);
}

StatusOr<google::cloud::servicehealth::v1::Event> ServiceHealthAuth::GetEvent(
    grpc::ClientContext& context,
    google::cloud::servicehealth::v1::GetEventRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetEvent(context, request);
}

StatusOr<google::cloud::servicehealth::v1::ListOrganizationEventsResponse>
ServiceHealthAuth::ListOrganizationEvents(
    grpc::ClientContext& context,
    google::cloud::servicehealth::v1::ListOrganizationEventsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListOrganizationEvents(context, request);
}

StatusOr<google::cloud::servicehealth::v1::OrganizationEvent>
ServiceHealthAuth::GetOrganizationEvent(
    grpc::ClientContext& context,
    google::cloud::servicehealth::v1::GetOrganizationEventRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetOrganizationEvent(context, request);
}

StatusOr<google::cloud::servicehealth::v1::ListOrganizationImpactsResponse>
ServiceHealthAuth::ListOrganizationImpacts(
    grpc::ClientContext& context,
    google::cloud::servicehealth::v1::ListOrganizationImpactsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListOrganizationImpacts(context, request);
}

StatusOr<google::cloud::servicehealth::v1::OrganizationImpact>
ServiceHealthAuth::GetOrganizationImpact(
    grpc::ClientContext& context,
    google::cloud::servicehealth::v1::GetOrganizationImpactRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetOrganizationImpact(context, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace servicehealth_v1_internal
}  // namespace cloud
}  // namespace google
