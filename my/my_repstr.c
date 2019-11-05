/*
** EPITECH PROJECT, 2019
** Project Name
** File description:
** [file description here]
*/

char *my_strncat(char *dest, char const *src, int n);
char *my_strlcat(char *dest, char const *src, int n);
char *my_strcat(char *dest, char const *src);

char *my_repstr(char *str, char *rep, int first, int last)
{
    char *tmp = malloc(sizeof(str));

    tmp = my_strncat(tmp, str, first - 1);
    tmp = my_strcat(tmp, rep);
    tmp = my_strlcat(tmp, str, last + 1);
    return (tmp);
}