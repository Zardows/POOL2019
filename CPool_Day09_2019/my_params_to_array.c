/*
** EPITECH PROJECT, 2019
** my_params_to_array
** File description:
** Day09
*/

#include "my.h"
#include "struct.h"
#include <unistd.h>
#include <stdlib.h>

struct info_param put_info_in_struct(char *str)
{
    struct info_param x_param;

    x_param.length = my_strlen(str);
    x_param.str = str;
    x_param.copy = my_strdup(str);
    x_param.word_array = my_str_to_word_array(str);
    return (x_param);
}

struct info_param *my_params_to_array(int ac, char **av)
{
    struct info_param *info_param = malloc(sizeof(struct info_param) * ac);
    int x = 0;

    while (x != ac) {
        info_param[x] = put_info_in_struct(av[x]);
        x++;
    }
    info_param[x].length = -1;
    info_param[x].str = NULL;
    info_param[x].copy = NULL;
    info_param[x].word_array = NULL;
    return (info_param);
}