/*
** EPITECH PROJECT, 2019
** isneg
** File description:
** day 3
*/

#include <unistd.h>

void my_putchar(char c);

int my_isneg(int n)
{
    if (n < 0)
        my_putchar('N');
    else
        my_putchar('P');
    return (1);
}
