/*
** EPITECH PROJECT, 2019
** my_rev_params
** File description:
** Day07
*/

void my_rev_params(int ac, char **av)
{
    int x = ac - 1;

    while (x != -1) {
        my_putstr(av[x]);
        my_putchar('\n');
        x--;
    }
}

int main(int ac, char **av)
{
    my_rev_params(ac, av);
    return (0);
}
