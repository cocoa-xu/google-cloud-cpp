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
// source: google/cloud/dialogflow/v2/version.proto

#include "google/cloud/dialogflow_es/internal/versions_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <utility>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

VersionsTracingStub::VersionsTracingStub(std::shared_ptr<VersionsStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::dialogflow::v2::ListVersionsResponse>
VersionsTracingStub::ListVersions(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::ListVersionsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.v2.Versions",
                                     "ListVersions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListVersions(context, request));
}

StatusOr<google::cloud::dialogflow::v2::Version>
VersionsTracingStub::GetVersion(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::GetVersionRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.v2.Versions",
                                     "GetVersion");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetVersion(context, request));
}

StatusOr<google::cloud::dialogflow::v2::Version>
VersionsTracingStub::CreateVersion(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::CreateVersionRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.v2.Versions",
                                     "CreateVersion");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateVersion(context, request));
}

StatusOr<google::cloud::dialogflow::v2::Version>
VersionsTracingStub::UpdateVersion(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::UpdateVersionRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.v2.Versions",
                                     "UpdateVersion");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateVersion(context, request));
}

Status VersionsTracingStub::DeleteVersion(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::DeleteVersionRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.v2.Versions",
                                     "DeleteVersion");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteVersion(context, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<VersionsStub> MakeVersionsTracingStub(
    std::shared_ptr<VersionsStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<VersionsTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
