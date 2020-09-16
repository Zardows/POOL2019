/*
** EPITECH PROJECT, 2019
** revstr
** File description:
** D6
*/

char *my_revstr(char *str)
{
    int i = 0;
    int front = 0;
    char tmp;

    while (str[front] != '\0')
        front++;
    front--;
    while (i < front) {
        tmp = str[front];
        str[front] = str[i];
        str[i] = tmp;
        i++;
        front--;
    }
    return (str);
}
