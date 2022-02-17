#include "baobzi_template.hpp"
#include "baobzi.h"
#include "baobzi/macros.h"

namespace baobzi {
template
typename Function<2, 12, 3>::CoeffVec Function<2, 12, 3>::cosarray_;
template
Eigen::PartialPivLU<typename Function<2, 12, 3>::VanderMat> Function<2, 12, 3>::VLU_;
}

extern "C" {
BAOBZI_DEFS(2, 12, 3)
}
