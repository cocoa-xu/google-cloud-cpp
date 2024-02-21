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
// source: google/cloud/contactcenterinsights/v1/contact_center_insights.proto

#include "google/cloud/contactcenterinsights/v1/contact_center_insights_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace contactcenterinsights_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ContactCenterInsightsClient::ContactCenterInsightsClient(
    std::shared_ptr<ContactCenterInsightsConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
ContactCenterInsightsClient::~ContactCenterInsightsClient() = default;

StatusOr<google::cloud::contactcenterinsights::v1::Conversation>
ContactCenterInsightsClient::CreateConversation(
    std::string const& parent,
    google::cloud::contactcenterinsights::v1::Conversation const& conversation,
    std::string const& conversation_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::contactcenterinsights::v1::CreateConversationRequest request;
  request.set_parent(parent);
  *request.mutable_conversation() = conversation;
  request.set_conversation_id(conversation_id);
  return connection_->CreateConversation(request);
}

StatusOr<google::cloud::contactcenterinsights::v1::Conversation>
ContactCenterInsightsClient::CreateConversation(
    google::cloud::contactcenterinsights::v1::CreateConversationRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateConversation(request);
}

future<StatusOr<google::cloud::contactcenterinsights::v1::Conversation>>
ContactCenterInsightsClient::UploadConversation(
    google::cloud::contactcenterinsights::v1::UploadConversationRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UploadConversation(request);
}

StatusOr<google::cloud::contactcenterinsights::v1::Conversation>
ContactCenterInsightsClient::UpdateConversation(
    google::cloud::contactcenterinsights::v1::Conversation const& conversation,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::contactcenterinsights::v1::UpdateConversationRequest request;
  *request.mutable_conversation() = conversation;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateConversation(request);
}

StatusOr<google::cloud::contactcenterinsights::v1::Conversation>
ContactCenterInsightsClient::UpdateConversation(
    google::cloud::contactcenterinsights::v1::UpdateConversationRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateConversation(request);
}

StatusOr<google::cloud::contactcenterinsights::v1::Conversation>
ContactCenterInsightsClient::GetConversation(std::string const& name,
                                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::contactcenterinsights::v1::GetConversationRequest request;
  request.set_name(name);
  return connection_->GetConversation(request);
}

StatusOr<google::cloud::contactcenterinsights::v1::Conversation>
ContactCenterInsightsClient::GetConversation(
    google::cloud::contactcenterinsights::v1::GetConversationRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetConversation(request);
}

StreamRange<google::cloud::contactcenterinsights::v1::Conversation>
ContactCenterInsightsClient::ListConversations(std::string const& parent,
                                               Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::contactcenterinsights::v1::ListConversationsRequest request;
  request.set_parent(parent);
  return connection_->ListConversations(request);
}

StreamRange<google::cloud::contactcenterinsights::v1::Conversation>
ContactCenterInsightsClient::ListConversations(
    google::cloud::contactcenterinsights::v1::ListConversationsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListConversations(std::move(request));
}

Status ContactCenterInsightsClient::DeleteConversation(std::string const& name,
                                                       Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::contactcenterinsights::v1::DeleteConversationRequest request;
  request.set_name(name);
  return connection_->DeleteConversation(request);
}

Status ContactCenterInsightsClient::DeleteConversation(
    google::cloud::contactcenterinsights::v1::DeleteConversationRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteConversation(request);
}

future<StatusOr<google::cloud::contactcenterinsights::v1::Analysis>>
ContactCenterInsightsClient::CreateAnalysis(
    std::string const& parent,
    google::cloud::contactcenterinsights::v1::Analysis const& analysis,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::contactcenterinsights::v1::CreateAnalysisRequest request;
  request.set_parent(parent);
  *request.mutable_analysis() = analysis;
  return connection_->CreateAnalysis(request);
}

future<StatusOr<google::cloud::contactcenterinsights::v1::Analysis>>
ContactCenterInsightsClient::CreateAnalysis(
    google::cloud::contactcenterinsights::v1::CreateAnalysisRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateAnalysis(request);
}

StatusOr<google::cloud::contactcenterinsights::v1::Analysis>
ContactCenterInsightsClient::GetAnalysis(std::string const& name,
                                         Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::contactcenterinsights::v1::GetAnalysisRequest request;
  request.set_name(name);
  return connection_->GetAnalysis(request);
}

StatusOr<google::cloud::contactcenterinsights::v1::Analysis>
ContactCenterInsightsClient::GetAnalysis(
    google::cloud::contactcenterinsights::v1::GetAnalysisRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetAnalysis(request);
}

