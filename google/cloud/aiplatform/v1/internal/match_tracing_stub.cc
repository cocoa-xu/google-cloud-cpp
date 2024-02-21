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
// source: google/cloud/aiplatform/v1/match_service.proto

#include "google/cloud/aiplatform/v1/internal/match_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <utility>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

MatchServiceTracingStub::MatchServiceTracingStub(
    std::shared_ptr<MatchServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::aiplatform::v1::FindNeighborsResponse>
MatchServiceTracingStub::FindNeighbors(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::FindNeighborsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.MatchService",
                                     "FindNeighbors");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->FindNeighbors(context, request));
}

StatusOr<google::cloud::aiplatform::v1::ReadIndexDatapointsResponse>
MatchServiceTracingStub::ReadIndexDatapoints(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::ReadIndexDatapointsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.MatchService",
                                     "ReadIndexDatapoints");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ReadIndexDatapoints(context, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<MatchServiceStub> MakeMatchServiceTracingStub(
    std::shared_ptr<MatchServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<MatchServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
