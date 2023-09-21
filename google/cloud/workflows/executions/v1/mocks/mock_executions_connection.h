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
// source: google/cloud/workflows/executions/v1/executions.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WORKFLOWS_EXECUTIONS_V1_MOCKS_MOCK_EXECUTIONS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WORKFLOWS_EXECUTIONS_V1_MOCKS_MOCK_EXECUTIONS_CONNECTION_H

#include "google/cloud/workflows/executions/v1/executions_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace workflows_executions_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `ExecutionsConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `ExecutionsClient`. To do so,
 * construct an object of type `ExecutionsClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockExecutionsConnection
    : public workflows_executions_v1::ExecutionsConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::workflows::executions::v1::Execution>),
      ListExecutions,
      (google::cloud::workflows::executions::v1::ListExecutionsRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::workflows::executions::v1::Execution>,
      CreateExecution,
      (google::cloud::workflows::executions::v1::CreateExecutionRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::workflows::executions::v1::Execution>,
      GetExecution,
      (google::cloud::workflows::executions::v1::GetExecutionRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::workflows::executions::v1::Execution>,
      CancelExecution,
      (google::cloud::workflows::executions::v1::CancelExecutionRequest const&
           request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace workflows_executions_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WORKFLOWS_EXECUTIONS_V1_MOCKS_MOCK_EXECUTIONS_CONNECTION_H
