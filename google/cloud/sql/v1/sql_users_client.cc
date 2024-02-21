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
// source: google/cloud/sql/v1/cloud_sql_users.proto

#include "google/cloud/sql/v1/sql_users_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace sql_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SqlUsersServiceClient::SqlUsersServiceClient(
    std::shared_ptr<SqlUsersServiceConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
SqlUsersServiceClient::~SqlUsersServiceClient() = default;

StatusOr<google::cloud::sql::v1::Operation> SqlUsersServiceClient::Delete(
    google::cloud::sql::v1::SqlUsersDeleteRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->Delete(request);
}

StatusOr<google::cloud::sql::v1::User> SqlUsersServiceClient::Get(
    google::cloud::sql::v1::SqlUsersGetRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->Get(request);
}

StatusOr<google::cloud::sql::v1::Operation> SqlUsersServiceClient::Insert(
    google::cloud::sql::v1::SqlUsersInsertRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->Insert(request);
}

StatusOr<google::cloud::sql::v1::UsersListResponse> SqlUsersServiceClient::List(
    google::cloud::sql::v1::SqlUsersListRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->List(request);
}

StatusOr<google::cloud::sql::v1::Operation> SqlUsersServiceClient::Update(
    google::cloud::sql::v1::SqlUsersUpdateRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->Update(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace sql_v1
}  // namespace cloud
}  // namespace google
