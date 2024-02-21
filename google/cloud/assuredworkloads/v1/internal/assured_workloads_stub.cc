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
// source: google/cloud/assuredworkloads/v1/assuredworkloads.proto

#include "google/cloud/assuredworkloads/v1/internal/assured_workloads_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/assuredworkloads/v1/assuredworkloads.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace assuredworkloads_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AssuredWorkloadsServiceStub::~AssuredWorkloadsServiceStub() = default;

future<StatusOr<google::longrunning::Operation>>
DefaultAssuredWorkloadsServiceStub::AsyncCreateWorkload(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::assuredworkloads::v1::CreateWorkloadRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::assuredworkloads::v1::CreateWorkloadRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::assuredworkloads::v1::CreateWorkloadRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateWorkload(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::assuredworkloads::v1::Workload>
DefaultAssuredWorkloadsServiceStub::UpdateWorkload(
    grpc::ClientContext& context,
    google::cloud::assuredworkloads::v1::UpdateWorkloadRequest const& request) {
  google::cloud::assuredworkloads::v1::Workload response;
  auto status = grpc_stub_->UpdateWorkload(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::assuredworkloads::v1::RestrictAllowedResourcesResponse>
DefaultAssuredWorkloadsServiceStub::RestrictAllowedResources(
    grpc::ClientContext& context,
    google::cloud::assuredworkloads::v1::RestrictAllowedResourcesRequest const&
        request) {
  google::cloud::assuredworkloads::v1::RestrictAllowedResourcesResponse
      response;
  auto status =
      grpc_stub_->RestrictAllowedResources(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultAssuredWorkloadsServiceStub::DeleteWorkload(
    grpc::ClientContext& context,
    google::cloud::assuredworkloads::v1::DeleteWorkloadRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteWorkload(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::assuredworkloads::v1::Workload>
DefaultAssuredWorkloadsServiceStub::GetWorkload(
    grpc::ClientContext& context,
    google::cloud::assuredworkloads::v1::GetWorkloadRequest const& request) {
  google::cloud::assuredworkloads::v1::Workload response;
  auto status = grpc_stub_->GetWorkload(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::assuredworkloads::v1::ListWorkloadsResponse>
DefaultAssuredWorkloadsServiceStub::ListWorkloads(
    grpc::ClientContext& context,
    google::cloud::assuredworkloads::v1::ListWorkloadsRequest const& request) {
  google::cloud::assuredworkloads::v1::ListWorkloadsResponse response;
  auto status = grpc_stub_->ListWorkloads(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::assuredworkloads::v1::ListViolationsResponse>
DefaultAssuredWorkloadsServiceStub::ListViolations(
    grpc::ClientContext& context,
    google::cloud::assuredworkloads::v1::ListViolationsRequest const& request) {
  google::cloud::assuredworkloads::v1::ListViolationsResponse response;
  auto status = grpc_stub_->ListViolations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::assuredworkloads::v1::Violation>
DefaultAssuredWorkloadsServiceStub::GetViolation(
    grpc::ClientContext& context,
    google::cloud::assuredworkloads::v1::GetViolationRequest const& request) {
  google::cloud::assuredworkloads::v1::Violation response;
  auto status = grpc_stub_->GetViolation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::assuredworkloads::v1::AcknowledgeViolationResponse>
DefaultAssuredWorkloadsServiceStub::AcknowledgeViolation(
    grpc::ClientContext& context,
    google::cloud::assuredworkloads::v1::AcknowledgeViolationRequest const&
        request) {
  google::cloud::assuredworkloads::v1::AcknowledgeViolationResponse response;
  auto status = grpc_stub_->AcknowledgeViolation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAssuredWorkloadsServiceStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::longrunning::GetOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::GetOperationRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::longrunning::GetOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultAssuredWorkloadsServiceStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::longrunning::CancelOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::CancelOperationRequest,
                                    google::protobuf::Empty>(
             cq,
             [this](grpc::ClientContext* context,
                    google::longrunning::CancelOperationRequest const& request,
                    grpc::CompletionQueue* cq) {
               return operations_->AsyncCancelOperation(context, request, cq);
             },
             request, std::move(context))
      .then([](future<StatusOr<google::protobuf::Empty>> f) {
        return f.get().status();
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace assuredworkloads_v1_internal
}  // namespace cloud
}  // namespace google
