/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myrunner-mattis.dalleau
** File description:
** draw_forest
*/

#include <my_runner/runner.h>
#include <my_runner/scene.h>

void draw_forest(scene_t *scene, game_manager_t *manager)
{
    sfTime time_struct = sfClock_getElapsedTime(manager->clock);
    float seconds = sfTime_asSeconds(time_struct);

    FOR_EACH_PARRALAX(i, NB_PARA_FOREST) {
        sfSprite_setTextureRect(scene->world.forest.para[i].layer,
            IRECT(seconds * (i * 30) + i * 30 + 5 + 120, 0, 512, 256));
        DRAW_SPRITE(manager->window, scene->world.forest.para[i].layer);
    }
}