StreamRange<google::cloud::contactcenterinsights::v1::Analysis>
ContactCenterInsightsClient::ListAnalyses(std::string const& parent,
                                          Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::contactcenterinsights::v1::ListAnalysesRequest request;
  request.set_parent(parent);
  return connection_->ListAnalyses(request);
}

StreamRange<google::cloud::contactcenterinsights::v1::Analysis>
ContactCenterInsightsClient::ListAnalyses(
    google::cloud::contactcenterinsights::v1::ListAnalysesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListAnalyses(std::move(request));
}

Status ContactCenterInsightsClient::DeleteAnalysis(std::string const& name,
                                                   Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::contactcenterinsights::v1::DeleteAnalysisRequest request;
  request.set_name(name);
  return connection_->DeleteAnalysis(request);
}

Status ContactCenterInsightsClient::DeleteAnalysis(
    google::cloud::contactcenterinsights::v1::DeleteAnalysisRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteAnalysis(request);
}

future<StatusOr<
    google::cloud::contactcenterinsights::v1::BulkAnalyzeConversationsResponse>>
ContactCenterInsightsClient::BulkAnalyzeConversations(std::string const& parent,
                                                      std::string const& filter,
                                                      float analysis_percentage,
                                                      Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::contactcenterinsights::v1::BulkAnalyzeConversationsRequest
      request;
  request.set_parent(parent);
  request.set_filter(filter);
  request.set_analysis_percentage(analysis_percentage);
  return connection_->BulkAnalyzeConversations(request);
}

future<StatusOr<
    google::cloud::contactcenterinsights::v1::BulkAnalyzeConversationsResponse>>
ContactCenterInsightsClient::BulkAnalyzeConversations(
    google::cloud::contactcenterinsights::v1::
        BulkAnalyzeConversationsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->BulkAnalyzeConversations(request);
}

future<StatusOr<
    google::cloud::contactcenterinsights::v1::BulkDeleteConversationsResponse>>
ContactCenterInsightsClient::BulkDeleteConversations(std::string const& parent,
                                                     std::string const& filter,
                                                     Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::contactcenterinsights::v1::BulkDeleteConversationsRequest
      request;
  request.set_parent(parent);
  request.set_filter(filter);
  return connection_->BulkDeleteConversations(request);
}

future<StatusOr<
    google::cloud::contactcenterinsights::v1::BulkDeleteConversationsResponse>>
ContactCenterInsightsClient::BulkDeleteConversations(
    google::cloud::contactcenterinsights::v1::
        BulkDeleteConversationsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->BulkDeleteConversations(request);
}

future<StatusOr<
    google::cloud::contactcenterinsights::v1::IngestConversationsResponse>>
ContactCenterInsightsClient::IngestConversations(std::string const& parent,
                                                 Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::contactcenterinsights::v1::IngestConversationsRequest request;
  request.set_parent(parent);
  return connection_->IngestConversations(request);
}

future<StatusOr<
    google::cloud::contactcenterinsights::v1::IngestConversationsResponse>>
ContactCenterInsightsClient::IngestConversations(
    google::cloud::contactcenterinsights::v1::IngestConversationsRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->IngestConversations(request);
}

future<StatusOr<
    google::cloud::contactcenterinsights::v1::ExportInsightsDataResponse>>
ContactCenterInsightsClient::ExportInsightsData(std::string const& parent,
                                                Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::contactcenterinsights::v1::ExportInsightsDataRequest request;
  request.set_parent(parent);
  return connection_->ExportInsightsData(request);
}

future<StatusOr<
    google::cloud::contactcenterinsights::v1::ExportInsightsDataResponse>>
ContactCenterInsightsClient::ExportInsightsData(
    google::cloud::contactcenterinsights::v1::ExportInsightsDataRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ExportInsightsData(request);
}

future<StatusOr<google::cloud::contactcenterinsights::v1::IssueModel>>
ContactCenterInsightsClient::CreateIssueModel(
    std::string const& parent,
    google::cloud::contactcenterinsights::v1::IssueModel const& issue_model,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::contactcenterinsights::v1::CreateIssueModelRequest request;
  request.set_parent(parent);
  *request.mutable_issue_model() = issue_model;
  return connection_->CreateIssueModel(request);
}

future<StatusOr<google::cloud::contactcenterinsights::v1::IssueModel>>
ContactCenterInsightsClient::CreateIssueModel(
    google::cloud::contactcenterinsights::v1::CreateIssueModelRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateIssueModel(request);
}

