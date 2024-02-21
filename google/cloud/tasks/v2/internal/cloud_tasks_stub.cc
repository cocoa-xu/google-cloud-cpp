// Copyright 2021 Google LLC
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
// source: google/cloud/tasks/v2/cloudtasks.proto

#include "google/cloud/tasks/v2/internal/cloud_tasks_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/tasks/v2/cloudtasks.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace tasks_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudTasksStub::~CloudTasksStub() = default;

StatusOr<google::cloud::tasks::v2::ListQueuesResponse>
DefaultCloudTasksStub::ListQueues(
    grpc::ClientContext& context,
    google::cloud::tasks::v2::ListQueuesRequest const& request) {
  google::cloud::tasks::v2::ListQueuesResponse response;
  auto status = grpc_stub_->ListQueues(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::tasks::v2::Queue> DefaultCloudTasksStub::GetQueue(
    grpc::ClientContext& context,
    google::cloud::tasks::v2::GetQueueRequest const& request) {
  google::cloud::tasks::v2::Queue response;
  auto status = grpc_stub_->GetQueue(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::tasks::v2::Queue> DefaultCloudTasksStub::CreateQueue(
    grpc::ClientContext& context,
    google::cloud::tasks::v2::CreateQueueRequest const& request) {
  google::cloud::tasks::v2::Queue response;
  auto status = grpc_stub_->CreateQueue(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::tasks::v2::Queue> DefaultCloudTasksStub::UpdateQueue(
    grpc::ClientContext& context,
    google::cloud::tasks::v2::UpdateQueueRequest const& request) {
  google::cloud::tasks::v2::Queue response;
  auto status = grpc_stub_->UpdateQueue(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultCloudTasksStub::DeleteQueue(
    grpc::ClientContext& context,
    google::cloud::tasks::v2::DeleteQueueRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteQueue(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::tasks::v2::Queue> DefaultCloudTasksStub::PurgeQueue(
    grpc::ClientContext& context,
    google::cloud::tasks::v2::PurgeQueueRequest const& request) {
  google::cloud::tasks::v2::Queue response;
  auto status = grpc_stub_->PurgeQueue(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::tasks::v2::Queue> DefaultCloudTasksStub::PauseQueue(
    grpc::ClientContext& context,
    google::cloud::tasks::v2::PauseQueueRequest const& request) {
  google::cloud::tasks::v2::Queue response;
  auto status = grpc_stub_->PauseQueue(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::tasks::v2::Queue> DefaultCloudTasksStub::ResumeQueue(
    grpc::ClientContext& context,
    google::cloud::tasks::v2::ResumeQueueRequest const& request) {
  google::cloud::tasks::v2::Queue response;
  auto status = grpc_stub_->ResumeQueue(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy> DefaultCloudTasksStub::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = grpc_stub_->GetIamPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy> DefaultCloudTasksStub::SetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = grpc_stub_->SetIamPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DefaultCloudTasksStub::TestIamPermissions(
    grpc::ClientContext& context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  google::iam::v1::TestIamPermissionsResponse response;
  auto status = grpc_stub_->TestIamPermissions(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::tasks::v2::ListTasksResponse>
DefaultCloudTasksStub::ListTasks(
    grpc::ClientContext& context,
    google::cloud::tasks::v2::ListTasksRequest const& request) {
  google::cloud::tasks::v2::ListTasksResponse response;
  auto status = grpc_stub_->ListTasks(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::tasks::v2::Task> DefaultCloudTasksStub::GetTask(
    grpc::ClientContext& context,
    google::cloud::tasks::v2::GetTaskRequest const& request) {
  google::cloud::tasks::v2::Task response;
  auto status = grpc_stub_->GetTask(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::tasks::v2::Task> DefaultCloudTasksStub::CreateTask(
    grpc::ClientContext& context,
    google::cloud::tasks::v2::CreateTaskRequest const& request) {
  google::cloud::tasks::v2::Task response;
  auto status = grpc_stub_->CreateTask(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultCloudTasksStub::DeleteTask(
    grpc::ClientContext& context,
    google::cloud::tasks::v2::DeleteTaskRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteTask(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::tasks::v2::Task> DefaultCloudTasksStub::RunTask(
    grpc::ClientContext& context,
    google::cloud::tasks::v2::RunTaskRequest const& request) {
  google::cloud::tasks::v2::Task response;
  auto status = grpc_stub_->RunTask(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace tasks_v2_internal
}  // namespace cloud
}  // namespace google
