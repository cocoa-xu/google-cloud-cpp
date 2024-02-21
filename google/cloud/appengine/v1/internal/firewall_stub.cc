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
// source: google/appengine/v1/appengine.proto

#include "google/cloud/appengine/v1/internal/firewall_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/appengine/v1/appengine.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace appengine_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

FirewallStub::~FirewallStub() = default;

StatusOr<google::appengine::v1::ListIngressRulesResponse>
DefaultFirewallStub::ListIngressRules(
    grpc::ClientContext& context,
    google::appengine::v1::ListIngressRulesRequest const& request) {
  google::appengine::v1::ListIngressRulesResponse response;
  auto status = grpc_stub_->ListIngressRules(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::appengine::v1::BatchUpdateIngressRulesResponse>
DefaultFirewallStub::BatchUpdateIngressRules(
    grpc::ClientContext& context,
    google::appengine::v1::BatchUpdateIngressRulesRequest const& request) {
  google::appengine::v1::BatchUpdateIngressRulesResponse response;
  auto status =
      grpc_stub_->BatchUpdateIngressRules(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::appengine::v1::FirewallRule>
DefaultFirewallStub::CreateIngressRule(
    grpc::ClientContext& context,
    google::appengine::v1::CreateIngressRuleRequest const& request) {
  google::appengine::v1::FirewallRule response;
  auto status = grpc_stub_->CreateIngressRule(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::appengine::v1::FirewallRule>
DefaultFirewallStub::GetIngressRule(
    grpc::ClientContext& context,
    google::appengine::v1::GetIngressRuleRequest const& request) {
  google::appengine::v1::FirewallRule response;
  auto status = grpc_stub_->GetIngressRule(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::appengine::v1::FirewallRule>
DefaultFirewallStub::UpdateIngressRule(
    grpc::ClientContext& context,
    google::appengine::v1::UpdateIngressRuleRequest const& request) {
  google::appengine::v1::FirewallRule response;
  auto status = grpc_stub_->UpdateIngressRule(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultFirewallStub::DeleteIngressRule(
    grpc::ClientContext& context,
    google::appengine::v1::DeleteIngressRuleRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteIngressRule(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine_v1_internal
}  // namespace cloud
}  // namespace google
