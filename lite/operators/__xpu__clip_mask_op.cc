// Copyright (c) 2019 PaddlePaddle Authors. All Rights Reserved.
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

#include "lite/operators/__xpu__clip_mask_op.h"
#include <cmath>  // std::sqrt
#include "lite/core/op_registry.h"

namespace paddle {
namespace lite {
namespace operators {

bool XPUClipMaskOp::CheckShape() const { return true; }

bool XPUClipMaskOp::InferShapeImpl() const { return true; }

bool XPUClipMaskOp::AttachImpl(const cpp::OpDesc& op_desc, lite::Scope* scope) {
  return true;
}

}  // namespace operators
}  // namespace lite
}  // namespace paddle

REGISTER_LITE_OP(__xpu__clip_mask, paddle::lite::operators::XPUClipMaskOp);
