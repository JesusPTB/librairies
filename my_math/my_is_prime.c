/*
** EPITECH PROJECT, 2019
** my_is_prime
** File description:
** [file description here]
*/

int my_is_prime(int nb)
{
    if (nb < 2)
        return (0);
    if (nb == 2)
        return (1);
    if (nb % 2 == 0)
        return (0);
    for (int i = 3;i <= (nb / i); i++) {
        if (nb % i == 0)
            return (0);
    }
    return (1);
}