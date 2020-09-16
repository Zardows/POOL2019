/*
** EPITECH PROJECT, 2019
** strlen 
** File description:
** day 4
*/

int my_strlen(char const *str)
{
    int x = 0;

    while (str[x] != '\0')
        x++;
    return (x);
}