StatusOr<google::cloud::contactcenterinsights::v1::IssueModel>
ContactCenterInsightsClient::UpdateIssueModel(
    google::cloud::contactcenterinsights::v1::IssueModel const& issue_model,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::contactcenterinsights::v1::UpdateIssueModelRequest request;
  *request.mutable_issue_model() = issue_model;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateIssueModel(request);
}

StatusOr<google::cloud::contactcenterinsights::v1::IssueModel>
ContactCenterInsightsClient::UpdateIssueModel(
    google::cloud::contactcenterinsights::v1::UpdateIssueModelRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateIssueModel(request);
}

StatusOr<google::cloud::contactcenterinsights::v1::IssueModel>
ContactCenterInsightsClient::GetIssueModel(std::string const& name,
                                           Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::contactcenterinsights::v1::GetIssueModelRequest request;
  request.set_name(name);
  return connection_->GetIssueModel(request);
}

StatusOr<google::cloud::contactcenterinsights::v1::IssueModel>
ContactCenterInsightsClient::GetIssueModel(
    google::cloud::contactcenterinsights::v1::GetIssueModelRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetIssueModel(request);
}

StatusOr<google::cloud::contactcenterinsights::v1::ListIssueModelsResponse>
ContactCenterInsightsClient::ListIssueModels(std::string const& parent,
                                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::contactcenterinsights::v1::ListIssueModelsRequest request;
  request.set_parent(parent);
  return connection_->ListIssueModels(request);
}

StatusOr<google::cloud::contactcenterinsights::v1::ListIssueModelsResponse>
ContactCenterInsightsClient::ListIssueModels(
    google::cloud::contactcenterinsights::v1::ListIssueModelsRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListIssueModels(request);
}

future<StatusOr<
    google::cloud::contactcenterinsights::v1::DeleteIssueModelMetadata>>
ContactCenterInsightsClient::DeleteIssueModel(std::string const& name,
                                              Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::contactcenterinsights::v1::DeleteIssueModelRequest request;
  request.set_name(name);
  return connection_->DeleteIssueModel(request);
}

future<StatusOr<
    google::cloud::contactcenterinsights::v1::DeleteIssueModelMetadata>>
ContactCenterInsightsClient::DeleteIssueModel(
    google::cloud::contactcenterinsights::v1::DeleteIssueModelRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteIssueModel(request);
}

future<StatusOr<
    google::cloud::contactcenterinsights::v1::DeployIssueModelResponse>>
ContactCenterInsightsClient::DeployIssueModel(std::string const& name,
                                              Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::contactcenterinsights::v1::DeployIssueModelRequest request;
  request.set_name(name);
  return connection_->DeployIssueModel(request);
}

future<StatusOr<
    google::cloud::contactcenterinsights::v1::DeployIssueModelResponse>>
ContactCenterInsightsClient::DeployIssueModel(
    google::cloud::contactcenterinsights::v1::DeployIssueModelRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeployIssueModel(request);
}

future<StatusOr<
    google::cloud::contactcenterinsights::v1::UndeployIssueModelResponse>>
ContactCenterInsightsClient::UndeployIssueModel(std::string const& name,
                                                Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::contactcenterinsights::v1::UndeployIssueModelRequest request;
  request.set_name(name);
  return connection_->UndeployIssueModel(request);
}

future<StatusOr<
    google::cloud::contactcenterinsights::v1::UndeployIssueModelResponse>>
ContactCenterInsightsClient::UndeployIssueModel(
    google::cloud::contactcenterinsights::v1::UndeployIssueModelRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UndeployIssueModel(request);
}

StatusOr<google::cloud::contactcenterinsights::v1::Issue>
ContactCenterInsightsClient::GetIssue(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::contactcenterinsights::v1::GetIssueRequest request;
  request.set_name(name);
  return connection_->GetIssue(request);
}

StatusOr<google::cloud::contactcenterinsights::v1::Issue>
ContactCenterInsightsClient::GetIssue(
    google::cloud::contactcenterinsights::v1::GetIssueRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetIssue(request);
}

StatusOr<google::cloud::contactcenterinsights::v1::ListIssuesResponse>
ContactCenterInsightsClient::ListIssues(std::string const& parent,
                                        Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::contactcenterinsights::v1::ListIssuesRequest request;
  request.set_parent(parent);
  return connection_->ListIssues(request);
}

