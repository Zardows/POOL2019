/*
** EPITECH PROJECT, 2019
** mylist.h
** File description:
** Day11
*/

#ifndef MYLIST_H_
#define MYLIST_H_

#include <unistd.h>
#include <stdio.h>

typedef struct linked_list {
    void *data;
    struct linked_list *next;
} linked_list_t ;

#endif /* !MYLIST_H_ */
