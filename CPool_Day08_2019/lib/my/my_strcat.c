/*
** EPITECH PROJECT, 2019
** m y _ s t r c a t
** File description:
** lib
*/

char *my_strcat(char *dest, char const *src)
{
    int i = my_strlen(dest);
    int x = 0;

    while (src[x] != '\0') {
        dest[i] = src[x];
        i++;
        x++;
    }
    dest[i] = '\0';
    return (dest);
}
