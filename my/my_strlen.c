/*
** EPITECH PROJECT, 2019
** my_strlen
** File description:
** function that counts and returns
** the number of characters found in
** the string passed as parameter
*/

void my_putchar(char c);

int my_strlen(char const *str)
{
    int nb_char = 0;

    while (str[nb_char] != '\0'){

        nb_char++;
    }

    return (nb_char);
}