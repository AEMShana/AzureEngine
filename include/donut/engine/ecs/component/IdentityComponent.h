#pragma once
#include <donut/engine/ecs/component/ComponentBase.h>
#include <string>

namespace donut::engine::ecs {
    struct IdentityComponent : ComponentBase {
        std::string name;
    };
}