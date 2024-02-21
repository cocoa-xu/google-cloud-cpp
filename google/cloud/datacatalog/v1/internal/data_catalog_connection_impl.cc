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
// source: google/cloud/datacatalog/v1/datacatalog.proto

#include "google/cloud/datacatalog/v1/internal/data_catalog_connection_impl.h"
#include "google/cloud/datacatalog/v1/internal/data_catalog_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace datacatalog_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<datacatalog_v1::DataCatalogRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<datacatalog_v1::DataCatalogRetryPolicyOption>()->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<datacatalog_v1::DataCatalogBackoffPolicyOption>()->clone();
}

std::unique_ptr<datacatalog_v1::DataCatalogConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<datacatalog_v1::DataCatalogConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<datacatalog_v1::DataCatalogPollingPolicyOption>()->clone();
}

}  // namespace

DataCatalogConnectionImpl::DataCatalogConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<datacatalog_v1_internal::DataCatalogStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      DataCatalogConnection::options())) {}

StreamRange<google::cloud::datacatalog::v1::SearchCatalogResult>
DataCatalogConnectionImpl::SearchCatalog(
    google::cloud::datacatalog::v1::SearchCatalogRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->SearchCatalog(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::datacatalog::v1::SearchCatalogResult>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<datacatalog_v1::DataCatalogRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::datacatalog::v1::SearchCatalogRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::datacatalog::v1::SearchCatalogRequest const&
                       request) {
              return stub->SearchCatalog(context, request);
            },
            r, function_name);
      },
      [](google::cloud::datacatalog::v1::SearchCatalogResponse r) {
        std::vector<google::cloud::datacatalog::v1::SearchCatalogResult> result(
            r.results().size());
        auto& messages = *r.mutable_results();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::datacatalog::v1::EntryGroup>
DataCatalogConnectionImpl::CreateEntryGroup(
    google::cloud::datacatalog::v1::CreateEntryGroupRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateEntryGroup(request),
      [this](grpc::ClientContext& context,
             google::cloud::datacatalog::v1::CreateEntryGroupRequest const&
                 request) { return stub_->CreateEntryGroup(context, request); },
      request, __func__);
}

