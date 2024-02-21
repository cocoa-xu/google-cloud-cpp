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
// source: google/cloud/video/stitcher/v1/video_stitcher_service.proto

#include "google/cloud/video/stitcher/v1/internal/video_stitcher_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <utility>

namespace google {
namespace cloud {
namespace video_stitcher_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

VideoStitcherServiceTracingStub::VideoStitcherServiceTracingStub(
    std::shared_ptr<VideoStitcherServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

future<StatusOr<google::longrunning::Operation>>
VideoStitcherServiceTracingStub::AsyncCreateCdnKey(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::video::stitcher::v1::CreateCdnKeyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.stitcher.v1.VideoStitcherService", "CreateCdnKey");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateCdnKey(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::video::stitcher::v1::ListCdnKeysResponse>
VideoStitcherServiceTracingStub::ListCdnKeys(
    grpc::ClientContext& context,
    google::cloud::video::stitcher::v1::ListCdnKeysRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.stitcher.v1.VideoStitcherService", "ListCdnKeys");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListCdnKeys(context, request));
}

StatusOr<google::cloud::video::stitcher::v1::CdnKey>
VideoStitcherServiceTracingStub::GetCdnKey(
    grpc::ClientContext& context,
    google::cloud::video::stitcher::v1::GetCdnKeyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.stitcher.v1.VideoStitcherService", "GetCdnKey");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->GetCdnKey(context, request));
}

future<StatusOr<google::longrunning::Operation>>
VideoStitcherServiceTracingStub::AsyncDeleteCdnKey(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::video::stitcher::v1::DeleteCdnKeyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.stitcher.v1.VideoStitcherService", "DeleteCdnKey");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteCdnKey(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
VideoStitcherServiceTracingStub::AsyncUpdateCdnKey(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::video::stitcher::v1::UpdateCdnKeyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.stitcher.v1.VideoStitcherService", "UpdateCdnKey");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateCdnKey(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::video::stitcher::v1::VodSession>
VideoStitcherServiceTracingStub::CreateVodSession(
    grpc::ClientContext& context,
    google::cloud::video::stitcher::v1::CreateVodSessionRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.stitcher.v1.VideoStitcherService",
      "CreateVodSession");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateVodSession(context, request));
}

StatusOr<google::cloud::video::stitcher::v1::VodSession>
VideoStitcherServiceTracingStub::GetVodSession(
    grpc::ClientContext& context,
    google::cloud::video::stitcher::v1::GetVodSessionRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.stitcher.v1.VideoStitcherService", "GetVodSession");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetVodSession(context, request));
}

StatusOr<google::cloud::video::stitcher::v1::ListVodStitchDetailsResponse>
VideoStitcherServiceTracingStub::ListVodStitchDetails(
    grpc::ClientContext& context,
    google::cloud::video::stitcher::v1::ListVodStitchDetailsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.stitcher.v1.VideoStitcherService",
      "ListVodStitchDetails");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListVodStitchDetails(context, request));
}

StatusOr<google::cloud::video::stitcher::v1::VodStitchDetail>
VideoStitcherServiceTracingStub::GetVodStitchDetail(
    grpc::ClientContext& context,
    google::cloud::video::stitcher::v1::GetVodStitchDetailRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.stitcher.v1.VideoStitcherService",
      "GetVodStitchDetail");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetVodStitchDetail(context, request));
}

StatusOr<google::cloud::video::stitcher::v1::ListVodAdTagDetailsResponse>
VideoStitcherServiceTracingStub::ListVodAdTagDetails(
    grpc::ClientContext& context,
    google::cloud::video::stitcher::v1::ListVodAdTagDetailsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.stitcher.v1.VideoStitcherService",
      "ListVodAdTagDetails");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListVodAdTagDetails(context, request));
}

StatusOr<google::cloud::video::stitcher::v1::VodAdTagDetail>
VideoStitcherServiceTracingStub::GetVodAdTagDetail(
    grpc::ClientContext& context,
    google::cloud::video::stitcher::v1::GetVodAdTagDetailRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.stitcher.v1.VideoStitcherService",
      "GetVodAdTagDetail");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetVodAdTagDetail(context, request));
}

StatusOr<google::cloud::video::stitcher::v1::ListLiveAdTagDetailsResponse>
VideoStitcherServiceTracingStub::ListLiveAdTagDetails(
    grpc::ClientContext& context,
    google::cloud::video::stitcher::v1::ListLiveAdTagDetailsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.stitcher.v1.VideoStitcherService",
      "ListLiveAdTagDetails");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListLiveAdTagDetails(context, request));
}

