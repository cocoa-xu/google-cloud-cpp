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
// source: google/cloud/batch/v1/batch.proto

#include "google/cloud/batch/v1/internal/batch_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/batch/v1/batch.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace batch_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

BatchServiceLogging::BatchServiceLogging(
    std::shared_ptr<BatchServiceStub> child, TracingOptions tracing_options,
    std::set<std::string> const& components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      stream_logging_(components.find("rpc-streams") != components.end()) {}

StatusOr<google::cloud::batch::v1::Job> BatchServiceLogging::CreateJob(
    grpc::ClientContext& context,
    google::cloud::batch::v1::CreateJobRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::batch::v1::CreateJobRequest const& request) {
        return child_->CreateJob(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::batch::v1::Job> BatchServiceLogging::GetJob(
    grpc::ClientContext& context,
    google::cloud::batch::v1::GetJobRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::batch::v1::GetJobRequest const& request) {
        return child_->GetJob(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
BatchServiceLogging::AsyncDeleteJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::batch::v1::DeleteJobRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::batch::v1::DeleteJobRequest const& request) {
        return child_->AsyncDeleteJob(cq, std::move(context), options, request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::batch::v1::ListJobsResponse>
BatchServiceLogging::ListJobs(
    grpc::ClientContext& context,
    google::cloud::batch::v1::ListJobsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::batch::v1::ListJobsRequest const& request) {
        return child_->ListJobs(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::batch::v1::Task> BatchServiceLogging::GetTask(
    grpc::ClientContext& context,
    google::cloud::batch::v1::GetTaskRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::batch::v1::GetTaskRequest const& request) {
        return child_->GetTask(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::batch::v1::ListTasksResponse>
BatchServiceLogging::ListTasks(
    grpc::ClientContext& context,
    google::cloud::batch::v1::ListTasksRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::batch::v1::ListTasksRequest const& request) {
        return child_->ListTasks(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
BatchServiceLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context), options,
                                         request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<Status> BatchServiceLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context), options,
                                            request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace batch_v1_internal
}  // namespace cloud
}  // namespace google
