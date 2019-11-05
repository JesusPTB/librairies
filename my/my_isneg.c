/*
** EPITECH PROJECT, 2019
** Task 04
** File description:
** Write a function that displays either
** N if the integer passed as parameter is negative, P, if positive or null.
*/
void my_putchar(char c);

int my_isneg(int n)
{
    if (n >= 0)
        my_putchar('P');
    else
        my_putchar('N');
    my_putchar('\n');
    return (0);
}
