#pragma once
#include <donut/engine/ecs/component/ComponentBase.h>
#include <donut/core/math/math.h>

namespace donut::engine::ecs {
    struct BoundsComponent : ComponentBase {
        dm::box3 bounds; // world space global bounding box
    };
}