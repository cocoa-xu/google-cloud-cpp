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
// source: google/cloud/compute/accelerator_types/v1/accelerator_types.proto

#include "google/cloud/compute/accelerator_types/v1/internal/accelerator_types_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_accelerator_types_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

AcceleratorTypesTracingConnection::AcceleratorTypesTracingConnection(
    std::shared_ptr<compute_accelerator_types_v1::AcceleratorTypesConnection>
        child)
    : child_(std::move(child)) {}

StreamRange<std::pair<
    std::string, google::cloud::cpp::compute::v1::AcceleratorTypesScopedList>>
AcceleratorTypesTracingConnection::AggregatedListAcceleratorTypes(
    google::cloud::cpp::compute::accelerator_types::v1::
        AggregatedListAcceleratorTypesRequest request) {
  auto span = internal::MakeSpan(
      "compute_accelerator_types_v1::AcceleratorTypesConnection::"
      "AggregatedListAcceleratorTypes");
  internal::OTelScope scope(span);
  auto sr = child_->AggregatedListAcceleratorTypes(std::move(request));
  return internal::MakeTracedStreamRange<
      std::pair<std::string,
                google::cloud::cpp::compute::v1::AcceleratorTypesScopedList>>(
      std::move(span), std::move(sr));
}

StatusOr<google::cloud::cpp::compute::v1::AcceleratorType>
AcceleratorTypesTracingConnection::GetAcceleratorType(
    google::cloud::cpp::compute::accelerator_types::v1::
        GetAcceleratorTypeRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_accelerator_types_v1::AcceleratorTypesConnection::"
      "GetAcceleratorType");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetAcceleratorType(request));
}

StreamRange<google::cloud::cpp::compute::v1::AcceleratorType>
AcceleratorTypesTracingConnection::ListAcceleratorTypes(
    google::cloud::cpp::compute::accelerator_types::v1::
        ListAcceleratorTypesRequest request) {
  auto span = internal::MakeSpan(
      "compute_accelerator_types_v1::AcceleratorTypesConnection::"
      "ListAcceleratorTypes");
  internal::OTelScope scope(span);
  auto sr = child_->ListAcceleratorTypes(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::AcceleratorType>(std::move(span),
                                                        std::move(sr));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<compute_accelerator_types_v1::AcceleratorTypesConnection>
MakeAcceleratorTypesTracingConnection(
    std::shared_ptr<compute_accelerator_types_v1::AcceleratorTypesConnection>
        conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<AcceleratorTypesTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_accelerator_types_v1_internal
}  // namespace cloud
}  // namespace google
