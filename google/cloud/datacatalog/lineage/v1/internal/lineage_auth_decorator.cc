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
// source: google/cloud/datacatalog/lineage/v1/lineage.proto

#include "google/cloud/datacatalog/lineage/v1/internal/lineage_auth_decorator.h"
#include <google/cloud/datacatalog/lineage/v1/lineage.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace datacatalog_lineage_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

LineageAuth::LineageAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<LineageStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<
    google::cloud::datacatalog::lineage::v1::ProcessOpenLineageRunEventResponse>
LineageAuth::ProcessOpenLineageRunEvent(
    grpc::ClientContext& context,
    google::cloud::datacatalog::lineage::v1::
        ProcessOpenLineageRunEventRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ProcessOpenLineageRunEvent(context, request);
}

StatusOr<google::cloud::datacatalog::lineage::v1::Process>
LineageAuth::CreateProcess(
    grpc::ClientContext& context,
    google::cloud::datacatalog::lineage::v1::CreateProcessRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateProcess(context, request);
}

StatusOr<google::cloud::datacatalog::lineage::v1::Process>
LineageAuth::UpdateProcess(
    grpc::ClientContext& context,
    google::cloud::datacatalog::lineage::v1::UpdateProcessRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateProcess(context, request);
}

StatusOr<google::cloud::datacatalog::lineage::v1::Process>
LineageAuth::GetProcess(
    grpc::ClientContext& context,
    google::cloud::datacatalog::lineage::v1::GetProcessRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetProcess(context, request);
}

StatusOr<google::cloud::datacatalog::lineage::v1::ListProcessesResponse>
LineageAuth::ListProcesses(
    grpc::ClientContext& context,
    google::cloud::datacatalog::lineage::v1::ListProcessesRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListProcesses(context, request);
}

future<StatusOr<google::longrunning::Operation>>
LineageAuth::AsyncDeleteProcess(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::datacatalog::lineage::v1::DeleteProcessRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteProcess(cq, *std::move(context), options,
                                         request);
      });
}

StatusOr<google::cloud::datacatalog::lineage::v1::Run> LineageAuth::CreateRun(
    grpc::ClientContext& context,
    google::cloud::datacatalog::lineage::v1::CreateRunRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateRun(context, request);
}

StatusOr<google::cloud::datacatalog::lineage::v1::Run> LineageAuth::UpdateRun(
    grpc::ClientContext& context,
    google::cloud::datacatalog::lineage::v1::UpdateRunRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateRun(context, request);
}

StatusOr<google::cloud::datacatalog::lineage::v1::Run> LineageAuth::GetRun(
    grpc::ClientContext& context,
    google::cloud::datacatalog::lineage::v1::GetRunRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetRun(context, request);
}

StatusOr<google::cloud::datacatalog::lineage::v1::ListRunsResponse>
LineageAuth::ListRuns(
    grpc::ClientContext& context,
    google::cloud::datacatalog::lineage::v1::ListRunsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListRuns(context, request);
}

future<StatusOr<google::longrunning::Operation>> LineageAuth::AsyncDeleteRun(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::datacatalog::lineage::v1::DeleteRunRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteRun(cq, *std::move(context), options, request);
      });
}

StatusOr<google::cloud::datacatalog::lineage::v1::LineageEvent>
LineageAuth::CreateLineageEvent(
    grpc::ClientContext& context,
    google::cloud::datacatalog::lineage::v1::CreateLineageEventRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateLineageEvent(context, request);
}

StatusOr<google::cloud::datacatalog::lineage::v1::LineageEvent>
LineageAuth::GetLineageEvent(
    grpc::ClientContext& context,
    google::cloud::datacatalog::lineage::v1::GetLineageEventRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetLineageEvent(context, request);
}

StatusOr<google::cloud::datacatalog::lineage::v1::ListLineageEventsResponse>
LineageAuth::ListLineageEvents(
    grpc::ClientContext& context,
    google::cloud::datacatalog::lineage::v1::ListLineageEventsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListLineageEvents(context, request);
}

Status LineageAuth::DeleteLineageEvent(
    grpc::ClientContext& context,
    google::cloud::datacatalog::lineage::v1::DeleteLineageEventRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteLineageEvent(context, request);
}

StatusOr<google::cloud::datacatalog::lineage::v1::SearchLinksResponse>
LineageAuth::SearchLinks(
    grpc::ClientContext& context,
    google::cloud::datacatalog::lineage::v1::SearchLinksRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->SearchLinks(context, request);
}

StatusOr<
    google::cloud::datacatalog::lineage::v1::BatchSearchLinkProcessesResponse>
LineageAuth::BatchSearchLinkProcesses(
    grpc::ClientContext& context,
    google::cloud::datacatalog::lineage::v1::
        BatchSearchLinkProcessesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->BatchSearchLinkProcesses(context, request);
}

future<StatusOr<google::longrunning::Operation>> LineageAuth::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncGetOperation(cq, *std::move(context), options,
                                        request);
      });
}

future<Status> LineageAuth::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) return make_ready_future(std::move(context).status());
        return child->AsyncCancelOperation(cq, *std::move(context), options,
                                           request);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datacatalog_lineage_v1_internal
}  // namespace cloud
}  // namespace google
