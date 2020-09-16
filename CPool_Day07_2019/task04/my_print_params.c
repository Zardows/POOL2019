/*
** EPITECH PROJECT, 2019
** my_print_params
** File description:
** Day07
*/

void my_print_params(int ac, char **av)
{
    int x = 0;

    while (x != ac) {
        my_putstr(av[x]);
        my_putchar('\n');
        x++;
    }
}

int main(int ac, char **av)
{
    my_print_params(ac, av);
    return (0);
}
