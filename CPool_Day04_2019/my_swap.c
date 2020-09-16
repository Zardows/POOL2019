/*
** EPITECH PROJECT, 2019
** my swap
** File description:
** swap
*/

void my_swap(int *a, int *b)
{
    int h = *b;

    *b = *a;
    *a = h;
}
