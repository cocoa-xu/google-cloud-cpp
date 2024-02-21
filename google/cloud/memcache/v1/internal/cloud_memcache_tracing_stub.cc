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
// source: google/cloud/memcache/v1/cloud_memcache.proto

#include "google/cloud/memcache/v1/internal/cloud_memcache_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <utility>

namespace google {
namespace cloud {
namespace memcache_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

CloudMemcacheTracingStub::CloudMemcacheTracingStub(
    std::shared_ptr<CloudMemcacheStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::memcache::v1::ListInstancesResponse>
CloudMemcacheTracingStub::ListInstances(
    grpc::ClientContext& context,
    google::cloud::memcache::v1::ListInstancesRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.memcache.v1.CloudMemcache",
                                     "ListInstances");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListInstances(context, request));
}

StatusOr<google::cloud::memcache::v1::Instance>
CloudMemcacheTracingStub::GetInstance(
    grpc::ClientContext& context,
    google::cloud::memcache::v1::GetInstanceRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.memcache.v1.CloudMemcache",
                                     "GetInstance");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetInstance(context, request));
}

future<StatusOr<google::longrunning::Operation>>
CloudMemcacheTracingStub::AsyncCreateInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::memcache::v1::CreateInstanceRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.memcache.v1.CloudMemcache",
                                     "CreateInstance");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateInstance(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
CloudMemcacheTracingStub::AsyncUpdateInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::memcache::v1::UpdateInstanceRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.memcache.v1.CloudMemcache",
                                     "UpdateInstance");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateInstance(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
CloudMemcacheTracingStub::AsyncUpdateParameters(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::memcache::v1::UpdateParametersRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.memcache.v1.CloudMemcache",
                                     "UpdateParameters");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateParameters(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
CloudMemcacheTracingStub::AsyncDeleteInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::memcache::v1::DeleteInstanceRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.memcache.v1.CloudMemcache",
                                     "DeleteInstance");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteInstance(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
CloudMemcacheTracingStub::AsyncApplyParameters(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::memcache::v1::ApplyParametersRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.memcache.v1.CloudMemcache",
                                     "ApplyParameters");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncApplyParameters(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
CloudMemcacheTracingStub::AsyncRescheduleMaintenance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::memcache::v1::RescheduleMaintenanceRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.memcache.v1.CloudMemcache",
                                     "RescheduleMaintenance");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncRescheduleMaintenance(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
CloudMemcacheTracingStub::AsyncGetOperation(
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

future<Status> CloudMemcacheTracingStub::AsyncCancelOperation(
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

std::shared_ptr<CloudMemcacheStub> MakeCloudMemcacheTracingStub(
    std::shared_ptr<CloudMemcacheStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<CloudMemcacheTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace memcache_v1_internal
}  // namespace cloud
}  // namespace google
