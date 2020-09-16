/*
** EPITECH PROJECT, 2019
** test revstr
** File description:
** test
*/

#include <criterion/criterion.h>

char *my_revstr(char *str);

Test(my_revstr, reverse_a_string)
{
	char *str = "Hello";
	char *rslt;

	rslt = my_revstr(strdup(str));
	cr_assert_str_eq(rslt, "olleH");
}
