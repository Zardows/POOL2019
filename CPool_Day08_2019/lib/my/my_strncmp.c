/*
** EPITECH PROJECT, 2019
** my_strncmp
** File description:
** Day06
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int x = 0;

    while (x != n - 1 && s1[x] == s2[x] && s1[x] != '\0' && s2[x] != '\0')
        x++;
    return (s1[x] - s2[x]);
}
