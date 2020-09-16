/*
** EPITECH PROJECT, 2019
** print alpha
** File description:
** day 3
*/

#include <unistd.h>

void my_putchar(char c);

int my_print_alpha(void)
{
    char x = 97;

    while (x <= 122) {
        my_putchar(x);
        x++;
    }
    return (1);
}
