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
// source: google/cloud/dialogflow/cx/v3/webhook.proto

#include "google/cloud/dialogflow_cx/internal/webhooks_auth_decorator.h"
#include <google/cloud/dialogflow/cx/v3/webhook.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

WebhooksAuth::WebhooksAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<WebhooksStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::dialogflow::cx::v3::ListWebhooksResponse>
WebhooksAuth::ListWebhooks(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::ListWebhooksRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListWebhooks(context, request);
}

StatusOr<google::cloud::dialogflow::cx::v3::Webhook> WebhooksAuth::GetWebhook(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::GetWebhookRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetWebhook(context, request);
}

StatusOr<google::cloud::dialogflow::cx::v3::Webhook>
WebhooksAuth::CreateWebhook(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::CreateWebhookRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateWebhook(context, request);
}

StatusOr<google::cloud::dialogflow::cx::v3::Webhook>
WebhooksAuth::UpdateWebhook(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::UpdateWebhookRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateWebhook(context, request);
}

Status WebhooksAuth::DeleteWebhook(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::DeleteWebhookRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteWebhook(context, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google
