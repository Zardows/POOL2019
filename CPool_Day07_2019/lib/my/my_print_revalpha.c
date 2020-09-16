/*
** EPITECH PROJECT, 2019
** revalpha
** File description:
** day 3
*/

#include <unistd.h>

void my_putchar(char c);

int my_print_revalpha(void)
{
    char x = 122;

    while (x >= 97) {
        my_putchar(x);
        x--;
    }
    return (1);
}
