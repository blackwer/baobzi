#include "baobzi_template.hpp"
#include "baobzi.h"
#include "baobzi/macros.h"

namespace baobzi {
template
typename Function<3, 14, 1>::CoeffVec Function<3, 14, 1>::cosarray_;
template
Eigen::PartialPivLU<typename Function<3, 14, 1>::VanderMat> Function<3, 14, 1>::VLU_;
}

extern "C" {
BAOBZI_DEFS(3, 14, 1)
}
