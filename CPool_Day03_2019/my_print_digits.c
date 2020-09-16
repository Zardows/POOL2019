/*
** EPITECH PROJECT, 2019
** print digits
** File description:
** day 3
*/

#include <unistd.h>

void my_putchar(char c);

int my_print_digits(void)
{
    char x = 48;

    while (x <= 57) {
        my_putchar(x);
        x++;
    }
    return (1);
}
