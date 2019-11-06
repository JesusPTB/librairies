/*
** EPITECH PROJECT, 2019
** Lib My - My_Absolute_Value
** File description:
** Return the absolute value of a number
*/

int my_compute_square_root(int nb);

int my_absolute_value(int nb)
{
    nb = my_compute_square_root(nb * nb);
    return nb;
}