StatusOr<google::cloud::video::stitcher::v1::LiveAdTagDetail>
VideoStitcherServiceTracingStub::GetLiveAdTagDetail(
    grpc::ClientContext& context,
    google::cloud::video::stitcher::v1::GetLiveAdTagDetailRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.stitcher.v1.VideoStitcherService",
      "GetLiveAdTagDetail");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetLiveAdTagDetail(context, request));
}

future<StatusOr<google::longrunning::Operation>>
VideoStitcherServiceTracingStub::AsyncCreateSlate(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::video::stitcher::v1::CreateSlateRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.stitcher.v1.VideoStitcherService", "CreateSlate");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateSlate(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::video::stitcher::v1::ListSlatesResponse>
VideoStitcherServiceTracingStub::ListSlates(
    grpc::ClientContext& context,
    google::cloud::video::stitcher::v1::ListSlatesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.stitcher.v1.VideoStitcherService", "ListSlates");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListSlates(context, request));
}

StatusOr<google::cloud::video::stitcher::v1::Slate>
VideoStitcherServiceTracingStub::GetSlate(
    grpc::ClientContext& context,
    google::cloud::video::stitcher::v1::GetSlateRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.stitcher.v1.VideoStitcherService", "GetSlate");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->GetSlate(context, request));
}

future<StatusOr<google::longrunning::Operation>>
VideoStitcherServiceTracingStub::AsyncUpdateSlate(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::video::stitcher::v1::UpdateSlateRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.stitcher.v1.VideoStitcherService", "UpdateSlate");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateSlate(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
VideoStitcherServiceTracingStub::AsyncDeleteSlate(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::video::stitcher::v1::DeleteSlateRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.stitcher.v1.VideoStitcherService", "DeleteSlate");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteSlate(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::video::stitcher::v1::LiveSession>
VideoStitcherServiceTracingStub::CreateLiveSession(
    grpc::ClientContext& context,
    google::cloud::video::stitcher::v1::CreateLiveSessionRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.stitcher.v1.VideoStitcherService",
      "CreateLiveSession");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateLiveSession(context, request));
}

StatusOr<google::cloud::video::stitcher::v1::LiveSession>
VideoStitcherServiceTracingStub::GetLiveSession(
    grpc::ClientContext& context,
    google::cloud::video::stitcher::v1::GetLiveSessionRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.stitcher.v1.VideoStitcherService", "GetLiveSession");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetLiveSession(context, request));
}

future<StatusOr<google::longrunning::Operation>>
VideoStitcherServiceTracingStub::AsyncCreateLiveConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::video::stitcher::v1::CreateLiveConfigRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.stitcher.v1.VideoStitcherService",
      "CreateLiveConfig");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateLiveConfig(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::video::stitcher::v1::ListLiveConfigsResponse>
VideoStitcherServiceTracingStub::ListLiveConfigs(
    grpc::ClientContext& context,
    google::cloud::video::stitcher::v1::ListLiveConfigsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.stitcher.v1.VideoStitcherService", "ListLiveConfigs");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListLiveConfigs(context, request));
}

StatusOr<google::cloud::video::stitcher::v1::LiveConfig>
VideoStitcherServiceTracingStub::GetLiveConfig(
    grpc::ClientContext& context,
    google::cloud::video::stitcher::v1::GetLiveConfigRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.stitcher.v1.VideoStitcherService", "GetLiveConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetLiveConfig(context, request));
}

future<StatusOr<google::longrunning::Operation>>
VideoStitcherServiceTracingStub::AsyncDeleteLiveConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::video::stitcher::v1::DeleteLiveConfigRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.stitcher.v1.VideoStitcherService",
      "DeleteLiveConfig");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteLiveConfig(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
VideoStitcherServiceTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.longrunning.Operations", "GetOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncGetOperation(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<Status> VideoStitcherServiceTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.longrunning.Operations",
                                     "CancelOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCancelOperation(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<VideoStitcherServiceStub> MakeVideoStitcherServiceTracingStub(
    std::shared_ptr<VideoStitcherServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<VideoStitcherServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace video_stitcher_v1_internal
}  // namespace cloud
}  // namespace google
