/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myrunner-mattis.dalleau
** File description:
** enemy
*/

#pragma once

#ifndef __RUNNER__ENEMY__H__
    #define __RUNNER__ENEMY__H__

    enum {
        PHANTOM,
        NINJA,
        MUSHROOM,
        SLIME
    };

    enum {
        IDLE,
        ACTION,
    };

    typedef struct enemy_info {
        int id;
        int index;
    } enemy_info_t;

    typedef struct enemy_st {
        frame_t frame;
        sfSprite *sprite;
        int8_t enemy_id;
        u_int8_t state;
        entity_t info;
    } enemy_t;

    #define NB_ENEMY                4
    #define INF_ARR_ENEMY_SIZE      5
    #define PHANTOM_SPRITE_SHEET    "asset/phantom.png"
    #define MUSHROOM_SPRITE_SHEET   "asset/vania/enemy/mushroom/sheet.png"
    #define NINJA_SPRITE_SHEET      "asset/ninja_sheet.png"
    #define SLIME_SPRITE_SHEET      "asset/vania/enemy/slime/sheet.png"

    #define GROUND_HEIGHT_MUSHROOM  677
    #define GROUND_HEIGHT_NINJA     650
    #define GROUND_HEIGHT_SLIME     691
    #define GROUND_HEIGHT_PHANTOM   570
#endif