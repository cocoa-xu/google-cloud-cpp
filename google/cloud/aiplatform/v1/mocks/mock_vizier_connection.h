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
// source: google/cloud/aiplatform/v1/vizier_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_MOCKS_MOCK_VIZIER_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_MOCKS_MOCK_VIZIER_CONNECTION_H

#include "google/cloud/aiplatform/v1/vizier_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace aiplatform_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `VizierServiceConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `VizierServiceClient`. To do so,
 * construct an object of type `VizierServiceClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockVizierServiceConnection
    : public aiplatform_v1::VizierServiceConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::Study>, CreateStudy,
      (google::cloud::aiplatform::v1::CreateStudyRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::aiplatform::v1::Study>, GetStudy,
              (google::cloud::aiplatform::v1::GetStudyRequest const& request),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::aiplatform::v1::Study>), ListStudies,
              (google::cloud::aiplatform::v1::ListStudiesRequest request),
              (override));

  MOCK_METHOD(
      Status, DeleteStudy,
      (google::cloud::aiplatform::v1::DeleteStudyRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::Study>, LookupStudy,
      (google::cloud::aiplatform::v1::LookupStudyRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::SuggestTrialsResponse>>,
      SuggestTrials,
      (google::cloud::aiplatform::v1::SuggestTrialsRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::Trial>, CreateTrial,
      (google::cloud::aiplatform::v1::CreateTrialRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::aiplatform::v1::Trial>, GetTrial,
              (google::cloud::aiplatform::v1::GetTrialRequest const& request),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::aiplatform::v1::Trial>), ListTrials,
              (google::cloud::aiplatform::v1::ListTrialsRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::aiplatform::v1::Trial>,
              AddTrialMeasurement,
              (google::cloud::aiplatform::v1::AddTrialMeasurementRequest const&
                   request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::Trial>, CompleteTrial,
      (google::cloud::aiplatform::v1::CompleteTrialRequest const& request),
      (override));

  MOCK_METHOD(
      Status, DeleteTrial,
      (google::cloud::aiplatform::v1::DeleteTrialRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<
          google::cloud::aiplatform::v1::CheckTrialEarlyStoppingStateResponse>>,
      CheckTrialEarlyStoppingState,
      (google::cloud::aiplatform::v1::CheckTrialEarlyStoppingStateRequest const&
           request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::aiplatform::v1::Trial>, StopTrial,
              (google::cloud::aiplatform::v1::StopTrialRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::ListOptimalTrialsResponse>,
      ListOptimalTrials,
      (google::cloud::aiplatform::v1::ListOptimalTrialsRequest const& request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_MOCKS_MOCK_VIZIER_CONNECTION_H
