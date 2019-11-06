/*
** EPITECH PROJECT, 2019
** my_putstr
** File description:
** function that displays, one-by-one, the characters of a string
*/

int my_strlen(char const *str);
void my_putchar(char c);

int my_putstr(char const *str)
{

    write(1, str, my_strlen(str));
    return (0);
}