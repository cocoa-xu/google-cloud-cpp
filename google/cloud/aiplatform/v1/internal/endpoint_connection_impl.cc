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
// source: google/cloud/aiplatform/v1/endpoint_service.proto

#include "google/cloud/aiplatform/v1/internal/endpoint_connection_impl.h"
#include "google/cloud/aiplatform/v1/internal/endpoint_option_defaults.h"
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
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<aiplatform_v1::EndpointServiceRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<aiplatform_v1::EndpointServiceRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<aiplatform_v1::EndpointServiceBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<aiplatform_v1::EndpointServiceConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<aiplatform_v1::EndpointServiceConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<aiplatform_v1::EndpointServicePollingPolicyOption>()
      ->clone();
}

}  // namespace

EndpointServiceConnectionImpl::EndpointServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<aiplatform_v1_internal::EndpointServiceStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      EndpointServiceConnection::options())) {}

future<StatusOr<google::cloud::aiplatform::v1::Endpoint>>
EndpointServiceConnectionImpl::CreateEndpoint(
    google::cloud::aiplatform::v1::CreateEndpointRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreateEndpoint(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::aiplatform::v1::Endpoint>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::aiplatform::v1::CreateEndpointRequest const& request) {
        return stub->AsyncCreateEndpoint(cq, std::move(context), options,
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
          google::cloud::aiplatform::v1::Endpoint>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::aiplatform::v1::Endpoint>
EndpointServiceConnectionImpl::GetEndpoint(
    google::cloud::aiplatform::v1::GetEndpointRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetEndpoint(request),
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::GetEndpointRequest const& request) {
        return stub_->GetEndpoint(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::aiplatform::v1::Endpoint>
EndpointServiceConnectionImpl::ListEndpoints(
    google::cloud::aiplatform::v1::ListEndpointsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListEndpoints(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::aiplatform::v1::Endpoint>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<aiplatform_v1::EndpointServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::aiplatform::v1::ListEndpointsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::aiplatform::v1::ListEndpointsRequest const&
                       request) {
              return stub->ListEndpoints(context, request);
            },
            r, function_name);
      },
      [](google::cloud::aiplatform::v1::ListEndpointsResponse r) {
        std::vector<google::cloud::aiplatform::v1::Endpoint> result(
            r.endpoints().size());
        auto& messages = *r.mutable_endpoints();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::aiplatform::v1::Endpoint>
EndpointServiceConnectionImpl::UpdateEndpoint(
    google::cloud::aiplatform::v1::UpdateEndpointRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateEndpoint(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::aiplatform::v1::UpdateEndpointRequest const& request) {
        return stub_->UpdateEndpoint(context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
EndpointServiceConnectionImpl::DeleteEndpoint(
    google::cloud::aiplatform::v1::DeleteEndpointRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeleteEndpoint(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::aiplatform::v1::DeleteOperationMetadata>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::aiplatform::v1::DeleteEndpointRequest const& request) {
        return stub->AsyncDeleteEndpoint(cq, std::move(context), options,
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
          google::cloud::aiplatform::v1::DeleteOperationMetadata>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::aiplatform::v1::DeployModelResponse>>
EndpointServiceConnectionImpl::DeployModel(
    google::cloud::aiplatform::v1::DeployModelRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeployModel(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::aiplatform::v1::DeployModelResponse>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::aiplatform::v1::DeployModelRequest const& request) {
        return stub->AsyncDeployModel(cq, std::move(context), options, request);
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
          google::cloud::aiplatform::v1::DeployModelResponse>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::aiplatform::v1::UndeployModelResponse>>
EndpointServiceConnectionImpl::UndeployModel(
    google::cloud::aiplatform::v1::UndeployModelRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->UndeployModel(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::aiplatform::v1::UndeployModelResponse>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::aiplatform::v1::UndeployModelRequest const& request) {
        return stub->AsyncUndeployModel(cq, std::move(context), options,
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
          google::cloud::aiplatform::v1::UndeployModelResponse>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::aiplatform::v1::MutateDeployedModelResponse>>
EndpointServiceConnectionImpl::MutateDeployedModel(
    google::cloud::aiplatform::v1::MutateDeployedModelRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->MutateDeployedModel(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::aiplatform::v1::MutateDeployedModelResponse>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::aiplatform::v1::MutateDeployedModelRequest const&
              request) {
        return stub->AsyncMutateDeployedModel(cq, std::move(context), options,
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
          google::cloud::aiplatform::v1::MutateDeployedModelResponse>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
