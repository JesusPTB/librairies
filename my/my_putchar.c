/*
** EPITECH PROJECT, 2019
** my_putchar
** File description:
** function my_putchar for Day03
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}