StatusOr<google::cloud::datacatalog::v1::EntryGroup>
DataCatalogConnectionImpl::GetEntryGroup(
    google::cloud::datacatalog::v1::GetEntryGroupRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetEntryGroup(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::datacatalog::v1::GetEntryGroupRequest const& request) {
        return stub_->GetEntryGroup(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::datacatalog::v1::EntryGroup>
DataCatalogConnectionImpl::UpdateEntryGroup(
    google::cloud::datacatalog::v1::UpdateEntryGroupRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateEntryGroup(request),
      [this](grpc::ClientContext& context,
             google::cloud::datacatalog::v1::UpdateEntryGroupRequest const&
                 request) { return stub_->UpdateEntryGroup(context, request); },
      request, __func__);
}

Status DataCatalogConnectionImpl::DeleteEntryGroup(
    google::cloud::datacatalog::v1::DeleteEntryGroupRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteEntryGroup(request),
      [this](grpc::ClientContext& context,
             google::cloud::datacatalog::v1::DeleteEntryGroupRequest const&
                 request) { return stub_->DeleteEntryGroup(context, request); },
      request, __func__);
}

StreamRange<google::cloud::datacatalog::v1::EntryGroup>
DataCatalogConnectionImpl::ListEntryGroups(
    google::cloud::datacatalog::v1::ListEntryGroupsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListEntryGroups(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::datacatalog::v1::EntryGroup>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<datacatalog_v1::DataCatalogRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::datacatalog::v1::ListEntryGroupsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::datacatalog::v1::ListEntryGroupsRequest const&
                       request) {
              return stub->ListEntryGroups(context, request);
            },
            r, function_name);
      },
      [](google::cloud::datacatalog::v1::ListEntryGroupsResponse r) {
        std::vector<google::cloud::datacatalog::v1::EntryGroup> result(
            r.entry_groups().size());
        auto& messages = *r.mutable_entry_groups();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::datacatalog::v1::Entry>
DataCatalogConnectionImpl::CreateEntry(
    google::cloud::datacatalog::v1::CreateEntryRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateEntry(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::datacatalog::v1::CreateEntryRequest const& request) {
        return stub_->CreateEntry(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::datacatalog::v1::Entry>
DataCatalogConnectionImpl::UpdateEntry(
    google::cloud::datacatalog::v1::UpdateEntryRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateEntry(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::datacatalog::v1::UpdateEntryRequest const& request) {
        return stub_->UpdateEntry(context, request);
      },
      request, __func__);
}

Status DataCatalogConnectionImpl::DeleteEntry(
    google::cloud::datacatalog::v1::DeleteEntryRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteEntry(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::datacatalog::v1::DeleteEntryRequest const& request) {
        return stub_->DeleteEntry(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::datacatalog::v1::Entry>
DataCatalogConnectionImpl::GetEntry(
    google::cloud::datacatalog::v1::GetEntryRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetEntry(request),
      [this](grpc::ClientContext& context,
             google::cloud::datacatalog::v1::GetEntryRequest const& request) {
        return stub_->GetEntry(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::datacatalog::v1::Entry>
DataCatalogConnectionImpl::LookupEntry(
    google::cloud::datacatalog::v1::LookupEntryRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->LookupEntry(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::datacatalog::v1::LookupEntryRequest const& request) {
        return stub_->LookupEntry(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::datacatalog::v1::Entry>
DataCatalogConnectionImpl::ListEntries(
    google::cloud::datacatalog::v1::ListEntriesRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListEntries(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::datacatalog::v1::Entry>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<datacatalog_v1::DataCatalogRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::datacatalog::v1::ListEntriesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::datacatalog::v1::ListEntriesRequest const&
                       request) { return stub->ListEntries(context, request); },
            r, function_name);
      },
      [](google::cloud::datacatalog::v1::ListEntriesResponse r) {
        std::vector<google::cloud::datacatalog::v1::Entry> result(
            r.entries().size());
        auto& messages = *r.mutable_entries();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::datacatalog::v1::EntryOverview>
DataCatalogConnectionImpl::ModifyEntryOverview(
    google::cloud::datacatalog::v1::ModifyEntryOverviewRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->ModifyEntryOverview(request),
      [this](grpc::ClientContext& context,
             google::cloud::datacatalog::v1::ModifyEntryOverviewRequest const&
                 request) {
        return stub_->ModifyEntryOverview(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::datacatalog::v1::Contacts>
DataCatalogConnectionImpl::ModifyEntryContacts(
    google::cloud::datacatalog::v1::ModifyEntryContactsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->ModifyEntryContacts(request),
      [this](grpc::ClientContext& context,
             google::cloud::datacatalog::v1::ModifyEntryContactsRequest const&
                 request) {
        return stub_->ModifyEntryContacts(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::datacatalog::v1::TagTemplate>
DataCatalogConnectionImpl::CreateTagTemplate(
    google::cloud::datacatalog::v1::CreateTagTemplateRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateTagTemplate(request),
      [this](grpc::ClientContext& context,
             google::cloud::datacatalog::v1::CreateTagTemplateRequest const&
                 request) {
        return stub_->CreateTagTemplate(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::datacatalog::v1::TagTemplate>
DataCatalogConnectionImpl::GetTagTemplate(
    google::cloud::datacatalog::v1::GetTagTemplateRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetTagTemplate(request),
      [this](grpc::ClientContext& context,
             google::cloud::datacatalog::v1::GetTagTemplateRequest const&
                 request) { return stub_->GetTagTemplate(context, request); },
      request, __func__);
}

StatusOr<google::cloud::datacatalog::v1::TagTemplate>
DataCatalogConnectionImpl::UpdateTagTemplate(
    google::cloud::datacatalog::v1::UpdateTagTemplateRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateTagTemplate(request),
      [this](grpc::ClientContext& context,
             google::cloud::datacatalog::v1::UpdateTagTemplateRequest const&
                 request) {
        return stub_->UpdateTagTemplate(context, request);
      },
      request, __func__);
}

Status DataCatalogConnectionImpl::DeleteTagTemplate(
    google::cloud::datacatalog::v1::DeleteTagTemplateRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteTagTemplate(request),
      [this](grpc::ClientContext& context,
             google::cloud::datacatalog::v1::DeleteTagTemplateRequest const&
                 request) {
        return stub_->DeleteTagTemplate(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::datacatalog::v1::TagTemplateField>
DataCatalogConnectionImpl::CreateTagTemplateField(
    google::cloud::datacatalog::v1::CreateTagTemplateFieldRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateTagTemplateField(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::datacatalog::v1::CreateTagTemplateFieldRequest const&
              request) {
        return stub_->CreateTagTemplateField(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::datacatalog::v1::TagTemplateField>
DataCatalogConnectionImpl::UpdateTagTemplateField(
    google::cloud::datacatalog::v1::UpdateTagTemplateFieldRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateTagTemplateField(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::datacatalog::v1::UpdateTagTemplateFieldRequest const&
              request) {
        return stub_->UpdateTagTemplateField(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::datacatalog::v1::TagTemplateField>
DataCatalogConnectionImpl::RenameTagTemplateField(
    google::cloud::datacatalog::v1::RenameTagTemplateFieldRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->RenameTagTemplateField(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::datacatalog::v1::RenameTagTemplateFieldRequest const&
              request) {
        return stub_->RenameTagTemplateField(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::datacatalog::v1::TagTemplateField>
DataCatalogConnectionImpl::RenameTagTemplateFieldEnumValue(
    google::cloud::datacatalog::v1::
        RenameTagTemplateFieldEnumValueRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->RenameTagTemplateFieldEnumValue(request),
      [this](grpc::ClientContext& context,
             google::cloud::datacatalog::v1::
                 RenameTagTemplateFieldEnumValueRequest const& request) {
        return stub_->RenameTagTemplateFieldEnumValue(context, request);
      },
      request, __func__);
}

Status DataCatalogConnectionImpl::DeleteTagTemplateField(
    google::cloud::datacatalog::v1::DeleteTagTemplateFieldRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteTagTemplateField(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::datacatalog::v1::DeleteTagTemplateFieldRequest const&
              request) {
        return stub_->DeleteTagTemplateField(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::datacatalog::v1::Tag>
DataCatalogConnectionImpl::CreateTag(
    google::cloud::datacatalog::v1::CreateTagRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateTag(request),
      [this](grpc::ClientContext& context,
             google::cloud::datacatalog::v1::CreateTagRequest const& request) {
        return stub_->CreateTag(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::datacatalog::v1::Tag>
DataCatalogConnectionImpl::UpdateTag(
    google::cloud::datacatalog::v1::UpdateTagRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateTag(request),
      [this](grpc::ClientContext& context,
             google::cloud::datacatalog::v1::UpdateTagRequest const& request) {
        return stub_->UpdateTag(context, request);
      },
      request, __func__);
}

Status DataCatalogConnectionImpl::DeleteTag(
    google::cloud::datacatalog::v1::DeleteTagRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteTag(request),
      [this](grpc::ClientContext& context,
             google::cloud::datacatalog::v1::DeleteTagRequest const& request) {
        return stub_->DeleteTag(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::datacatalog::v1::Tag>
DataCatalogConnectionImpl::ListTags(
    google::cloud::datacatalog::v1::ListTagsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListTags(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::datacatalog::v1::Tag>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<datacatalog_v1::DataCatalogRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::datacatalog::v1::ListTagsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::datacatalog::v1::ListTagsRequest const&
                       request) { return stub->ListTags(context, request); },
            r, function_name);
      },
      [](google::cloud::datacatalog::v1::ListTagsResponse r) {
        std::vector<google::cloud::datacatalog::v1::Tag> result(
            r.tags().size());
        auto& messages = *r.mutable_tags();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::cloud::datacatalog::v1::ReconcileTagsResponse>>
DataCatalogConnectionImpl::ReconcileTags(
    google::cloud::datacatalog::v1::ReconcileTagsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->ReconcileTags(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::datacatalog::v1::ReconcileTagsResponse>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::datacatalog::v1::ReconcileTagsRequest const& request) {
        return stub->AsyncReconcileTags(cq, std::move(context), options,
                                        request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::datacatalog::v1::ReconcileTagsResponse>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::datacatalog::v1::StarEntryResponse>
DataCatalogConnectionImpl::StarEntry(
    google::cloud::datacatalog::v1::StarEntryRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->StarEntry(request),
      [this](grpc::ClientContext& context,
             google::cloud::datacatalog::v1::StarEntryRequest const& request) {
        return stub_->StarEntry(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::datacatalog::v1::UnstarEntryResponse>
DataCatalogConnectionImpl::UnstarEntry(
    google::cloud::datacatalog::v1::UnstarEntryRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UnstarEntry(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::datacatalog::v1::UnstarEntryRequest const& request) {
        return stub_->UnstarEntry(context, request);
      },
      request, __func__);
}

StatusOr<google::iam::v1::Policy> DataCatalogConnectionImpl::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->SetIamPolicy(request),
      [this](grpc::ClientContext& context,
             google::iam::v1::SetIamPolicyRequest const& request) {
        return stub_->SetIamPolicy(context, request);
      },
      request, __func__);
}

StatusOr<google::iam::v1::Policy> DataCatalogConnectionImpl::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetIamPolicy(request),
      [this](grpc::ClientContext& context,
             google::iam::v1::GetIamPolicyRequest const& request) {
        return stub_->GetIamPolicy(context, request);
      },
      request, __func__);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DataCatalogConnectionImpl::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->TestIamPermissions(request),
      [this](grpc::ClientContext& context,
             google::iam::v1::TestIamPermissionsRequest const& request) {
        return stub_->TestIamPermissions(context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::datacatalog::v1::ImportEntriesResponse>>
DataCatalogConnectionImpl::ImportEntries(
    google::cloud::datacatalog::v1::ImportEntriesRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->ImportEntries(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::datacatalog::v1::ImportEntriesResponse>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::datacatalog::v1::ImportEntriesRequest const& request) {
        return stub->AsyncImportEntries(cq, std::move(context), options,
                                        request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::datacatalog::v1::ImportEntriesResponse>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datacatalog_v1_internal
}  // namespace cloud
}  // namespace google
