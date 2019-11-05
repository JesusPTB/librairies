/*
** EPITECH PROJECT, 2019
** TASK 07
** File description:
** [file description here]
*/

void my_putchar(char c);

void my_put_nbr(int n)
{
    unsigned int nb;

    nb = n;
    if (n < 0) {
        my_putchar('-');
        nb = -n;
    }
    if (nb > 9) {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    }
    else
        my_putchar(nb + '0');
}
