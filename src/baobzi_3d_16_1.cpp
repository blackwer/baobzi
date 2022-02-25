#include "baobzi_template.hpp"
#include "baobzi.h"
#include "baobzi/macros.h"

namespace baobzi {
template
typename Function<3, 16, 1>::VecOrderD Function<3, 16, 1>::cosarray_;
template
Eigen::PartialPivLU<typename Function<3, 16, 1>::VanderMat> Function<3, 16, 1>::VLU_;
}

extern "C" {
BAOBZI_DEFS(3, 16, 1)
}
