#include "baobzi_template.hpp"
#include "baobzi.h"
#include "baobzi/macros.h"

namespace baobzi {
template
typename Function<3, 8, 2>::VecOrderD Function<3, 8, 2>::cosarray_;
template
Eigen::PartialPivLU<typename Function<3, 8, 2>::VanderMat> Function<3, 8, 2>::VLU_;
}

extern "C" {
BAOBZI_DEFS(3, 8, 2)
}
