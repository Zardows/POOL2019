/*
** EPITECH PROJECT, 2019
** my_strlowcase
** File description:
** Day06
*/

char *my_strlowcase(char *str)
{
    int i = 0;
    int remove = 'a' - 'A';

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += remove;
        i++;
    }
    return (str);
}
