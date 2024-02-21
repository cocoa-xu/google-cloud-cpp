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
// source: google/cloud/speech/v2/cloud_speech.proto

#include "google/cloud/speech/v2/internal/speech_connection_impl.h"
#include "google/cloud/speech/v2/internal/speech_option_defaults.h"
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
namespace speech_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<speech_v2::SpeechRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<speech_v2::SpeechRetryPolicyOption>()->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<speech_v2::SpeechBackoffPolicyOption>()->clone();
}

std::unique_ptr<speech_v2::SpeechConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options.get<speech_v2::SpeechConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<speech_v2::SpeechPollingPolicyOption>()->clone();
}

}  // namespace

SpeechConnectionImpl::SpeechConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<speech_v2_internal::SpeechStub> stub, Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      SpeechConnection::options())) {}

future<StatusOr<google::cloud::speech::v2::Recognizer>>
SpeechConnectionImpl::CreateRecognizer(
    google::cloud::speech::v2::CreateRecognizerRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreateRecognizer(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::speech::v2::Recognizer>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::speech::v2::CreateRecognizerRequest const& request) {
        return stub->AsyncCreateRecognizer(cq, std::move(context), options,
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
          google::cloud::speech::v2::Recognizer>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StreamRange<google::cloud::speech::v2::Recognizer>
SpeechConnectionImpl::ListRecognizers(
    google::cloud::speech::v2::ListRecognizersRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListRecognizers(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::speech::v2::Recognizer>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<speech_v2::SpeechRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::speech::v2::ListRecognizersRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::speech::v2::ListRecognizersRequest const&
                       request) {
              return stub->ListRecognizers(context, request);
            },
            r, function_name);
      },
      [](google::cloud::speech::v2::ListRecognizersResponse r) {
        std::vector<google::cloud::speech::v2::Recognizer> result(
            r.recognizers().size());
        auto& messages = *r.mutable_recognizers();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::speech::v2::Recognizer>
SpeechConnectionImpl::GetRecognizer(
    google::cloud::speech::v2::GetRecognizerRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetRecognizer(request),
      [this](grpc::ClientContext& context,
             google::cloud::speech::v2::GetRecognizerRequest const& request) {
        return stub_->GetRecognizer(context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::speech::v2::Recognizer>>
SpeechConnectionImpl::UpdateRecognizer(
    google::cloud::speech::v2::UpdateRecognizerRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->UpdateRecognizer(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::speech::v2::Recognizer>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::speech::v2::UpdateRecognizerRequest const& request) {
        return stub->AsyncUpdateRecognizer(cq, std::move(context), options,
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
          google::cloud::speech::v2::Recognizer>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::speech::v2::Recognizer>>
SpeechConnectionImpl::DeleteRecognizer(
    google::cloud::speech::v2::DeleteRecognizerRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeleteRecognizer(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::speech::v2::Recognizer>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::speech::v2::DeleteRecognizerRequest const& request) {
        return stub->AsyncDeleteRecognizer(cq, std::move(context), options,
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
          google::cloud::speech::v2::Recognizer>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::speech::v2::Recognizer>>
SpeechConnectionImpl::UndeleteRecognizer(
    google::cloud::speech::v2::UndeleteRecognizerRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->UndeleteRecognizer(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::speech::v2::Recognizer>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::speech::v2::UndeleteRecognizerRequest const& request) {
        return stub->AsyncUndeleteRecognizer(cq, std::move(context), options,
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
          google::cloud::speech::v2::Recognizer>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::speech::v2::RecognizeResponse>
SpeechConnectionImpl::Recognize(
    google::cloud::speech::v2::RecognizeRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->Recognize(request),
      [this](grpc::ClientContext& context,
             google::cloud::speech::v2::RecognizeRequest const& request) {
        return stub_->Recognize(context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::speech::v2::BatchRecognizeResponse>>
SpeechConnectionImpl::BatchRecognize(
    google::cloud::speech::v2::BatchRecognizeRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->BatchRecognize(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::speech::v2::BatchRecognizeResponse>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::speech::v2::BatchRecognizeRequest const& request) {
        return stub->AsyncBatchRecognize(cq, std::move(context), options,
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
          google::cloud::speech::v2::BatchRecognizeResponse>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::speech::v2::Config> SpeechConnectionImpl::GetConfig(
    google::cloud::speech::v2::GetConfigRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetConfig(request),
      [this](grpc::ClientContext& context,
             google::cloud::speech::v2::GetConfigRequest const& request) {
        return stub_->GetConfig(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::speech::v2::Config> SpeechConnectionImpl::UpdateConfig(
    google::cloud::speech::v2::UpdateConfigRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateConfig(request),
      [this](grpc::ClientContext& context,
             google::cloud::speech::v2::UpdateConfigRequest const& request) {
        return stub_->UpdateConfig(context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::speech::v2::CustomClass>>
SpeechConnectionImpl::CreateCustomClass(
    google::cloud::speech::v2::CreateCustomClassRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreateCustomClass(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::speech::v2::CustomClass>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::speech::v2::CreateCustomClassRequest const& request) {
        return stub->AsyncCreateCustomClass(cq, std::move(context), options,
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
          google::cloud::speech::v2::CustomClass>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StreamRange<google::cloud::speech::v2::CustomClass>
SpeechConnectionImpl::ListCustomClasses(
    google::cloud::speech::v2::ListCustomClassesRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListCustomClasses(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::speech::v2::CustomClass>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<speech_v2::SpeechRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::speech::v2::ListCustomClassesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::speech::v2::ListCustomClassesRequest const&
                       request) {
              return stub->ListCustomClasses(context, request);
            },
            r, function_name);
      },
      [](google::cloud::speech::v2::ListCustomClassesResponse r) {
        std::vector<google::cloud::speech::v2::CustomClass> result(
            r.custom_classes().size());
        auto& messages = *r.mutable_custom_classes();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::speech::v2::CustomClass>
SpeechConnectionImpl::GetCustomClass(
    google::cloud::speech::v2::GetCustomClassRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetCustomClass(request),
      [this](grpc::ClientContext& context,
             google::cloud::speech::v2::GetCustomClassRequest const& request) {
        return stub_->GetCustomClass(context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::speech::v2::CustomClass>>
SpeechConnectionImpl::UpdateCustomClass(
    google::cloud::speech::v2::UpdateCustomClassRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->UpdateCustomClass(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::speech::v2::CustomClass>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::speech::v2::UpdateCustomClassRequest const& request) {
        return stub->AsyncUpdateCustomClass(cq, std::move(context), options,
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
          google::cloud::speech::v2::CustomClass>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::speech::v2::CustomClass>>
SpeechConnectionImpl::DeleteCustomClass(
    google::cloud::speech::v2::DeleteCustomClassRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeleteCustomClass(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::speech::v2::CustomClass>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::speech::v2::DeleteCustomClassRequest const& request) {
        return stub->AsyncDeleteCustomClass(cq, std::move(context), options,
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
          google::cloud::speech::v2::CustomClass>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::speech::v2::CustomClass>>
SpeechConnectionImpl::UndeleteCustomClass(
    google::cloud::speech::v2::UndeleteCustomClassRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->UndeleteCustomClass(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::speech::v2::CustomClass>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::speech::v2::UndeleteCustomClassRequest const&
              request) {
        return stub->AsyncUndeleteCustomClass(cq, std::move(context), options,
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
          google::cloud::speech::v2::CustomClass>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::speech::v2::PhraseSet>>
SpeechConnectionImpl::CreatePhraseSet(
    google::cloud::speech::v2::CreatePhraseSetRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreatePhraseSet(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::speech::v2::PhraseSet>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::speech::v2::CreatePhraseSetRequest const& request) {
        return stub->AsyncCreatePhraseSet(cq, std::move(context), options,
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
          google::cloud::speech::v2::PhraseSet>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StreamRange<google::cloud::speech::v2::PhraseSet>
SpeechConnectionImpl::ListPhraseSets(
    google::cloud::speech::v2::ListPhraseSetsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListPhraseSets(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::speech::v2::PhraseSet>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<speech_v2::SpeechRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::speech::v2::ListPhraseSetsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::speech::v2::ListPhraseSetsRequest const&
                       request) {
              return stub->ListPhraseSets(context, request);
            },
            r, function_name);
      },
      [](google::cloud::speech::v2::ListPhraseSetsResponse r) {
        std::vector<google::cloud::speech::v2::PhraseSet> result(
            r.phrase_sets().size());
        auto& messages = *r.mutable_phrase_sets();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::speech::v2::PhraseSet>
SpeechConnectionImpl::GetPhraseSet(
    google::cloud::speech::v2::GetPhraseSetRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetPhraseSet(request),
      [this](grpc::ClientContext& context,
             google::cloud::speech::v2::GetPhraseSetRequest const& request) {
        return stub_->GetPhraseSet(context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::speech::v2::PhraseSet>>
SpeechConnectionImpl::UpdatePhraseSet(
    google::cloud::speech::v2::UpdatePhraseSetRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->UpdatePhraseSet(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::speech::v2::PhraseSet>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::speech::v2::UpdatePhraseSetRequest const& request) {
        return stub->AsyncUpdatePhraseSet(cq, std::move(context), options,
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
          google::cloud::speech::v2::PhraseSet>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::speech::v2::PhraseSet>>
SpeechConnectionImpl::DeletePhraseSet(
    google::cloud::speech::v2::DeletePhraseSetRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeletePhraseSet(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::speech::v2::PhraseSet>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::speech::v2::DeletePhraseSetRequest const& request) {
        return stub->AsyncDeletePhraseSet(cq, std::move(context), options,
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
          google::cloud::speech::v2::PhraseSet>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::speech::v2::PhraseSet>>
SpeechConnectionImpl::UndeletePhraseSet(
    google::cloud::speech::v2::UndeletePhraseSetRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->UndeletePhraseSet(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::speech::v2::PhraseSet>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::speech::v2::UndeletePhraseSetRequest const& request) {
        return stub->AsyncUndeletePhraseSet(cq, std::move(context), options,
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
          google::cloud::speech::v2::PhraseSet>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace speech_v2_internal
}  // namespace cloud
}  // namespace google
