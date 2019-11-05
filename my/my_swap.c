/*
** EPITECH PROJECT, 2019
** my_swap
** File description:
** function that swaps the content of two integers,
** whose addresses are given as a parameter
*/

void my_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}