StatusOr<google::cloud::contactcenterinsights::v1::ListIssuesResponse>
ContactCenterInsightsClient::ListIssues(
    google::cloud::contactcenterinsights::v1::ListIssuesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListIssues(request);
}

StatusOr<google::cloud::contactcenterinsights::v1::Issue>
ContactCenterInsightsClient::UpdateIssue(
    google::cloud::contactcenterinsights::v1::Issue const& issue,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::contactcenterinsights::v1::UpdateIssueRequest request;
  *request.mutable_issue() = issue;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateIssue(request);
}

StatusOr<google::cloud::contactcenterinsights::v1::Issue>
ContactCenterInsightsClient::UpdateIssue(
    google::cloud::contactcenterinsights::v1::UpdateIssueRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateIssue(request);
}

Status ContactCenterInsightsClient::DeleteIssue(std::string const& name,
                                                Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::contactcenterinsights::v1::DeleteIssueRequest request;
  request.set_name(name);
  return connection_->DeleteIssue(request);
}

Status ContactCenterInsightsClient::DeleteIssue(
    google::cloud::contactcenterinsights::v1::DeleteIssueRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteIssue(request);
}

StatusOr<
    google::cloud::contactcenterinsights::v1::CalculateIssueModelStatsResponse>
ContactCenterInsightsClient::CalculateIssueModelStats(
    std::string const& issue_model, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::contactcenterinsights::v1::CalculateIssueModelStatsRequest
      request;
  request.set_issue_model(issue_model);
  return connection_->CalculateIssueModelStats(request);
}

StatusOr<
    google::cloud::contactcenterinsights::v1::CalculateIssueModelStatsResponse>
ContactCenterInsightsClient::CalculateIssueModelStats(
    google::cloud::contactcenterinsights::v1::
        CalculateIssueModelStatsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CalculateIssueModelStats(request);
}

StatusOr<google::cloud::contactcenterinsights::v1::PhraseMatcher>
ContactCenterInsightsClient::CreatePhraseMatcher(
    std::string const& parent,
    google::cloud::contactcenterinsights::v1::PhraseMatcher const&
        phrase_matcher,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::contactcenterinsights::v1::CreatePhraseMatcherRequest request;
  request.set_parent(parent);
  *request.mutable_phrase_matcher() = phrase_matcher;
  return connection_->CreatePhraseMatcher(request);
}

StatusOr<google::cloud::contactcenterinsights::v1::PhraseMatcher>
ContactCenterInsightsClient::CreatePhraseMatcher(
    google::cloud::contactcenterinsights::v1::CreatePhraseMatcherRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreatePhraseMatcher(request);
}

StatusOr<google::cloud::contactcenterinsights::v1::PhraseMatcher>
ContactCenterInsightsClient::GetPhraseMatcher(std::string const& name,
                                              Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::contactcenterinsights::v1::GetPhraseMatcherRequest request;
  request.set_name(name);
  return connection_->GetPhraseMatcher(request);
}

StatusOr<google::cloud::contactcenterinsights::v1::PhraseMatcher>
ContactCenterInsightsClient::GetPhraseMatcher(
    google::cloud::contactcenterinsights::v1::GetPhraseMatcherRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetPhraseMatcher(request);
}

StreamRange<google::cloud::contactcenterinsights::v1::PhraseMatcher>
ContactCenterInsightsClient::ListPhraseMatchers(std::string const& parent,
                                                Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::contactcenterinsights::v1::ListPhraseMatchersRequest request;
  request.set_parent(parent);
  return connection_->ListPhraseMatchers(request);
}

StreamRange<google::cloud::contactcenterinsights::v1::PhraseMatcher>
ContactCenterInsightsClient::ListPhraseMatchers(
    google::cloud::contactcenterinsights::v1::ListPhraseMatchersRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListPhraseMatchers(std::move(request));
}

Status ContactCenterInsightsClient::DeletePhraseMatcher(std::string const& name,
                                                        Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::contactcenterinsights::v1::DeletePhraseMatcherRequest request;
  request.set_name(name);
  return connection_->DeletePhraseMatcher(request);
}

Status ContactCenterInsightsClient::DeletePhraseMatcher(
    google::cloud::contactcenterinsights::v1::DeletePhraseMatcherRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeletePhraseMatcher(request);
}

StatusOr<google::cloud::contactcenterinsights::v1::PhraseMatcher>
ContactCenterInsightsClient::UpdatePhraseMatcher(
    google::cloud::contactcenterinsights::v1::PhraseMatcher const&
        phrase_matcher,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::contactcenterinsights::v1::UpdatePhraseMatcherRequest request;
  *request.mutable_phrase_matcher() = phrase_matcher;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdatePhraseMatcher(request);
}

