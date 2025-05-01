#pragma once
#include <donut/engine/ecs/component/ComponentBase.h>
#include <string>

namespace donut::engine::ecs {
    struct BasicStateComponent : ComponentBase {
        bool isVisible = true;
        bool shouldUpdate = true;
    };
}