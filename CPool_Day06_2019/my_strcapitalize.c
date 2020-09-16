/*
** EPITECH PROJECT, 2019
** my_strcapitalize
** File description:
** Day06
*/

int num_reader(char c)
{
    if (c >= 97 && c <= 122 || c >= 65 && c <= 90)
        return (1);
    else if (c >= 48 && c <= 57)
        return (1);
    else
        return (0);
}

char my_strupcase_change(char *str, int i)
{
    int remove = 32;

    if (i != 0) {
        if (num_reader(str[i - 1]) == 0)
            return (str[i] += remove);
        else
            return (str[i]);
    } else
        return (str[i] += remove);
}

char my_strlowcase_change(char *str, int i)
{
    int add = 32;

    if (i != 0) {
        if (num_reader(str[i - 1]) == 1)
            return (str[i] += add);
        else
            return (str[i]);
    } else
        return (str[i]);
}

char *my_strcapitalize(char *str)
{
    int i = 0;
    int remove = 32;

    while (str[i] != '\0') {
        if (str[i] >= 97 && str[i] <= 122)
            str[i] = my_strlowcase_change(str, i);
        else if (str[i] >= 65 && str[i] <= 90)
            str[i] = my_strlowcase_change(str, i);
        i += 1;
    }
    return (str);
}
