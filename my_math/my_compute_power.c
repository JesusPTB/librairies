/*
** EPITECH PROJECT, 2019
** Lib My - My_Compute_Power_rec
** File description:
** Return a number at power p
*/

int overflow_check(int a, int b);

int my_compute_power_rec(int nb, int p)
{
    int nb_pow;

    nb_pow = nb;
    if (p == 0)
        return (1);
    if (p < 0)
        return (0);
    nb_pow = nb * my_compute_power_rec(nb, p - 1);
    if (overflow_check(nb_pow, nb) == 1)
        return (0);
    return (nb_pow);
}