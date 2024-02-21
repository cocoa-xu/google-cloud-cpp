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
// source: google/api/servicemanagement/v1/servicemanager.proto

#include "google/cloud/servicemanagement/v1/internal/service_manager_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/api/servicemanagement/v1/servicemanager.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace servicemanagement_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ServiceManagerStub::~ServiceManagerStub() = default;

StatusOr<google::api::servicemanagement::v1::ListServicesResponse>
DefaultServiceManagerStub::ListServices(
    grpc::ClientContext& context,
    google::api::servicemanagement::v1::ListServicesRequest const& request) {
  google::api::servicemanagement::v1::ListServicesResponse response;
  auto status = grpc_stub_->ListServices(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::api::servicemanagement::v1::ManagedService>
DefaultServiceManagerStub::GetService(
    grpc::ClientContext& context,
    google::api::servicemanagement::v1::GetServiceRequest const& request) {
  google::api::servicemanagement::v1::ManagedService response;
  auto status = grpc_stub_->GetService(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultServiceManagerStub::AsyncCreateService(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::api::servicemanagement::v1::CreateServiceRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::api::servicemanagement::v1::CreateServiceRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::api::servicemanagement::v1::CreateServiceRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateService(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultServiceManagerStub::AsyncDeleteService(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::api::servicemanagement::v1::DeleteServiceRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::api::servicemanagement::v1::DeleteServiceRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::api::servicemanagement::v1::DeleteServiceRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteService(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultServiceManagerStub::AsyncUndeleteService(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::api::servicemanagement::v1::UndeleteServiceRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::api::servicemanagement::v1::UndeleteServiceRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::api::servicemanagement::v1::UndeleteServiceRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUndeleteService(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::api::servicemanagement::v1::ListServiceConfigsResponse>
DefaultServiceManagerStub::ListServiceConfigs(
    grpc::ClientContext& context,
    google::api::servicemanagement::v1::ListServiceConfigsRequest const&
        request) {
  google::api::servicemanagement::v1::ListServiceConfigsResponse response;
  auto status = grpc_stub_->ListServiceConfigs(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::api::Service> DefaultServiceManagerStub::GetServiceConfig(
    grpc::ClientContext& context,
    google::api::servicemanagement::v1::GetServiceConfigRequest const&
        request) {
  google::api::Service response;
  auto status = grpc_stub_->GetServiceConfig(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::api::Service> DefaultServiceManagerStub::CreateServiceConfig(
    grpc::ClientContext& context,
    google::api::servicemanagement::v1::CreateServiceConfigRequest const&
        request) {
  google::api::Service response;
  auto status = grpc_stub_->CreateServiceConfig(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultServiceManagerStub::AsyncSubmitConfigSource(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::api::servicemanagement::v1::SubmitConfigSourceRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::api::servicemanagement::v1::SubmitConfigSourceRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::api::servicemanagement::v1::SubmitConfigSourceRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncSubmitConfigSource(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::api::servicemanagement::v1::ListServiceRolloutsResponse>
DefaultServiceManagerStub::ListServiceRollouts(
    grpc::ClientContext& context,
    google::api::servicemanagement::v1::ListServiceRolloutsRequest const&
        request) {
  google::api::servicemanagement::v1::ListServiceRolloutsResponse response;
  auto status = grpc_stub_->ListServiceRollouts(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::api::servicemanagement::v1::Rollout>
DefaultServiceManagerStub::GetServiceRollout(
    grpc::ClientContext& context,
    google::api::servicemanagement::v1::GetServiceRolloutRequest const&
        request) {
  google::api::servicemanagement::v1::Rollout response;
  auto status = grpc_stub_->GetServiceRollout(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultServiceManagerStub::AsyncCreateServiceRollout(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::api::servicemanagement::v1::CreateServiceRolloutRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::api::servicemanagement::v1::CreateServiceRolloutRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::api::servicemanagement::v1::CreateServiceRolloutRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateServiceRollout(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::api::servicemanagement::v1::GenerateConfigReportResponse>
DefaultServiceManagerStub::GenerateConfigReport(
    grpc::ClientContext& context,
    google::api::servicemanagement::v1::GenerateConfigReportRequest const&
        request) {
  google::api::servicemanagement::v1::GenerateConfigReportResponse response;
  auto status = grpc_stub_->GenerateConfigReport(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultServiceManagerStub::AsyncGetOperation(
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

future<Status> DefaultServiceManagerStub::AsyncCancelOperation(
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
}  // namespace servicemanagement_v1_internal
}  // namespace cloud
}  // namespace google
