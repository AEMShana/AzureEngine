#pragma once
#include <entt/entt.hpp>
#include <donut/engine/ecs/component/IdentityComponent.h>
#include <donut/engine/ecs/component/TransformComponent.h>
#include <donut/engine/ecs/component/BoundsComponent.h>
#include <donut/engine/ecs/component/BasicStateComponent.h>
#include <mutex>
#include <thread>

namespace donut::engine::ecs {

    using GameEntity = entt::registry::entity_type;

    class ECSRegistry {
    private:
        entt::registry m_Registry;
        std::mutex m_Mutex;

    public:
        GameEntity CreateEntity() {
            auto lock = std::lock_guard(m_Mutex);
            auto entity = m_Registry.create();
            return entity;
        }

        void DestroyEntity(GameEntity entity) {
            auto lock = std::lock_guard(m_Mutex);
            m_Registry.destroy(entity);
        }
    };

    extern ECSRegistry g_ECSRegistry;
}