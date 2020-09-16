/*
** EPITECH PROJECT, 2019
** my_concat_params
** File description:
** Day08
*/

#include <stdlib.h>

int get_len_param(int ac, char **av)
{
    int x = 0;
    int size = 0;

    while (x != ac) {
            size += my_strlen(av[x] + 1);
            x++;
    }
    return (size);
}

char *concat_params(int argc, char **argv)
{
    char *stack_memory = malloc(sizeof(char) * (get_len_param(argc, argv) + 1));
    int x = 0;
    int y = 0;
    int z = 0;

    while (x != argc) {
        y = 0;
        while (argv[x][y] != '\0') {
            stack_memory[z] = argv[x][y];
            z++;
            y++;
        }
        stack_memory[z] = '\n';
        x++;
        z++;
    }
    stack_memory[--z] = '\0';
    return (stack_memory);
}
