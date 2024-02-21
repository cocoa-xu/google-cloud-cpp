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
// google/cloud/rapidmigrationassessment/v1/rapidmigrationassessment.proto

#include "google/cloud/rapidmigrationassessment/v1/internal/rapid_migration_assessment_connection_impl.h"
#include "google/cloud/rapidmigrationassessment/v1/internal/rapid_migration_assessment_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace rapidmigrationassessment_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<
    rapidmigrationassessment_v1::RapidMigrationAssessmentRetryPolicy>
retry_policy(Options const& options) {
  return options
      .get<rapidmigrationassessment_v1::
               RapidMigrationAssessmentRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options
      .get<rapidmigrationassessment_v1::
               RapidMigrationAssessmentBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<rapidmigrationassessment_v1::
                    RapidMigrationAssessmentConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<rapidmigrationassessment_v1::
               RapidMigrationAssessmentConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options
      .get<rapidmigrationassessment_v1::
               RapidMigrationAssessmentPollingPolicyOption>()
      ->clone();
}

}  // namespace

RapidMigrationAssessmentConnectionImpl::RapidMigrationAssessmentConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<
        rapidmigrationassessment_v1_internal::RapidMigrationAssessmentStub>
        stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), RapidMigrationAssessmentConnection::options())) {}

future<StatusOr<google::cloud::rapidmigrationassessment::v1::Collector>>
RapidMigrationAssessmentConnectionImpl::CreateCollector(
    google::cloud::rapidmigrationassessment::v1::CreateCollectorRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreateCollector(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::rapidmigrationassessment::v1::Collector>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::cloud::rapidmigrationassessment::v1::
                         CreateCollectorRequest const& request) {
        return stub->AsyncCreateCollector(cq, std::move(context), options,
                                          request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::rapidmigrationassessment::v1::Collector>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::rapidmigrationassessment::v1::Annotation>>
RapidMigrationAssessmentConnectionImpl::CreateAnnotation(
    google::cloud::rapidmigrationassessment::v1::CreateAnnotationRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreateAnnotation(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::rapidmigrationassessment::v1::Annotation>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::cloud::rapidmigrationassessment::v1::
                         CreateAnnotationRequest const& request) {
        return stub->AsyncCreateAnnotation(cq, std::move(context), options,
                                           request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::rapidmigrationassessment::v1::Annotation>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::rapidmigrationassessment::v1::Annotation>
RapidMigrationAssessmentConnectionImpl::GetAnnotation(
    google::cloud::rapidmigrationassessment::v1::GetAnnotationRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetAnnotation(request),
      [this](grpc::ClientContext& context,
             google::cloud::rapidmigrationassessment::v1::
                 GetAnnotationRequest const& request) {
        return stub_->GetAnnotation(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::rapidmigrationassessment::v1::Collector>
RapidMigrationAssessmentConnectionImpl::ListCollectors(
    google::cloud::rapidmigrationassessment::v1::ListCollectorsRequest
        request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListCollectors(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::rapidmigrationassessment::v1::Collector>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<
           rapidmigrationassessment_v1::RapidMigrationAssessmentRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::rapidmigrationassessment::v1::
              ListCollectorsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::rapidmigrationassessment::v1::
                       ListCollectorsRequest const& request) {
              return stub->ListCollectors(context, request);
            },
            r, function_name);
      },
      [](google::cloud::rapidmigrationassessment::v1::ListCollectorsResponse
             r) {
        std::vector<google::cloud::rapidmigrationassessment::v1::Collector>
            result(r.collectors().size());
        auto& messages = *r.mutable_collectors();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::rapidmigrationassessment::v1::Collector>
RapidMigrationAssessmentConnectionImpl::GetCollector(
    google::cloud::rapidmigrationassessment::v1::GetCollectorRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetCollector(request),
      [this](grpc::ClientContext& context,
             google::cloud::rapidmigrationassessment::v1::
                 GetCollectorRequest const& request) {
        return stub_->GetCollector(context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::rapidmigrationassessment::v1::Collector>>
RapidMigrationAssessmentConnectionImpl::UpdateCollector(
    google::cloud::rapidmigrationassessment::v1::UpdateCollectorRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->UpdateCollector(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::rapidmigrationassessment::v1::Collector>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::cloud::rapidmigrationassessment::v1::
                         UpdateCollectorRequest const& request) {
        return stub->AsyncUpdateCollector(cq, std::move(context), options,
                                          request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::rapidmigrationassessment::v1::Collector>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::rapidmigrationassessment::v1::Collector>>
RapidMigrationAssessmentConnectionImpl::DeleteCollector(
    google::cloud::rapidmigrationassessment::v1::DeleteCollectorRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeleteCollector(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::rapidmigrationassessment::v1::Collector>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::cloud::rapidmigrationassessment::v1::
                         DeleteCollectorRequest const& request) {
        return stub->AsyncDeleteCollector(cq, std::move(context), options,
                                          request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::rapidmigrationassessment::v1::Collector>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::rapidmigrationassessment::v1::Collector>>
RapidMigrationAssessmentConnectionImpl::ResumeCollector(
    google::cloud::rapidmigrationassessment::v1::ResumeCollectorRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->ResumeCollector(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::rapidmigrationassessment::v1::Collector>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::cloud::rapidmigrationassessment::v1::
                         ResumeCollectorRequest const& request) {
        return stub->AsyncResumeCollector(cq, std::move(context), options,
                                          request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::rapidmigrationassessment::v1::Collector>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::rapidmigrationassessment::v1::Collector>>
RapidMigrationAssessmentConnectionImpl::RegisterCollector(
    google::cloud::rapidmigrationassessment::v1::RegisterCollectorRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->RegisterCollector(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::rapidmigrationassessment::v1::Collector>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::cloud::rapidmigrationassessment::v1::
                         RegisterCollectorRequest const& request) {
        return stub->AsyncRegisterCollector(cq, std::move(context), options,
                                            request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::rapidmigrationassessment::v1::Collector>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::rapidmigrationassessment::v1::Collector>>
RapidMigrationAssessmentConnectionImpl::PauseCollector(
    google::cloud::rapidmigrationassessment::v1::PauseCollectorRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->PauseCollector(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::rapidmigrationassessment::v1::Collector>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::cloud::rapidmigrationassessment::v1::
                         PauseCollectorRequest const& request) {
        return stub->AsyncPauseCollector(cq, std::move(context), options,
                                         request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::rapidmigrationassessment::v1::Collector>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace rapidmigrationassessment_v1_internal
}  // namespace cloud
}  // namespace google
