// Copyright (c) OpenMMLab. All rights reserved.

#include "net.h"

#include "registry.h"

namespace mmdeploy {

template class Registry<Net>;
template class Creator<Net>;

}  // namespace mmdeploy
