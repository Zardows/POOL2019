/*
** EPITECH PROJECT, 2019
** my_h
** File description:
** Day09
*/

#ifndef MY_H_
#define MY_H_

int my_is_prime(int nb);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_str_isalpha(char const *str);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
int my_str_isprintable(char const *str);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);

#endif /* !MY_H_ */