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
// source: google/api/servicecontrol/v1/quota_controller.proto

#include "google/cloud/servicecontrol/v1/internal/quota_controller_connection_impl.h"
#include "google/cloud/servicecontrol/v1/internal/quota_controller_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace servicecontrol_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<servicecontrol_v1::QuotaControllerRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<servicecontrol_v1::QuotaControllerRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<servicecontrol_v1::QuotaControllerBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<servicecontrol_v1::QuotaControllerConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<
          servicecontrol_v1::QuotaControllerConnectionIdempotencyPolicyOption>()
      ->clone();
}

}  // namespace

QuotaControllerConnectionImpl::QuotaControllerConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<servicecontrol_v1_internal::QuotaControllerStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      QuotaControllerConnection::options())) {}

StatusOr<google::api::servicecontrol::v1::AllocateQuotaResponse>
QuotaControllerConnectionImpl::AllocateQuota(
    google::api::servicecontrol::v1::AllocateQuotaRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->AllocateQuota(request),
      [this](grpc::ClientContext& context,
             google::api::servicecontrol::v1::AllocateQuotaRequest const&
                 request) { return stub_->AllocateQuota(context, request); },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace servicecontrol_v1_internal
}  // namespace cloud
}  // namespace google
