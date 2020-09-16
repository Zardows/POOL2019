/*
** EPITECH PROJECT, 2019
** my_strdup
** File description:
** Day 08
*/

char *my_strdup(char const *src)
{
    char *mem_size = malloc(sizeof(char) * (my_strlen(src) + 1));
    int x = 0;

    while (src[x] != '\0') {
        mem_size[x] = src[x];
        x++;
    }
    mem_size[x] = '\0';
    return (mem_size);
}
