/*
** EPITECH PROJECT, 2019
** my_show_word_array
** File description:
** Day08
*/

#include <unistd.h>

int my_show_word_array(char * const *tab)
{
    int x = 0;

    while (tab[x] != NULL) {
        my_putstr(tab[x]);
        my_putchar('\n');
        x++;
    }
    return (0);
}
