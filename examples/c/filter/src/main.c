#include <filter.h>

ECS_STRUCT(Position, {
    float x;
    float y;
});

ECS_ENUM(Color, {
    Red,
    Green,
    Blue
});

int main(int argc, char *argv[]) {
    ecs_world_t *world = ecs_init_w_args(argc, argv);

    ECS_IMPORT(world, FlecsMeta);

    ECS_META(world, Position);
    ECS_META(world, Color);

    for (int i = 0; i < 10; i ++) {
        ecs_entity_t e = ecs_new(world, 0);
        ecs_set(world, e, Position, {i, i * 2});
        ecs_set(world, e, Color, {i % 3});
    }

    ecs_filter_t filter = {
        .include = ecs_type(Position)
    };

    char *str = ecs_filter_to_json(world, &filter);
    printf("%s\n", str);
    free(str);

    return ecs_fini(world);
}
