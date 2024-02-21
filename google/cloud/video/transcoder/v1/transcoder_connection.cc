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
// source: google/cloud/video/transcoder/v1/services.proto

#include "google/cloud/video/transcoder/v1/transcoder_connection.h"
#include "google/cloud/video/transcoder/v1/internal/transcoder_connection_impl.h"
#include "google/cloud/video/transcoder/v1/internal/transcoder_option_defaults.h"
#include "google/cloud/video/transcoder/v1/internal/transcoder_stub_factory.h"
#include "google/cloud/video/transcoder/v1/internal/transcoder_tracing_connection.h"
#include "google/cloud/video/transcoder/v1/transcoder_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace video_transcoder_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TranscoderServiceConnection::~TranscoderServiceConnection() = default;

StatusOr<google::cloud::video::transcoder::v1::Job>
TranscoderServiceConnection::CreateJob(
    google::cloud::video::transcoder::v1::CreateJobRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::video::transcoder::v1::Job>
TranscoderServiceConnection::ListJobs(
    google::cloud::video::transcoder::v1::
        ListJobsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::video::transcoder::v1::Job>>();
}

StatusOr<google::cloud::video::transcoder::v1::Job>
TranscoderServiceConnection::GetJob(
    google::cloud::video::transcoder::v1::GetJobRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status TranscoderServiceConnection::DeleteJob(
    google::cloud::video::transcoder::v1::DeleteJobRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::video::transcoder::v1::JobTemplate>
TranscoderServiceConnection::CreateJobTemplate(
    google::cloud::video::transcoder::v1::CreateJobTemplateRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::video::transcoder::v1::JobTemplate>
TranscoderServiceConnection::ListJobTemplates(
    google::cloud::video::transcoder::v1::
        ListJobTemplatesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::video::transcoder::v1::JobTemplate>>();
}

StatusOr<google::cloud::video::transcoder::v1::JobTemplate>
TranscoderServiceConnection::GetJobTemplate(
    google::cloud::video::transcoder::v1::GetJobTemplateRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status TranscoderServiceConnection::DeleteJobTemplate(
    google::cloud::video::transcoder::v1::DeleteJobTemplateRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<TranscoderServiceConnection> MakeTranscoderServiceConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 TranscoderServicePolicyOptionList>(options,
                                                                    __func__);
  options = video_transcoder_v1_internal::TranscoderServiceDefaultOptions(
      std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = video_transcoder_v1_internal::CreateDefaultTranscoderServiceStub(
      std::move(auth), options);
  return video_transcoder_v1_internal::MakeTranscoderServiceTracingConnection(
      std::make_shared<
          video_transcoder_v1_internal::TranscoderServiceConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace video_transcoder_v1
}  // namespace cloud
}  // namespace google
