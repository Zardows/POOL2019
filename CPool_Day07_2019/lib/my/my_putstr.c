/*
** EPITECH PROJECT, 2019
** putstr
** File description:
** day 4
*/

int my_putchar(char c);

int my_putstr(char const *str)
{
    int x = 0;

    while (str[x] != '\0') {
        my_putchar(str[x]);
	x++;
    }
    return (0);
}
