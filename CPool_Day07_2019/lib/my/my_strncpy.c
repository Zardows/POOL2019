/*
** EPITECH PROJECT, 2019
** my_strncpy
** File description:
** d6
*/

char *my_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	while (x != n) {
		dest[x] = src[x];
		x++;
		if (src[x] == '\0')
			dest[x] = '\0';
		}
	return (dest);
}