StatusOr<google::cloud::contactcenterinsights::v1::PhraseMatcher>
ContactCenterInsightsClient::UpdatePhraseMatcher(
    google::cloud::contactcenterinsights::v1::UpdatePhraseMatcherRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdatePhraseMatcher(request);
}

StatusOr<google::cloud::contactcenterinsights::v1::CalculateStatsResponse>
ContactCenterInsightsClient::CalculateStats(std::string const& location,
                                            Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::contactcenterinsights::v1::CalculateStatsRequest request;
  request.set_location(location);
  return connection_->CalculateStats(request);
}

StatusOr<google::cloud::contactcenterinsights::v1::CalculateStatsResponse>
ContactCenterInsightsClient::CalculateStats(
    google::cloud::contactcenterinsights::v1::CalculateStatsRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CalculateStats(request);
}

StatusOr<google::cloud::contactcenterinsights::v1::Settings>
ContactCenterInsightsClient::GetSettings(std::string const& name,
                                         Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::contactcenterinsights::v1::GetSettingsRequest request;
  request.set_name(name);
  return connection_->GetSettings(request);
}

StatusOr<google::cloud::contactcenterinsights::v1::Settings>
ContactCenterInsightsClient::GetSettings(
    google::cloud::contactcenterinsights::v1::GetSettingsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetSettings(request);
}

StatusOr<google::cloud::contactcenterinsights::v1::Settings>
ContactCenterInsightsClient::UpdateSettings(
    google::cloud::contactcenterinsights::v1::Settings const& settings,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::contactcenterinsights::v1::UpdateSettingsRequest request;
  *request.mutable_settings() = settings;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateSettings(request);
}

StatusOr<google::cloud::contactcenterinsights::v1::Settings>
ContactCenterInsightsClient::UpdateSettings(
    google::cloud::contactcenterinsights::v1::UpdateSettingsRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateSettings(request);
}

StatusOr<google::cloud::contactcenterinsights::v1::View>
ContactCenterInsightsClient::CreateView(
    std::string const& parent,
    google::cloud::contactcenterinsights::v1::View const& view, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::contactcenterinsights::v1::CreateViewRequest request;
  request.set_parent(parent);
  *request.mutable_view() = view;
  return connection_->CreateView(request);
}

StatusOr<google::cloud::contactcenterinsights::v1::View>
ContactCenterInsightsClient::CreateView(
    google::cloud::contactcenterinsights::v1::CreateViewRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateView(request);
}

StatusOr<google::cloud::contactcenterinsights::v1::View>
ContactCenterInsightsClient::GetView(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::contactcenterinsights::v1::GetViewRequest request;
  request.set_name(name);
  return connection_->GetView(request);
}

StatusOr<google::cloud::contactcenterinsights::v1::View>
ContactCenterInsightsClient::GetView(
    google::cloud::contactcenterinsights::v1::GetViewRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetView(request);
}

StreamRange<google::cloud::contactcenterinsights::v1::View>
ContactCenterInsightsClient::ListViews(std::string const& parent,
                                       Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::contactcenterinsights::v1::ListViewsRequest request;
  request.set_parent(parent);
  return connection_->ListViews(request);
}

StreamRange<google::cloud::contactcenterinsights::v1::View>
ContactCenterInsightsClient::ListViews(
    google::cloud::contactcenterinsights::v1::ListViewsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListViews(std::move(request));
}

StatusOr<google::cloud::contactcenterinsights::v1::View>
ContactCenterInsightsClient::UpdateView(
    google::cloud::contactcenterinsights::v1::View const& view,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::contactcenterinsights::v1::UpdateViewRequest request;
  *request.mutable_view() = view;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateView(request);
}

StatusOr<google::cloud::contactcenterinsights::v1::View>
ContactCenterInsightsClient::UpdateView(
    google::cloud::contactcenterinsights::v1::UpdateViewRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateView(request);
}

Status ContactCenterInsightsClient::DeleteView(std::string const& name,
                                               Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::contactcenterinsights::v1::DeleteViewRequest request;
  request.set_name(name);
  return connection_->DeleteView(request);
}

Status ContactCenterInsightsClient::DeleteView(
    google::cloud::contactcenterinsights::v1::DeleteViewRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteView(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace contactcenterinsights_v1
}  // namespace cloud
}  // namespace google
