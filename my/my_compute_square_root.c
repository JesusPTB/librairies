/*
** EPITECH PROJECT, 2019
** Square_root
** File description:
** [file description here]
*/

int my_compute_square_root(int nb)
{
    int root = 1;
    int found = 0;
    int perfect_square = 0;

    while (root <= (nb / root) && found == 0) {
        perfect_square = root * root;
        if (perfect_square == nb)
            found = 1;
        else
            root++;
    }
    if (found == 1)
        return (root);
    return (0);
}