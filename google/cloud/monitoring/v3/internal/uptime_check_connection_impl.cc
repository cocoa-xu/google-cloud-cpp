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
// source: google/monitoring/v3/uptime_service.proto

#include "google/cloud/monitoring/v3/internal/uptime_check_connection_impl.h"
#include "google/cloud/monitoring/v3/internal/uptime_check_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace monitoring_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<monitoring_v3::UptimeCheckServiceRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<monitoring_v3::UptimeCheckServiceRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<monitoring_v3::UptimeCheckServiceBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<monitoring_v3::UptimeCheckServiceConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<monitoring_v3::UptimeCheckServiceConnectionIdempotencyPolicyOption>()
      ->clone();
}

}  // namespace

UptimeCheckServiceConnectionImpl::UptimeCheckServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<monitoring_v3_internal::UptimeCheckServiceStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), UptimeCheckServiceConnection::options())) {}

StreamRange<google::monitoring::v3::UptimeCheckConfig>
UptimeCheckServiceConnectionImpl::ListUptimeCheckConfigs(
    google::monitoring::v3::ListUptimeCheckConfigsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->ListUptimeCheckConfigs(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::monitoring::v3::UptimeCheckConfig>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<monitoring_v3::UptimeCheckServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::monitoring::v3::ListUptimeCheckConfigsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::monitoring::v3::ListUptimeCheckConfigsRequest const&
                       request) {
              return stub->ListUptimeCheckConfigs(context, request);
            },
            r, function_name);
      },
      [](google::monitoring::v3::ListUptimeCheckConfigsResponse r) {
        std::vector<google::monitoring::v3::UptimeCheckConfig> result(
            r.uptime_check_configs().size());
        auto& messages = *r.mutable_uptime_check_configs();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::monitoring::v3::UptimeCheckConfig>
UptimeCheckServiceConnectionImpl::GetUptimeCheckConfig(
    google::monitoring::v3::GetUptimeCheckConfigRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetUptimeCheckConfig(request),
      [this](
          grpc::ClientContext& context,
          google::monitoring::v3::GetUptimeCheckConfigRequest const& request) {
        return stub_->GetUptimeCheckConfig(context, request);
      },
      request, __func__);
}

StatusOr<google::monitoring::v3::UptimeCheckConfig>
UptimeCheckServiceConnectionImpl::CreateUptimeCheckConfig(
    google::monitoring::v3::CreateUptimeCheckConfigRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateUptimeCheckConfig(request),
      [this](grpc::ClientContext& context,
             google::monitoring::v3::CreateUptimeCheckConfigRequest const&
                 request) {
        return stub_->CreateUptimeCheckConfig(context, request);
      },
      request, __func__);
}

StatusOr<google::monitoring::v3::UptimeCheckConfig>
UptimeCheckServiceConnectionImpl::UpdateUptimeCheckConfig(
    google::monitoring::v3::UpdateUptimeCheckConfigRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateUptimeCheckConfig(request),
      [this](grpc::ClientContext& context,
             google::monitoring::v3::UpdateUptimeCheckConfigRequest const&
                 request) {
        return stub_->UpdateUptimeCheckConfig(context, request);
      },
      request, __func__);
}

Status UptimeCheckServiceConnectionImpl::DeleteUptimeCheckConfig(
    google::monitoring::v3::DeleteUptimeCheckConfigRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteUptimeCheckConfig(request),
      [this](grpc::ClientContext& context,
             google::monitoring::v3::DeleteUptimeCheckConfigRequest const&
                 request) {
        return stub_->DeleteUptimeCheckConfig(context, request);
      },
      request, __func__);
}

StreamRange<google::monitoring::v3::UptimeCheckIp>
UptimeCheckServiceConnectionImpl::ListUptimeCheckIps(
    google::monitoring::v3::ListUptimeCheckIpsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListUptimeCheckIps(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::monitoring::v3::UptimeCheckIp>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<monitoring_v3::UptimeCheckServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::monitoring::v3::ListUptimeCheckIpsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::monitoring::v3::ListUptimeCheckIpsRequest const&
                       request) {
              return stub->ListUptimeCheckIps(context, request);
            },
            r, function_name);
      },
      [](google::monitoring::v3::ListUptimeCheckIpsResponse r) {
        std::vector<google::monitoring::v3::UptimeCheckIp> result(
            r.uptime_check_ips().size());
        auto& messages = *r.mutable_uptime_check_ips();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_v3_internal
}  // namespace cloud
}  // namespace google
