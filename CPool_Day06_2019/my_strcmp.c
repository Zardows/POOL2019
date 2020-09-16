/*
** EPITECH PROJECT, 2019
** my_strcmp
** File description:
** Day06
*/

int my_strcmp(char const *s1, char const *s2)
{
    int x = 0;

    while (s1[x] == s2[x] && s1[x] != '\0' && s2[x] != '\0')
        x++;
    return (s1[x] - s2[x]);
}
