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
// source: google/cloud/billing/budgets/v1/budget_service.proto

#include "google/cloud/billing/budgets/v1/internal/budget_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/billing/budgets/v1/budget_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace billing_budgets_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

BudgetServiceStub::~BudgetServiceStub() = default;

StatusOr<google::cloud::billing::budgets::v1::Budget>
DefaultBudgetServiceStub::CreateBudget(
    grpc::ClientContext& context,
    google::cloud::billing::budgets::v1::CreateBudgetRequest const& request) {
  google::cloud::billing::budgets::v1::Budget response;
  auto status = grpc_stub_->CreateBudget(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::billing::budgets::v1::Budget>
DefaultBudgetServiceStub::UpdateBudget(
    grpc::ClientContext& context,
    google::cloud::billing::budgets::v1::UpdateBudgetRequest const& request) {
  google::cloud::billing::budgets::v1::Budget response;
  auto status = grpc_stub_->UpdateBudget(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::billing::budgets::v1::Budget>
DefaultBudgetServiceStub::GetBudget(
    grpc::ClientContext& context,
    google::cloud::billing::budgets::v1::GetBudgetRequest const& request) {
  google::cloud::billing::budgets::v1::Budget response;
  auto status = grpc_stub_->GetBudget(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::billing::budgets::v1::ListBudgetsResponse>
DefaultBudgetServiceStub::ListBudgets(
    grpc::ClientContext& context,
    google::cloud::billing::budgets::v1::ListBudgetsRequest const& request) {
  google::cloud::billing::budgets::v1::ListBudgetsResponse response;
  auto status = grpc_stub_->ListBudgets(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultBudgetServiceStub::DeleteBudget(
    grpc::ClientContext& context,
    google::cloud::billing::budgets::v1::DeleteBudgetRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteBudget(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace billing_budgets_v1_internal
}  // namespace cloud
}  // namespace google
