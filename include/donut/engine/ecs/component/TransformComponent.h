#pragma once
#include <donut/engine/ecs/component/ComponentBase.h>
#include <donut/core/math/math.h>

namespace donut::engine::ecs {
    struct TransformComponent : ComponentBase {
        dm::dquat    rotation = dm::dquat::identity();
        dm::double3  scaling = 1.0;
        dm::double3  translation = 0.0;
        dm::daffine3 localTransform = dm::daffine3::identity(); // local to parent transform
        dm::daffine3 globalTransform = dm::daffine3::identity(); // local to world transform
        dm::daffine3 prevLocalTransform = dm::daffine3::identity();
        dm::daffine3 prevGlobalTransform = dm::daffine3::identity();
    };
}