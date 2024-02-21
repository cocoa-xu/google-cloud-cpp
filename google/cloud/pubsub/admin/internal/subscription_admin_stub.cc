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
// source: google/pubsub/v1/pubsub.proto

#include "google/cloud/pubsub/admin/internal/subscription_admin_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/pubsub/v1/pubsub.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace pubsub_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SubscriptionAdminStub::~SubscriptionAdminStub() = default;

StatusOr<google::pubsub::v1::Subscription>
DefaultSubscriptionAdminStub::CreateSubscription(
    grpc::ClientContext& context,
    google::pubsub::v1::Subscription const& request) {
  google::pubsub::v1::Subscription response;
  auto status = grpc_stub_->CreateSubscription(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::pubsub::v1::Subscription>
DefaultSubscriptionAdminStub::GetSubscription(
    grpc::ClientContext& context,
    google::pubsub::v1::GetSubscriptionRequest const& request) {
  google::pubsub::v1::Subscription response;
  auto status = grpc_stub_->GetSubscription(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::pubsub::v1::Subscription>
DefaultSubscriptionAdminStub::UpdateSubscription(
    grpc::ClientContext& context,
    google::pubsub::v1::UpdateSubscriptionRequest const& request) {
  google::pubsub::v1::Subscription response;
  auto status = grpc_stub_->UpdateSubscription(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::pubsub::v1::ListSubscriptionsResponse>
DefaultSubscriptionAdminStub::ListSubscriptions(
    grpc::ClientContext& context,
    google::pubsub::v1::ListSubscriptionsRequest const& request) {
  google::pubsub::v1::ListSubscriptionsResponse response;
  auto status = grpc_stub_->ListSubscriptions(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultSubscriptionAdminStub::DeleteSubscription(
    grpc::ClientContext& context,
    google::pubsub::v1::DeleteSubscriptionRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteSubscription(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

Status DefaultSubscriptionAdminStub::ModifyPushConfig(
    grpc::ClientContext& context,
    google::pubsub::v1::ModifyPushConfigRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->ModifyPushConfig(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::pubsub::v1::Snapshot>
DefaultSubscriptionAdminStub::GetSnapshot(
    grpc::ClientContext& context,
    google::pubsub::v1::GetSnapshotRequest const& request) {
  google::pubsub::v1::Snapshot response;
  auto status = grpc_stub_->GetSnapshot(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::pubsub::v1::ListSnapshotsResponse>
DefaultSubscriptionAdminStub::ListSnapshots(
    grpc::ClientContext& context,
    google::pubsub::v1::ListSnapshotsRequest const& request) {
  google::pubsub::v1::ListSnapshotsResponse response;
  auto status = grpc_stub_->ListSnapshots(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::pubsub::v1::Snapshot>
DefaultSubscriptionAdminStub::CreateSnapshot(
    grpc::ClientContext& context,
    google::pubsub::v1::CreateSnapshotRequest const& request) {
  google::pubsub::v1::Snapshot response;
  auto status = grpc_stub_->CreateSnapshot(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::pubsub::v1::Snapshot>
DefaultSubscriptionAdminStub::UpdateSnapshot(
    grpc::ClientContext& context,
    google::pubsub::v1::UpdateSnapshotRequest const& request) {
  google::pubsub::v1::Snapshot response;
  auto status = grpc_stub_->UpdateSnapshot(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultSubscriptionAdminStub::DeleteSnapshot(
    grpc::ClientContext& context,
    google::pubsub::v1::DeleteSnapshotRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteSnapshot(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::pubsub::v1::SeekResponse> DefaultSubscriptionAdminStub::Seek(
    grpc::ClientContext& context,
    google::pubsub::v1::SeekRequest const& request) {
  google::pubsub::v1::SeekResponse response;
  auto status = grpc_stub_->Seek(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsub_admin_internal
}  // namespace cloud
}  // namespace google
