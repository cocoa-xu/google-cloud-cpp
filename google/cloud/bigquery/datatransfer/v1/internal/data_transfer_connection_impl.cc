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
// source: google/cloud/bigquery/datatransfer/v1/datatransfer.proto

#include "google/cloud/bigquery/datatransfer/v1/internal/data_transfer_connection_impl.h"
#include "google/cloud/bigquery/datatransfer/v1/internal/data_transfer_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace bigquery_datatransfer_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<bigquery_datatransfer_v1::DataTransferServiceRetryPolicy>
retry_policy(Options const& options) {
  return options
      .get<bigquery_datatransfer_v1::DataTransferServiceRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options
      .get<bigquery_datatransfer_v1::DataTransferServiceBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<
    bigquery_datatransfer_v1::DataTransferServiceConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<bigquery_datatransfer_v1::
               DataTransferServiceConnectionIdempotencyPolicyOption>()
      ->clone();
}

}  // namespace

DataTransferServiceConnectionImpl::DataTransferServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<bigquery_datatransfer_v1_internal::DataTransferServiceStub>
        stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), DataTransferServiceConnection::options())) {}

StatusOr<google::cloud::bigquery::datatransfer::v1::DataSource>
DataTransferServiceConnectionImpl::GetDataSource(
    google::cloud::bigquery::datatransfer::v1::GetDataSourceRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetDataSource(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::bigquery::datatransfer::v1::GetDataSourceRequest const&
              request) { return stub_->GetDataSource(context, request); },
      request, __func__);
}

