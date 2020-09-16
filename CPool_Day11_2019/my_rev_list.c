/*
** EPITECH PROJECT, 2019
** my_rev_list
** File description:
** Day11
*/

#include "mylist.h"

int my_rev_list(linked_list_t **begin)
{
    linked_list_t *actual_list = *begin;
    linked_list_t *swap_tmp = NULL;
    linked_list_t *previous_element;

    while (actual_list->next) {
        previous_element = actual_list->next;
        actual_list->next = swap_tmp;
        swap_tmp = actual_list;
        actual_list = previous_element;
    }
    actual_list->next = swap_tmp;
    *begin = actual_list;
    return (0);
}