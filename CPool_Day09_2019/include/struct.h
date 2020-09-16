/*
** EPITECH PROJECT, 2019
** struct.h
** File description:
** Day09
*/

#ifndef STRUCT_H_
#define STRUCT_H_

struct info_param
{
    int lenght;
    char *str;
    char *copy;
    char **word_array;
};

struct info_param *my_params_to_array(int, char **);

#endif /* !STRUCT_H_ */
