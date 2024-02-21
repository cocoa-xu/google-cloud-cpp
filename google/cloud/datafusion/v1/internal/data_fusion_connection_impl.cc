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
// source: google/cloud/datafusion/v1/datafusion.proto

#include "google/cloud/datafusion/v1/internal/data_fusion_connection_impl.h"
#include "google/cloud/datafusion/v1/internal/data_fusion_option_defaults.h"
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
namespace datafusion_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<datafusion_v1::DataFusionRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<datafusion_v1::DataFusionRetryPolicyOption>()->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<datafusion_v1::DataFusionBackoffPolicyOption>()->clone();
}

std::unique_ptr<datafusion_v1::DataFusionConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<datafusion_v1::DataFusionConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<datafusion_v1::DataFusionPollingPolicyOption>()->clone();
}

}  // namespace

DataFusionConnectionImpl::DataFusionConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<datafusion_v1_internal::DataFusionStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      DataFusionConnection::options())) {}

StreamRange<google::cloud::datafusion::v1::Version>
DataFusionConnectionImpl::ListAvailableVersions(
    google::cloud::datafusion::v1::ListAvailableVersionsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->ListAvailableVersions(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::datafusion::v1::Version>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<datafusion_v1::DataFusionRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::datafusion::v1::ListAvailableVersionsRequest const&
              r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::datafusion::v1::
                       ListAvailableVersionsRequest const& request) {
              return stub->ListAvailableVersions(context, request);
            },
            r, function_name);
      },
      [](google::cloud::datafusion::v1::ListAvailableVersionsResponse r) {
        std::vector<google::cloud::datafusion::v1::Version> result(
            r.available_versions().size());
        auto& messages = *r.mutable_available_versions();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StreamRange<google::cloud::datafusion::v1::Instance>
DataFusionConnectionImpl::ListInstances(
    google::cloud::datafusion::v1::ListInstancesRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListInstances(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::datafusion::v1::Instance>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<datafusion_v1::DataFusionRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::datafusion::v1::ListInstancesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::datafusion::v1::ListInstancesRequest const&
                       request) {
              return stub->ListInstances(context, request);
            },
            r, function_name);
      },
      [](google::cloud::datafusion::v1::ListInstancesResponse r) {
        std::vector<google::cloud::datafusion::v1::Instance> result(
            r.instances().size());
        auto& messages = *r.mutable_instances();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::datafusion::v1::Instance>
DataFusionConnectionImpl::GetInstance(
    google::cloud::datafusion::v1::GetInstanceRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetInstance(request),
      [this](grpc::ClientContext& context,
             google::cloud::datafusion::v1::GetInstanceRequest const& request) {
        return stub_->GetInstance(context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::datafusion::v1::Instance>>
DataFusionConnectionImpl::CreateInstance(
    google::cloud::datafusion::v1::CreateInstanceRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreateInstance(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::datafusion::v1::Instance>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::datafusion::v1::CreateInstanceRequest const& request) {
        return stub->AsyncCreateInstance(cq, std::move(context), options,
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
          google::cloud::datafusion::v1::Instance>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::datafusion::v1::OperationMetadata>>
DataFusionConnectionImpl::DeleteInstance(
    google::cloud::datafusion::v1::DeleteInstanceRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeleteInstance(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::datafusion::v1::OperationMetadata>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::datafusion::v1::DeleteInstanceRequest const& request) {
        return stub->AsyncDeleteInstance(cq, std::move(context), options,
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
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::cloud::datafusion::v1::OperationMetadata>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::datafusion::v1::Instance>>
DataFusionConnectionImpl::UpdateInstance(
    google::cloud::datafusion::v1::UpdateInstanceRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->UpdateInstance(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::datafusion::v1::Instance>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::datafusion::v1::UpdateInstanceRequest const& request) {
        return stub->AsyncUpdateInstance(cq, std::move(context), options,
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
          google::cloud::datafusion::v1::Instance>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::datafusion::v1::Instance>>
DataFusionConnectionImpl::RestartInstance(
    google::cloud::datafusion::v1::RestartInstanceRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->RestartInstance(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::datafusion::v1::Instance>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::datafusion::v1::RestartInstanceRequest const&
              request) {
        return stub->AsyncRestartInstance(cq, std::move(context), options,
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
          google::cloud::datafusion::v1::Instance>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datafusion_v1_internal
}  // namespace cloud
}  // namespace google
