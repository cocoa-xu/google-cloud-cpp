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
// source: google/cloud/aiplatform/v1/pipeline_service.proto

#include "google/cloud/aiplatform/v1/internal/pipeline_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/aiplatform/v1/pipeline_service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

PipelineServiceStub::~PipelineServiceStub() = default;

StatusOr<google::cloud::aiplatform::v1::TrainingPipeline>
DefaultPipelineServiceStub::CreateTrainingPipeline(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::CreateTrainingPipelineRequest const&
        request) {
  google::cloud::aiplatform::v1::TrainingPipeline response;
  auto status =
      grpc_stub_->CreateTrainingPipeline(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::TrainingPipeline>
DefaultPipelineServiceStub::GetTrainingPipeline(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::GetTrainingPipelineRequest const& request) {
  google::cloud::aiplatform::v1::TrainingPipeline response;
  auto status = grpc_stub_->GetTrainingPipeline(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::ListTrainingPipelinesResponse>
DefaultPipelineServiceStub::ListTrainingPipelines(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::ListTrainingPipelinesRequest const&
        request) {
  google::cloud::aiplatform::v1::ListTrainingPipelinesResponse response;
  auto status = grpc_stub_->ListTrainingPipelines(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultPipelineServiceStub::AsyncDeleteTrainingPipeline(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::aiplatform::v1::DeleteTrainingPipelineRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::DeleteTrainingPipelineRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::aiplatform::v1::DeleteTrainingPipelineRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteTrainingPipeline(context, request, cq);
      },
      request, std::move(context));
}

Status DefaultPipelineServiceStub::CancelTrainingPipeline(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::CancelTrainingPipelineRequest const&
        request) {
  google::protobuf::Empty response;
  auto status =
      grpc_stub_->CancelTrainingPipeline(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::aiplatform::v1::PipelineJob>
DefaultPipelineServiceStub::CreatePipelineJob(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::CreatePipelineJobRequest const& request) {
  google::cloud::aiplatform::v1::PipelineJob response;
  auto status = grpc_stub_->CreatePipelineJob(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::PipelineJob>
DefaultPipelineServiceStub::GetPipelineJob(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::GetPipelineJobRequest const& request) {
  google::cloud::aiplatform::v1::PipelineJob response;
  auto status = grpc_stub_->GetPipelineJob(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::ListPipelineJobsResponse>
DefaultPipelineServiceStub::ListPipelineJobs(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::ListPipelineJobsRequest const& request) {
  google::cloud::aiplatform::v1::ListPipelineJobsResponse response;
  auto status = grpc_stub_->ListPipelineJobs(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultPipelineServiceStub::AsyncDeletePipelineJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::aiplatform::v1::DeletePipelineJobRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::DeletePipelineJobRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::aiplatform::v1::DeletePipelineJobRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeletePipelineJob(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultPipelineServiceStub::AsyncBatchDeletePipelineJobs(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::aiplatform::v1::BatchDeletePipelineJobsRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::BatchDeletePipelineJobsRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::aiplatform::v1::BatchDeletePipelineJobsRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncBatchDeletePipelineJobs(context, request, cq);
      },
      request, std::move(context));
}

Status DefaultPipelineServiceStub::CancelPipelineJob(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::CancelPipelineJobRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->CancelPipelineJob(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

future<StatusOr<google::longrunning::Operation>>
DefaultPipelineServiceStub::AsyncBatchCancelPipelineJobs(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::aiplatform::v1::BatchCancelPipelineJobsRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::BatchCancelPipelineJobsRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::aiplatform::v1::BatchCancelPipelineJobsRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncBatchCancelPipelineJobs(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultPipelineServiceStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    // NOLINTNEXTLINE(performance-unnecessary-value-param)
    google::cloud::internal::ImmutableOptions,
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

future<Status> DefaultPipelineServiceStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    // NOLINTNEXTLINE(performance-unnecessary-value-param)
    google::cloud::internal::ImmutableOptions,
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
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
