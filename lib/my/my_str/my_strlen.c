/*
** EPITECH PROJECT, 2020
** my_strlen.c
** File description:
** get len of a string
*/

#include <stddef.h>

size_t my_strlen(char const *str)
{
    size_t i = 0;

    if (str) {
        while (str[i] != '\0') {
            i++;
        }
    }
    return (i);
}
