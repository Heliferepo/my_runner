/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myrunner-mattis.dalleau
** File description:
** free_all
*/

#include <my_runner/free.h>

void free_all(scene_t *scene, game_manager_t *manager)
{
    destroy_background(scene);
    destroy_music(scene);
    destroy_enemy_textures(scene);
    destroy_player(scene);
    destroy_enemy_array(scene);
    destroy_menu(scene);
    destroy_manager(manager);
}