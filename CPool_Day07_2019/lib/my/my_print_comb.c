/*
** EPITECH PROJECT, 2019
** print comb
** File description:
** day 3
*/

#include <unistd.h>

void my_putchar(char c);

void stock(char x, char y, char z)
{
    my_putchar(x);
    my_putchar(y);
    my_putchar(z);
    my_putchar(',');
    my_putchar(' ');
}

int my_print_comb(void)
{
    char x = '0';
    char y = '1';
    char z = '2';

    while (x != '7' && y != '8' && z != '9') {
        stock(x, y, z);
        z++;
        if (z == '9') {
            stock(x, y, z);
            y++;
            z = y + 1;
        }
        if (y == '8') {
            stock(x, y, z);
            x++;
            y = x + 1;
            z = y + 1;
        }
    }
    stock(x, y, z);
    my_putchar('\n');
    return (0);
}
