/*
** EPITECH PROJECT, 2019
** compute factorial
** File description:
** factorial count
*/

int my_compute_factorial(int nb)
{
    int i = 1;
    int stock = 1;

    if (nb < 0 || nb > 12)
        return (0);
    if (nb == 0)
        return (1);
    while (i != nb + 1) {
        stock *= i;
        i++;
    }
    return (stock);
}
