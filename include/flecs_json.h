#ifndef FLECS_JSON_H
#define FLECS_JSON_H

/* This generated file contains includes for project dependencies */
#include "flecs-json/bake_config.h"

#ifdef __cplusplus
extern "C" {
#endif

char* ecs_ptr_to_json(
    ecs_world_t *world, 
    ecs_entity_t type,
    void *ptr);

char* ecs_entity_to_json(
    ecs_world_t *world, 
    ecs_entity_t e);

char* ecs_filter_to_json(
    ecs_world_t *world, 
    ecs_filter_t *filter);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus

namespace flecs {

template <typename T>
std::string to_json(flecs::world& world, T& data) {
    entity_t type = component_base<T>::s_entity;
    char *str = ecs_ptr_to_json(world.c_ptr(), type, &data);
    std::string result = std::string(str);
    free(str);
    return result;
}

template <>
std::string to_json<flecs::entity>(flecs::world& world, flecs::entity& entity) {
    char *str = ecs_entity_to_json(world.c_ptr(), entity.id());
    std::string result = std::string(str);
    free(str);
    return result;
}

template <>
std::string to_json<flecs::entity>(flecs::world& world, flecs::filter& filter) {
    char *str = ecs_filter_to_json(world.c_ptr(), filter.c_ptr());
    std::string result = std::string(str);
    free(str);
    return result;
}

}

#endif

#endif

