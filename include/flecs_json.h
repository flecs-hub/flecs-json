#ifndef FLECS_JSON_H
#define FLECS_JSON_H

/* This generated file contains includes for project dependencies */
#include "flecs-json/bake_config.h"

#ifdef __cplusplus
extern "C" {
#endif

FLECS_JSON_EXPORT
char* ecs_ptr_to_json(
    ecs_world_t *world, 
    ecs_entity_t type,
    void *ptr);

FLECS_JSON_EXPORT
char* ecs_entity_to_json(
    ecs_world_t *world, 
    ecs_entity_t e,
    ecs_type_t select);

FLECS_JSON_EXPORT
char* ecs_iter_to_json(
    ecs_world_t *world, 
    ecs_iter_t *it,
    ecs_iter_next_action_t iter_next,
    ecs_type_t select);

FLECS_JSON_EXPORT
char* ecs_type_to_json(
    ecs_world_t *world,
    ecs_type_t type);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus

namespace flecs {

template <typename T>
std::string to_json(flecs::world& world, flecs::entity_t type, T& data) {
    char *str = ecs_ptr_to_json(world.c_ptr(), type, &data);
    std::string result = std::string(str);
    free(str);
    return result;
}

template <typename T>
std::string to_json(flecs::world& world, flecs::entity type, T& data) {
    return to_json(world, type.id(), data);
}

template <typename T>
std::string to_json(flecs::world& world, T& data) {
    entity_t type = _::component_info<T>::s_entity;
    return flecs::to_json(world, type, data);
}

template <>
inline std::string to_json<flecs::entity>(flecs::world& world, flecs::entity& entity) {
    char *str = ecs_entity_to_json(world.c_ptr(), entity.id(), nullptr);
    std::string result = std::string(str);
    free(str);
    return result;
}

}

#endif

#endif

