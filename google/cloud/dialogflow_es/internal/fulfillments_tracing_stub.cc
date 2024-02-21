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
// source: google/cloud/dialogflow/v2/fulfillment.proto

#include "google/cloud/dialogflow_es/internal/fulfillments_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <utility>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

FulfillmentsTracingStub::FulfillmentsTracingStub(
    std::shared_ptr<FulfillmentsStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::dialogflow::v2::Fulfillment>
FulfillmentsTracingStub::GetFulfillment(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::GetFulfillmentRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.v2.Fulfillments",
                                     "GetFulfillment");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetFulfillment(context, request));
}

StatusOr<google::cloud::dialogflow::v2::Fulfillment>
FulfillmentsTracingStub::UpdateFulfillment(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::UpdateFulfillmentRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.v2.Fulfillments",
                                     "UpdateFulfillment");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateFulfillment(context, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<FulfillmentsStub> MakeFulfillmentsTracingStub(
    std::shared_ptr<FulfillmentsStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<FulfillmentsTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
