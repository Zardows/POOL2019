/*
** EPITECH PROJECT, 2019
** my_strstr
** File description:
** D6
*/

#include <unistd.h>

int find_len(char const *len)
{
    int x = 0;

    while (len[x] != '\0')
        x++;
    return (x);
}

char *my_strstr(char *str, char const *to_find)
{
    int x = 0;
    int end_of_string = find_len(to_find);

    if (*str == '\0')
        return (NULL);
    while (str[x] != to_find[x] && str[x] != '\0')
        str++;
    if (str[x] != '\0') {
        while (str[x] == to_find[x] && str[x] != '\0' && to_find[x] != '\0')
            x++;
        if (x == end_of_string)
            return (str);
        else if (str[x] != '\0')
            return (my_strstr(str + 1, to_find));
        else
            return (NULL);
    } else
        return (NULL);
}
