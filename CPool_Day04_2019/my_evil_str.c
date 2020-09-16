/*
** EPITECH PROJECT, 2019
** evil str
** File description:
** Day 4
*/

void my_putchar(char c);
int my_strlen(char const *str);
int my_putstr(char const *str);

char *my_evil_str(char *str)
{
    char tmp;
    int beg = 0;
    int end = my_strlen(str) - 1;

    while (beg < end) {
	tmp = str[beg];
        str[beg] = str[end];
        str[end] = tmp;
	beg++;
        end--;
    }
    for(int i; str[i] != '\0'; i++)
	    my_putchar(str[i]);
    return (str);
}

int main(void)
{
	char *string = strdup("Hello world");
	my_evil_str(string);
}
