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
// source: google/cloud/optimization/v1/fleet_routing.proto

#include "google/cloud/optimization/v1/internal/fleet_routing_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <utility>

namespace google {
namespace cloud {
namespace optimization_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

FleetRoutingTracingStub::FleetRoutingTracingStub(
    std::shared_ptr<FleetRoutingStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::optimization::v1::OptimizeToursResponse>
FleetRoutingTracingStub::OptimizeTours(
    grpc::ClientContext& context,
    google::cloud::optimization::v1::OptimizeToursRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.optimization.v1.FleetRouting", "OptimizeTours");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->OptimizeTours(context, request));
}

future<StatusOr<google::longrunning::Operation>>
FleetRoutingTracingStub::AsyncBatchOptimizeTours(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::optimization::v1::BatchOptimizeToursRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.optimization.v1.FleetRouting", "BatchOptimizeTours");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncBatchOptimizeTours(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
FleetRoutingTracingStub::AsyncGetOperation(
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

future<Status> FleetRoutingTracingStub::AsyncCancelOperation(
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

std::shared_ptr<FleetRoutingStub> MakeFleetRoutingTracingStub(
    std::shared_ptr<FleetRoutingStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<FleetRoutingTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace optimization_v1_internal
}  // namespace cloud
}  // namespace google
