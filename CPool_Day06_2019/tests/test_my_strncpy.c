/*
** EPITECH PROJECT, 2019
** test
** File description:
** d6
*/

#include <criterion/criterion.h>

Test(my_strncpy, copy_empty_array)
{
	char dest[6] = {0};

	my_strncpy(dest, "HelloWorld", 5);
	cr_assert_str_eq(dest, "Hello");
}
