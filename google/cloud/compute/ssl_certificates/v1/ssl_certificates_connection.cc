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
// source: google/cloud/compute/ssl_certificates/v1/ssl_certificates.proto

#include "google/cloud/compute/ssl_certificates/v1/ssl_certificates_connection.h"
#include "google/cloud/compute/ssl_certificates/v1/internal/ssl_certificates_option_defaults.h"
#include "google/cloud/compute/ssl_certificates/v1/internal/ssl_certificates_tracing_connection.h"
#include "google/cloud/compute/ssl_certificates/v1/ssl_certificates_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_ssl_certificates_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SslCertificatesConnection::~SslCertificatesConnection() = default;

StreamRange<std::pair<
    std::string, google::cloud::cpp::compute::v1::SslCertificatesScopedList>>
SslCertificatesConnection::AggregatedListSslCertificates(
    google::cloud::cpp::compute::ssl_certificates::v1::
        AggregatedListSslCertificatesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<StreamRange<
      std::pair<std::string,
                google::cloud::cpp::compute::v1::SslCertificatesScopedList>>>();
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SslCertificatesConnection::DeleteSslCertificate(
    google::cloud::cpp::compute::ssl_certificates::v1::
        DeleteSslCertificateRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::SslCertificate>
SslCertificatesConnection::GetSslCertificate(
    google::cloud::cpp::compute::ssl_certificates::v1::
        GetSslCertificateRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SslCertificatesConnection::InsertSslCertificate(
    google::cloud::cpp::compute::ssl_certificates::v1::
        InsertSslCertificateRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::cpp::compute::v1::SslCertificate>
SslCertificatesConnection::ListSslCertificates(
    google::cloud::cpp::compute::ssl_certificates::v1::
        ListSslCertificatesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::SslCertificate>>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_ssl_certificates_v1
}  // namespace cloud
}  // namespace google
