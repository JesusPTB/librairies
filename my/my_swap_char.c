/*
** EPITECH PROJECT, 2019
** my_swap_char
** File description:
** function that swap two characters
*/

void my_swap_char(char *a, char *b)
{
    char c;

    c = *a;
    *a = *b;
    *b = c;
}