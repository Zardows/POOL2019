/*
** EPITECH PROJECT, 2019
** do-op
** File description:
** Day10
*/

int check_num(char **av)
{
    int i = 0;
    int k = 0;
    int j = 0;
    char *stock = 0;

    if (av[i][k] >= '0' && av[i][k] <= '9') {
        stock[j] = av[i][k];
        k++;
        j++;
    }
    if (av[i][k + 1] >= '0' && av[i][k + 1] <= '9')
        check_num(av[i][k + 1]);
    else
        return (0);
    return (1);
}

int put_calculator(char **av)
{
    return (0);
}