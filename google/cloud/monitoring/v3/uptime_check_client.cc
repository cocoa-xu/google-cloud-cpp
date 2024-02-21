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
// source: google/monitoring/v3/uptime_service.proto

#include "google/cloud/monitoring/v3/uptime_check_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace monitoring_v3 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

UptimeCheckServiceClient::UptimeCheckServiceClient(
    std::shared_ptr<UptimeCheckServiceConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
UptimeCheckServiceClient::~UptimeCheckServiceClient() = default;

StreamRange<google::monitoring::v3::UptimeCheckConfig>
UptimeCheckServiceClient::ListUptimeCheckConfigs(std::string const& parent,
                                                 Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::monitoring::v3::ListUptimeCheckConfigsRequest request;
  request.set_parent(parent);
  return connection_->ListUptimeCheckConfigs(request);
}

StreamRange<google::monitoring::v3::UptimeCheckConfig>
UptimeCheckServiceClient::ListUptimeCheckConfigs(
    google::monitoring::v3::ListUptimeCheckConfigsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListUptimeCheckConfigs(std::move(request));
}

StatusOr<google::monitoring::v3::UptimeCheckConfig>
UptimeCheckServiceClient::GetUptimeCheckConfig(std::string const& name,
                                               Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::monitoring::v3::GetUptimeCheckConfigRequest request;
  request.set_name(name);
  return connection_->GetUptimeCheckConfig(request);
}

StatusOr<google::monitoring::v3::UptimeCheckConfig>
UptimeCheckServiceClient::GetUptimeCheckConfig(
    google::monitoring::v3::GetUptimeCheckConfigRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetUptimeCheckConfig(request);
}

StatusOr<google::monitoring::v3::UptimeCheckConfig>
UptimeCheckServiceClient::CreateUptimeCheckConfig(
    std::string const& parent,
    google::monitoring::v3::UptimeCheckConfig const& uptime_check_config,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::monitoring::v3::CreateUptimeCheckConfigRequest request;
  request.set_parent(parent);
  *request.mutable_uptime_check_config() = uptime_check_config;
  return connection_->CreateUptimeCheckConfig(request);
}

StatusOr<google::monitoring::v3::UptimeCheckConfig>
UptimeCheckServiceClient::CreateUptimeCheckConfig(
    google::monitoring::v3::CreateUptimeCheckConfigRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateUptimeCheckConfig(request);
}

StatusOr<google::monitoring::v3::UptimeCheckConfig>
UptimeCheckServiceClient::UpdateUptimeCheckConfig(
    google::monitoring::v3::UptimeCheckConfig const& uptime_check_config,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::monitoring::v3::UpdateUptimeCheckConfigRequest request;
  *request.mutable_uptime_check_config() = uptime_check_config;
  return connection_->UpdateUptimeCheckConfig(request);
}

StatusOr<google::monitoring::v3::UptimeCheckConfig>
UptimeCheckServiceClient::UpdateUptimeCheckConfig(
    google::monitoring::v3::UpdateUptimeCheckConfigRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateUptimeCheckConfig(request);
}

Status UptimeCheckServiceClient::DeleteUptimeCheckConfig(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::monitoring::v3::DeleteUptimeCheckConfigRequest request;
  request.set_name(name);
  return connection_->DeleteUptimeCheckConfig(request);
}

Status UptimeCheckServiceClient::DeleteUptimeCheckConfig(
    google::monitoring::v3::DeleteUptimeCheckConfigRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteUptimeCheckConfig(request);
}

StreamRange<google::monitoring::v3::UptimeCheckIp>
UptimeCheckServiceClient::ListUptimeCheckIps(
    google::monitoring::v3::ListUptimeCheckIpsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListUptimeCheckIps(std::move(request));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_v3
}  // namespace cloud
}  // namespace google
