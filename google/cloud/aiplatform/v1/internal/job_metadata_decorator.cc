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
// source: google/cloud/aiplatform/v1/job_service.proto

#include "google/cloud/aiplatform/v1/internal/job_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/aiplatform/v1/job_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

JobServiceMetadata::JobServiceMetadata(
    std::shared_ptr<JobServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::aiplatform::v1::CustomJob>
JobServiceMetadata::CreateCustomJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::CreateCustomJobRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateCustomJob(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::CustomJob>
JobServiceMetadata::GetCustomJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetCustomJobRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetCustomJob(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::ListCustomJobsResponse>
JobServiceMetadata::ListCustomJobs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListCustomJobsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListCustomJobs(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
JobServiceMetadata::AsyncDeleteCustomJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::DeleteCustomJobRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteCustomJob(cq, std::move(context),
                                      std::move(options), request);
}

Status JobServiceMetadata::CancelCustomJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::CancelCustomJobRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->CancelCustomJob(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::DataLabelingJob>
JobServiceMetadata::CreateDataLabelingJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::CreateDataLabelingJobRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateDataLabelingJob(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::DataLabelingJob>
JobServiceMetadata::GetDataLabelingJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetDataLabelingJobRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetDataLabelingJob(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::ListDataLabelingJobsResponse>
JobServiceMetadata::ListDataLabelingJobs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListDataLabelingJobsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListDataLabelingJobs(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
JobServiceMetadata::AsyncDeleteDataLabelingJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::DeleteDataLabelingJobRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteDataLabelingJob(cq, std::move(context),
                                            std::move(options), request);
}

Status JobServiceMetadata::CancelDataLabelingJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::CancelDataLabelingJobRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->CancelDataLabelingJob(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::HyperparameterTuningJob>
JobServiceMetadata::CreateHyperparameterTuningJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::CreateHyperparameterTuningJobRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateHyperparameterTuningJob(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::HyperparameterTuningJob>
JobServiceMetadata::GetHyperparameterTuningJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetHyperparameterTuningJobRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetHyperparameterTuningJob(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::ListHyperparameterTuningJobsResponse>
JobServiceMetadata::ListHyperparameterTuningJobs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListHyperparameterTuningJobsRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListHyperparameterTuningJobs(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
JobServiceMetadata::AsyncDeleteHyperparameterTuningJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::DeleteHyperparameterTuningJobRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteHyperparameterTuningJob(
      cq, std::move(context), std::move(options), request);
}

Status JobServiceMetadata::CancelHyperparameterTuningJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::CancelHyperparameterTuningJobRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->CancelHyperparameterTuningJob(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::NasJob>
JobServiceMetadata::CreateNasJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::CreateNasJobRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateNasJob(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::NasJob> JobServiceMetadata::GetNasJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetNasJobRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetNasJob(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::ListNasJobsResponse>
JobServiceMetadata::ListNasJobs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListNasJobsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListNasJobs(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
JobServiceMetadata::AsyncDeleteNasJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::DeleteNasJobRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteNasJob(cq, std::move(context), std::move(options),
                                   request);
}

Status JobServiceMetadata::CancelNasJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::CancelNasJobRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->CancelNasJob(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::NasTrialDetail>
JobServiceMetadata::GetNasTrialDetail(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetNasTrialDetailRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetNasTrialDetail(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::ListNasTrialDetailsResponse>
JobServiceMetadata::ListNasTrialDetails(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListNasTrialDetailsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListNasTrialDetails(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::BatchPredictionJob>
JobServiceMetadata::CreateBatchPredictionJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::CreateBatchPredictionJobRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateBatchPredictionJob(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::BatchPredictionJob>
JobServiceMetadata::GetBatchPredictionJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetBatchPredictionJobRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetBatchPredictionJob(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::ListBatchPredictionJobsResponse>
JobServiceMetadata::ListBatchPredictionJobs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListBatchPredictionJobsRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListBatchPredictionJobs(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
JobServiceMetadata::AsyncDeleteBatchPredictionJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::DeleteBatchPredictionJobRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteBatchPredictionJob(cq, std::move(context),
                                               std::move(options), request);
}

Status JobServiceMetadata::CancelBatchPredictionJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::CancelBatchPredictionJobRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->CancelBatchPredictionJob(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::ModelDeploymentMonitoringJob>
JobServiceMetadata::CreateModelDeploymentMonitoringJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::
        CreateModelDeploymentMonitoringJobRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateModelDeploymentMonitoringJob(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::
             SearchModelDeploymentMonitoringStatsAnomaliesResponse>
JobServiceMetadata::SearchModelDeploymentMonitoringStatsAnomalies(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::
        SearchModelDeploymentMonitoringStatsAnomaliesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("model_deployment_monitoring_job=",
                           internal::UrlEncode(
                               request.model_deployment_monitoring_job())));
  return child_->SearchModelDeploymentMonitoringStatsAnomalies(context, options,
                                                               request);
}

StatusOr<google::cloud::aiplatform::v1::ModelDeploymentMonitoringJob>
JobServiceMetadata::GetModelDeploymentMonitoringJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetModelDeploymentMonitoringJobRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetModelDeploymentMonitoringJob(context, options, request);
}

StatusOr<
    google::cloud::aiplatform::v1::ListModelDeploymentMonitoringJobsResponse>
JobServiceMetadata::ListModelDeploymentMonitoringJobs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::
        ListModelDeploymentMonitoringJobsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListModelDeploymentMonitoringJobs(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
JobServiceMetadata::AsyncUpdateModelDeploymentMonitoringJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::
        UpdateModelDeploymentMonitoringJobRequest const& request) {
  SetMetadata(
      *context, *options,
      absl::StrCat("model_deployment_monitoring_job.name=",
                   internal::UrlEncode(
                       request.model_deployment_monitoring_job().name())));
  return child_->AsyncUpdateModelDeploymentMonitoringJob(
      cq, std::move(context), std::move(options), request);
}

future<StatusOr<google::longrunning::Operation>>
JobServiceMetadata::AsyncDeleteModelDeploymentMonitoringJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::
        DeleteModelDeploymentMonitoringJobRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteModelDeploymentMonitoringJob(
      cq, std::move(context), std::move(options), request);
}

Status JobServiceMetadata::PauseModelDeploymentMonitoringJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::
        PauseModelDeploymentMonitoringJobRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->PauseModelDeploymentMonitoringJob(context, options, request);
}

Status JobServiceMetadata::ResumeModelDeploymentMonitoringJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::
        ResumeModelDeploymentMonitoringJobRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ResumeModelDeploymentMonitoringJob(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
JobServiceMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), std::move(options),
                                   request);
}

future<Status> JobServiceMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context),
                                      std::move(options), request);
}

void JobServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                     Options const& options,
                                     std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void JobServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                     Options const& options) {
  for (auto const& kv : fixed_metadata_) {
    context.AddMetadata(kv.first, kv.second);
  }
  context.AddMetadata("x-goog-api-client", api_client_header_);
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
  for (auto const& h : options.get<CustomHeadersOption>()) {
    context.AddMetadata(h.first, h.second);
  }
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
