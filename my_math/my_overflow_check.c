/*
** EPITECH PROJECT, 2019
** Overflow Check
** File description:
** Check if the variable
** will not overflow after a calcul
*/

#include <limits.h>

int my_absolute_value(int nb);

int overflow_check(int a, int b)
{
    a = my_absolute_value(a);
    b = my_absolute_value(b);
    if (b > 0 && a > INT_MAX / b)
        return (1);
    else
        return (0);
}