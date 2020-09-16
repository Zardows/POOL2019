/*
** EPITECH PROJECT, 2019
** my_strupcase
** File description:
** Day06
*/

char *my_strupcase(char *str)
{
     int x = 0;
     int add = 'A' - 'a';

     while (str[x] == '\0') {
          if (str[x] >= 'A' && str[x] <= 'Z')
               str[x] += add;
          x++;
     }
     return (str);
}
