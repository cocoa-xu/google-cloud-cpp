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
// source: google/cloud/videointelligence/v1/video_intelligence.proto

#include "google/cloud/videointelligence/v1/internal/video_intelligence_connection_impl.h"
#include "google/cloud/videointelligence/v1/internal/video_intelligence_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace videointelligence_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<videointelligence_v1::VideoIntelligenceServiceRetryPolicy>
retry_policy(Options const& options) {
  return options
      .get<videointelligence_v1::VideoIntelligenceServiceRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options
      .get<videointelligence_v1::VideoIntelligenceServiceBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<
    videointelligence_v1::VideoIntelligenceServiceConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<videointelligence_v1::
               VideoIntelligenceServiceConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options
      .get<videointelligence_v1::VideoIntelligenceServicePollingPolicyOption>()
      ->clone();
}

}  // namespace

VideoIntelligenceServiceConnectionImpl::VideoIntelligenceServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<videointelligence_v1_internal::VideoIntelligenceServiceStub>
        stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), VideoIntelligenceServiceConnection::options())) {}

future<StatusOr<google::cloud::videointelligence::v1::AnnotateVideoResponse>>
VideoIntelligenceServiceConnectionImpl::AnnotateVideo(
    google::cloud::videointelligence::v1::AnnotateVideoRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->AnnotateVideo(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::videointelligence::v1::AnnotateVideoResponse>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::videointelligence::v1::AnnotateVideoRequest const&
              request) {
        return stub->AsyncAnnotateVideo(cq, std::move(context), options,
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
          google::cloud::videointelligence::v1::AnnotateVideoResponse>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace videointelligence_v1_internal
}  // namespace cloud
}  // namespace google
