/*
** EPITECH PROJECT, 2019
** my_list_size.c
** File description:
** Day11
*/

#include "mylist.h"

int my_list_size(linked_list_t const *begin)
{
    int how_many_arguments = 0;

    while (begin != NULL) {
        begin = begin->next;
        how_many_arguments++;
    }
    return (how_many_arguments);
}