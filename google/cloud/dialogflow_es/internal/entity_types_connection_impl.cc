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
// source: google/cloud/dialogflow/v2/entity_type.proto

#include "google/cloud/dialogflow_es/internal/entity_types_connection_impl.h"
#include "google/cloud/dialogflow_es/internal/entity_types_option_defaults.h"
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
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<dialogflow_es::EntityTypesRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<dialogflow_es::EntityTypesRetryPolicyOption>()->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<dialogflow_es::EntityTypesBackoffPolicyOption>()->clone();
}

std::unique_ptr<dialogflow_es::EntityTypesConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<dialogflow_es::EntityTypesConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<dialogflow_es::EntityTypesPollingPolicyOption>()->clone();
}

}  // namespace

EntityTypesConnectionImpl::EntityTypesConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<dialogflow_es_internal::EntityTypesStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      EntityTypesConnection::options())) {}

StreamRange<google::cloud::dialogflow::v2::EntityType>
EntityTypesConnectionImpl::ListEntityTypes(
    google::cloud::dialogflow::v2::ListEntityTypesRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListEntityTypes(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::dialogflow::v2::EntityType>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<dialogflow_es::EntityTypesRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::dialogflow::v2::ListEntityTypesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::dialogflow::v2::ListEntityTypesRequest const&
                       request) {
              return stub->ListEntityTypes(context, request);
            },
            r, function_name);
      },
      [](google::cloud::dialogflow::v2::ListEntityTypesResponse r) {
        std::vector<google::cloud::dialogflow::v2::EntityType> result(
            r.entity_types().size());
        auto& messages = *r.mutable_entity_types();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::dialogflow::v2::EntityType>
EntityTypesConnectionImpl::GetEntityType(
    google::cloud::dialogflow::v2::GetEntityTypeRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetEntityType(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::dialogflow::v2::GetEntityTypeRequest const& request) {
        return stub_->GetEntityType(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::dialogflow::v2::EntityType>
EntityTypesConnectionImpl::CreateEntityType(
    google::cloud::dialogflow::v2::CreateEntityTypeRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateEntityType(request),
      [this](grpc::ClientContext& context,
             google::cloud::dialogflow::v2::CreateEntityTypeRequest const&
                 request) { return stub_->CreateEntityType(context, request); },
      request, __func__);
}

StatusOr<google::cloud::dialogflow::v2::EntityType>
EntityTypesConnectionImpl::UpdateEntityType(
    google::cloud::dialogflow::v2::UpdateEntityTypeRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateEntityType(request),
      [this](grpc::ClientContext& context,
             google::cloud::dialogflow::v2::UpdateEntityTypeRequest const&
                 request) { return stub_->UpdateEntityType(context, request); },
      request, __func__);
}

Status EntityTypesConnectionImpl::DeleteEntityType(
    google::cloud::dialogflow::v2::DeleteEntityTypeRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteEntityType(request),
      [this](grpc::ClientContext& context,
             google::cloud::dialogflow::v2::DeleteEntityTypeRequest const&
                 request) { return stub_->DeleteEntityType(context, request); },
      request, __func__);
}

future<StatusOr<google::cloud::dialogflow::v2::BatchUpdateEntityTypesResponse>>
EntityTypesConnectionImpl::BatchUpdateEntityTypes(
    google::cloud::dialogflow::v2::BatchUpdateEntityTypesRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->BatchUpdateEntityTypes(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::dialogflow::v2::BatchUpdateEntityTypesResponse>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::dialogflow::v2::BatchUpdateEntityTypesRequest const&
              request) {
        return stub->AsyncBatchUpdateEntityTypes(cq, std::move(context),
                                                 options, request);
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
          google::cloud::dialogflow::v2::BatchUpdateEntityTypesResponse>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::protobuf::Struct>>
EntityTypesConnectionImpl::BatchDeleteEntityTypes(
    google::cloud::dialogflow::v2::BatchDeleteEntityTypesRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->BatchDeleteEntityTypes(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::protobuf::Struct>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::dialogflow::v2::BatchDeleteEntityTypesRequest const&
              request) {
        return stub->AsyncBatchDeleteEntityTypes(cq, std::move(context),
                                                 options, request);
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
          google::protobuf::Struct>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::protobuf::Struct>>
EntityTypesConnectionImpl::BatchCreateEntities(
    google::cloud::dialogflow::v2::BatchCreateEntitiesRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->BatchCreateEntities(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::protobuf::Struct>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::dialogflow::v2::BatchCreateEntitiesRequest const&
              request) {
        return stub->AsyncBatchCreateEntities(cq, std::move(context), options,
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
          google::protobuf::Struct>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::protobuf::Struct>>
EntityTypesConnectionImpl::BatchUpdateEntities(
    google::cloud::dialogflow::v2::BatchUpdateEntitiesRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->BatchUpdateEntities(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::protobuf::Struct>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::dialogflow::v2::BatchUpdateEntitiesRequest const&
              request) {
        return stub->AsyncBatchUpdateEntities(cq, std::move(context), options,
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
          google::protobuf::Struct>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::protobuf::Struct>>
EntityTypesConnectionImpl::BatchDeleteEntities(
    google::cloud::dialogflow::v2::BatchDeleteEntitiesRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->BatchDeleteEntities(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::protobuf::Struct>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::dialogflow::v2::BatchDeleteEntitiesRequest const&
              request) {
        return stub->AsyncBatchDeleteEntities(cq, std::move(context), options,
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
          google::protobuf::Struct>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
