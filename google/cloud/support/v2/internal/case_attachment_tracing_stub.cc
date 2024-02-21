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
// source: google/cloud/support/v2/attachment_service.proto

#include "google/cloud/support/v2/internal/case_attachment_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <utility>

namespace google {
namespace cloud {
namespace support_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

CaseAttachmentServiceTracingStub::CaseAttachmentServiceTracingStub(
    std::shared_ptr<CaseAttachmentServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::support::v2::ListAttachmentsResponse>
CaseAttachmentServiceTracingStub::ListAttachments(
    grpc::ClientContext& context,
    google::cloud::support::v2::ListAttachmentsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.support.v2.CaseAttachmentService", "ListAttachments");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListAttachments(context, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<CaseAttachmentServiceStub> MakeCaseAttachmentServiceTracingStub(
    std::shared_ptr<CaseAttachmentServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<CaseAttachmentServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace support_v2_internal
}  // namespace cloud
}  // namespace google
