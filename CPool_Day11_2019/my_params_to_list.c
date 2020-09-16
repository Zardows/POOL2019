/*
** EPITECH PROJECT, 2019
** my_params_to_list
** File description:
** Day11
*/

#include <stdlib.h>

#include "mylist.h"

linked_list_t *my_params_to_list(int ac, char * const *av)
{
    linked_list_t *list = NULL;
    linked_list_t *replace;
    int x = 0;

    while (x < ac) {
        replace = malloc(sizeof(linked_list_t));
        replace->data = av[x];
        replace->next = list;
        x++;
    }
    return (list);
}