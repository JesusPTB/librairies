/*
** EPITECH PROJECT, 2019
** My_revstr
** File description:
** [file description here]
*/

int my_strlen(char const *str);

void my_swap_char(char *a, char *b);

char *my_revstr(char *str)
{
    int nb_char;
    int i;

    i = 0;
    nb_char = my_strlen(str) - 1;
    while (i <= (nb_char / 2)){
        my_swap_char(str + i, str + nb_char - i);
        i++;
    }
    return (str);
}