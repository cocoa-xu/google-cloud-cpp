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
// source: google/cloud/compute/snapshot_settings/v1/snapshot_settings.proto

#include "google/cloud/compute/snapshot_settings/v1/internal/snapshot_settings_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_snapshot_settings_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

SnapshotSettingsTracingConnection::SnapshotSettingsTracingConnection(
    std::shared_ptr<compute_snapshot_settings_v1::SnapshotSettingsConnection>
        child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::cpp::compute::v1::SnapshotSettings>
SnapshotSettingsTracingConnection::GetSnapshotSettings(
    google::cloud::cpp::compute::snapshot_settings::v1::
        GetSnapshotSettingsRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_snapshot_settings_v1::SnapshotSettingsConnection::"
      "GetSnapshotSettings");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetSnapshotSettings(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SnapshotSettingsTracingConnection::PatchSnapshotSettings(
    google::cloud::cpp::compute::snapshot_settings::v1::
        PatchSnapshotSettingsRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_snapshot_settings_v1::SnapshotSettingsConnection::"
      "PatchSnapshotSettings");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->PatchSnapshotSettings(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<compute_snapshot_settings_v1::SnapshotSettingsConnection>
MakeSnapshotSettingsTracingConnection(
    std::shared_ptr<compute_snapshot_settings_v1::SnapshotSettingsConnection>
        conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<SnapshotSettingsTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_snapshot_settings_v1_internal
}  // namespace cloud
}  // namespace google
