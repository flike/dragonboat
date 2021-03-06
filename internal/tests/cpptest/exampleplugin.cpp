// Copyright 2017-2019 Lei Ni (nilei81@gmail.com) and other Dragonboat authors.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "example.h"

extern "C" dragonboat::RegularStateMachine *CreateRegularStateMachine(
  uint64_t clusterID, uint64_t nodeID)
{
  return new HelloWorldStateMachine(clusterID, nodeID);
}

extern "C" dragonboat::ConcurrentStateMachine *CreateConcurrentStateMachine(
  uint64_t clusterID, uint64_t nodeID)
{
  return new TestConcurrentStateMachine(clusterID, nodeID);
}

extern "C" dragonboat::OnDiskStateMachine *CreateOnDiskStateMachine(
  uint64_t clusterID, uint64_t nodeID)
{
  return new FakeOnDiskStateMachine(clusterID, nodeID);
}