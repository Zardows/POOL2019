/*
** EPITECH PROJECT, 2019
** my_apply_on_nodes.c
** File description:
** Day11
*/

#include "mylist.h"

int my_apply_on_nodes(linked_list_t *begin, int (*f)(void *))
{
    while (begin != NULL) {
        f(begin->data);
        begin = begin->next;
    }
    return (0);
}