StreamRange<google::cloud::bigquery::datatransfer::v1::DataSource>
DataTransferServiceConnectionImpl::ListDataSources(
    google::cloud::bigquery::datatransfer::v1::ListDataSourcesRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListDataSources(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::bigquery::datatransfer::v1::DataSource>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<
           bigquery_datatransfer_v1::DataTransferServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::bigquery::datatransfer::v1::
              ListDataSourcesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::bigquery::datatransfer::v1::
                       ListDataSourcesRequest const& request) {
              return stub->ListDataSources(context, request);
            },
            r, function_name);
      },
      [](google::cloud::bigquery::datatransfer::v1::ListDataSourcesResponse r) {
        std::vector<google::cloud::bigquery::datatransfer::v1::DataSource>
            result(r.data_sources().size());
        auto& messages = *r.mutable_data_sources();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::bigquery::datatransfer::v1::TransferConfig>
DataTransferServiceConnectionImpl::CreateTransferConfig(
    google::cloud::bigquery::datatransfer::v1::
        CreateTransferConfigRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateTransferConfig(request),
      [this](grpc::ClientContext& context,
             google::cloud::bigquery::datatransfer::v1::
                 CreateTransferConfigRequest const& request) {
        return stub_->CreateTransferConfig(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::bigquery::datatransfer::v1::TransferConfig>
DataTransferServiceConnectionImpl::UpdateTransferConfig(
    google::cloud::bigquery::datatransfer::v1::
        UpdateTransferConfigRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateTransferConfig(request),
      [this](grpc::ClientContext& context,
             google::cloud::bigquery::datatransfer::v1::
                 UpdateTransferConfigRequest const& request) {
        return stub_->UpdateTransferConfig(context, request);
      },
      request, __func__);
}

Status DataTransferServiceConnectionImpl::DeleteTransferConfig(
    google::cloud::bigquery::datatransfer::v1::
        DeleteTransferConfigRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteTransferConfig(request),
      [this](grpc::ClientContext& context,
             google::cloud::bigquery::datatransfer::v1::
                 DeleteTransferConfigRequest const& request) {
        return stub_->DeleteTransferConfig(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::bigquery::datatransfer::v1::TransferConfig>
DataTransferServiceConnectionImpl::GetTransferConfig(
    google::cloud::bigquery::datatransfer::v1::GetTransferConfigRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetTransferConfig(request),
      [this](grpc::ClientContext& context,
             google::cloud::bigquery::datatransfer::v1::
                 GetTransferConfigRequest const& request) {
        return stub_->GetTransferConfig(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::bigquery::datatransfer::v1::TransferConfig>
DataTransferServiceConnectionImpl::ListTransferConfigs(
    google::cloud::bigquery::datatransfer::v1::ListTransferConfigsRequest
        request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListTransferConfigs(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::bigquery::datatransfer::v1::TransferConfig>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<
           bigquery_datatransfer_v1::DataTransferServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::bigquery::datatransfer::v1::
              ListTransferConfigsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::bigquery::datatransfer::v1::
                       ListTransferConfigsRequest const& request) {
              return stub->ListTransferConfigs(context, request);
            },
            r, function_name);
      },
      [](google::cloud::bigquery::datatransfer::v1::ListTransferConfigsResponse
             r) {
        std::vector<google::cloud::bigquery::datatransfer::v1::TransferConfig>
            result(r.transfer_configs().size());
        auto& messages = *r.mutable_transfer_configs();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<
    google::cloud::bigquery::datatransfer::v1::ScheduleTransferRunsResponse>
DataTransferServiceConnectionImpl::ScheduleTransferRuns(
    google::cloud::bigquery::datatransfer::v1::
        ScheduleTransferRunsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->ScheduleTransferRuns(request),
      [this](grpc::ClientContext& context,
             google::cloud::bigquery::datatransfer::v1::
                 ScheduleTransferRunsRequest const& request) {
        return stub_->ScheduleTransferRuns(context, request);
      },
      request, __func__);
}

StatusOr<
    google::cloud::bigquery::datatransfer::v1::StartManualTransferRunsResponse>
DataTransferServiceConnectionImpl::StartManualTransferRuns(
    google::cloud::bigquery::datatransfer::v1::
        StartManualTransferRunsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->StartManualTransferRuns(request),
      [this](grpc::ClientContext& context,
             google::cloud::bigquery::datatransfer::v1::
                 StartManualTransferRunsRequest const& request) {
        return stub_->StartManualTransferRuns(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::bigquery::datatransfer::v1::TransferRun>
DataTransferServiceConnectionImpl::GetTransferRun(
    google::cloud::bigquery::datatransfer::v1::GetTransferRunRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetTransferRun(request),
      [this](grpc::ClientContext& context,
             google::cloud::bigquery::datatransfer::v1::
                 GetTransferRunRequest const& request) {
        return stub_->GetTransferRun(context, request);
      },
      request, __func__);
}

Status DataTransferServiceConnectionImpl::DeleteTransferRun(
    google::cloud::bigquery::datatransfer::v1::DeleteTransferRunRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteTransferRun(request),
      [this](grpc::ClientContext& context,
             google::cloud::bigquery::datatransfer::v1::
                 DeleteTransferRunRequest const& request) {
        return stub_->DeleteTransferRun(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::bigquery::datatransfer::v1::TransferRun>
DataTransferServiceConnectionImpl::ListTransferRuns(
    google::cloud::bigquery::datatransfer::v1::ListTransferRunsRequest
        request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListTransferRuns(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::bigquery::datatransfer::v1::TransferRun>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<
           bigquery_datatransfer_v1::DataTransferServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::bigquery::datatransfer::v1::
              ListTransferRunsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::bigquery::datatransfer::v1::
                       ListTransferRunsRequest const& request) {
              return stub->ListTransferRuns(context, request);
            },
            r, function_name);
      },
      [](google::cloud::bigquery::datatransfer::v1::ListTransferRunsResponse
             r) {
        std::vector<google::cloud::bigquery::datatransfer::v1::TransferRun>
            result(r.transfer_runs().size());
        auto& messages = *r.mutable_transfer_runs();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StreamRange<google::cloud::bigquery::datatransfer::v1::TransferMessage>
DataTransferServiceConnectionImpl::ListTransferLogs(
    google::cloud::bigquery::datatransfer::v1::ListTransferLogsRequest
        request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListTransferLogs(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::bigquery::datatransfer::v1::TransferMessage>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<
           bigquery_datatransfer_v1::DataTransferServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::bigquery::datatransfer::v1::
              ListTransferLogsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::bigquery::datatransfer::v1::
                       ListTransferLogsRequest const& request) {
              return stub->ListTransferLogs(context, request);
            },
            r, function_name);
      },
      [](google::cloud::bigquery::datatransfer::v1::ListTransferLogsResponse
             r) {
        std::vector<google::cloud::bigquery::datatransfer::v1::TransferMessage>
            result(r.transfer_messages().size());
        auto& messages = *r.mutable_transfer_messages();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::bigquery::datatransfer::v1::CheckValidCredsResponse>
DataTransferServiceConnectionImpl::CheckValidCreds(
    google::cloud::bigquery::datatransfer::v1::CheckValidCredsRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CheckValidCreds(request),
      [this](grpc::ClientContext& context,
             google::cloud::bigquery::datatransfer::v1::
                 CheckValidCredsRequest const& request) {
        return stub_->CheckValidCreds(context, request);
      },
      request, __func__);
}

Status DataTransferServiceConnectionImpl::EnrollDataSources(
    google::cloud::bigquery::datatransfer::v1::EnrollDataSourcesRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->EnrollDataSources(request),
      [this](grpc::ClientContext& context,
             google::cloud::bigquery::datatransfer::v1::
                 EnrollDataSourcesRequest const& request) {
        return stub_->EnrollDataSources(context, request);
      },
      request, __func__);
}

Status DataTransferServiceConnectionImpl::UnenrollDataSources(
    google::cloud::bigquery::datatransfer::v1::UnenrollDataSourcesRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UnenrollDataSources(request),
      [this](grpc::ClientContext& context,
             google::cloud::bigquery::datatransfer::v1::
                 UnenrollDataSourcesRequest const& request) {
        return stub_->UnenrollDataSources(context, request);
      },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_datatransfer_v1_internal
}  // namespace cloud
}  // namespace google
