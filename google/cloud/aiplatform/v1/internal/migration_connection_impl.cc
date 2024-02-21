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
// source: google/cloud/aiplatform/v1/migration_service.proto

#include "google/cloud/aiplatform/v1/internal/migration_connection_impl.h"
#include "google/cloud/aiplatform/v1/internal/migration_option_defaults.h"
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

std::unique_ptr<aiplatform_v1::MigrationServiceRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<aiplatform_v1::MigrationServiceRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<aiplatform_v1::MigrationServiceBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<aiplatform_v1::MigrationServiceConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<aiplatform_v1::MigrationServiceConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<aiplatform_v1::MigrationServicePollingPolicyOption>()
      ->clone();
}

}  // namespace

MigrationServiceConnectionImpl::MigrationServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<aiplatform_v1_internal::MigrationServiceStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      MigrationServiceConnection::options())) {}

StreamRange<google::cloud::aiplatform::v1::MigratableResource>
MigrationServiceConnectionImpl::SearchMigratableResources(
    google::cloud::aiplatform::v1::SearchMigratableResourcesRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->SearchMigratableResources(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::aiplatform::v1::MigratableResource>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<aiplatform_v1::MigrationServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::aiplatform::v1::SearchMigratableResourcesRequest const&
              r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::aiplatform::v1::
                       SearchMigratableResourcesRequest const& request) {
              return stub->SearchMigratableResources(context, request);
            },
            r, function_name);
      },
      [](google::cloud::aiplatform::v1::SearchMigratableResourcesResponse r) {
        std::vector<google::cloud::aiplatform::v1::MigratableResource> result(
            r.migratable_resources().size());
        auto& messages = *r.mutable_migratable_resources();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::cloud::aiplatform::v1::BatchMigrateResourcesResponse>>
MigrationServiceConnectionImpl::BatchMigrateResources(
    google::cloud::aiplatform::v1::BatchMigrateResourcesRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->BatchMigrateResources(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::aiplatform::v1::BatchMigrateResourcesResponse>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::aiplatform::v1::BatchMigrateResourcesRequest const&
              request) {
        return stub->AsyncBatchMigrateResources(cq, std::move(context), options,
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
          google::cloud::aiplatform::v1::BatchMigrateResourcesResponse>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
