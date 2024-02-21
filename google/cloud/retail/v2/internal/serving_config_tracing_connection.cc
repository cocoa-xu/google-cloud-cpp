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
// source: google/cloud/retail/v2/serving_config_service.proto

#include "google/cloud/retail/v2/internal/serving_config_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace retail_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ServingConfigServiceTracingConnection::ServingConfigServiceTracingConnection(
    std::shared_ptr<retail_v2::ServingConfigServiceConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::retail::v2::ServingConfig>
ServingConfigServiceTracingConnection::CreateServingConfig(
    google::cloud::retail::v2::CreateServingConfigRequest const& request) {
  auto span = internal::MakeSpan(
      "retail_v2::ServingConfigServiceConnection::CreateServingConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateServingConfig(request));
}

Status ServingConfigServiceTracingConnection::DeleteServingConfig(
    google::cloud::retail::v2::DeleteServingConfigRequest const& request) {
  auto span = internal::MakeSpan(
      "retail_v2::ServingConfigServiceConnection::DeleteServingConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteServingConfig(request));
}

StatusOr<google::cloud::retail::v2::ServingConfig>
ServingConfigServiceTracingConnection::UpdateServingConfig(
    google::cloud::retail::v2::UpdateServingConfigRequest const& request) {
  auto span = internal::MakeSpan(
      "retail_v2::ServingConfigServiceConnection::UpdateServingConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateServingConfig(request));
}

StatusOr<google::cloud::retail::v2::ServingConfig>
ServingConfigServiceTracingConnection::GetServingConfig(
    google::cloud::retail::v2::GetServingConfigRequest const& request) {
  auto span = internal::MakeSpan(
      "retail_v2::ServingConfigServiceConnection::GetServingConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetServingConfig(request));
}

StreamRange<google::cloud::retail::v2::ServingConfig>
ServingConfigServiceTracingConnection::ListServingConfigs(
    google::cloud::retail::v2::ListServingConfigsRequest request) {
  auto span = internal::MakeSpan(
      "retail_v2::ServingConfigServiceConnection::ListServingConfigs");
  internal::OTelScope scope(span);
  auto sr = child_->ListServingConfigs(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::retail::v2::ServingConfig>(std::move(span), std::move(sr));
}

StatusOr<google::cloud::retail::v2::ServingConfig>
ServingConfigServiceTracingConnection::AddControl(
    google::cloud::retail::v2::AddControlRequest const& request) {
  auto span = internal::MakeSpan(
      "retail_v2::ServingConfigServiceConnection::AddControl");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->AddControl(request));
}

StatusOr<google::cloud::retail::v2::ServingConfig>
ServingConfigServiceTracingConnection::RemoveControl(
    google::cloud::retail::v2::RemoveControlRequest const& request) {
  auto span = internal::MakeSpan(
      "retail_v2::ServingConfigServiceConnection::RemoveControl");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->RemoveControl(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<retail_v2::ServingConfigServiceConnection>
MakeServingConfigServiceTracingConnection(
    std::shared_ptr<retail_v2::ServingConfigServiceConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<ServingConfigServiceTracingConnection>(
        std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_v2_internal
}  // namespace cloud
}  // namespace google
