/*
** EPITECH PROJECT, 2019
** my_str_to_word_array
** File description:
** Day08
*/

#include <stdlib.h>
#include <unistd.h>

int check_num_and_alpha(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1);
    else
        return (0);
}

int count_words(char const *str)
{
    int x = 0;
    int count = 0;

    while (str[x] != '\0') {
        if (check_num_and_alpha(str[x]) == 1)
            count++;
        while (check_num_and_alpha(str[x]) == 1 && str[x] != '\0')
            x++;
        if (str[x] != '\0')
            x++;
    }
    return (count);
}

int get_len_word(char const *str, int i)
{
    int size = 0;

    while (check_num_and_alpha(str[i]) == 1) {
        i++;
        size++;
    }
    return (size);
}

char **my_str_to_word_array(char const *str)
{
    char **memory = malloc(sizeof(char *) * (count_words(str) + 1));
    int x = 0;
    int y = 0;
    int z = 0;

    while (x != count_words(str)) {
        z = 0;
        while (check_num_and_alpha(str[y]) == 0)
            y++;
        memory[x] = malloc(sizeof(char) * (get_len_word(str, y) + 1));
        while (check_num_and_alpha(str[y]) == 1) {
            memory[x][z] = str[y];
            z++;
            y++;
        }
        memory[x][z] = '\0';
        x++;
    }
    memory[x] = NULL;
    return (memory);
}
