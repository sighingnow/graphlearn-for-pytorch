/* Copyright 2022 Alibaba Group Holding Limited. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#ifndef GRAPHLEARN_TORCH_INCLUDE_COMMON_H_
#define GRAPHLEARN_TORCH_INCLUDE_COMMON_H_

#include <stdexcept>

namespace graphlearn_torch
{
  
inline void Check(bool val, const char* err_msg) {
  if (val) { return; }
  throw std::runtime_error(err_msg);
}

template <typename T>
inline void CheckEq(const T &x, const T &y) {
  if (x == y) { return; }
  throw std::runtime_error(std::string("CheckEq failed"));
}

}  // namespace graphlearn_torch

#endif // GRAPHLEARN_TORCH_INCLUDE_COMMON_H_
