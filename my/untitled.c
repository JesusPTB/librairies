/*
** EPITECH PROJECT, 2019
** Lib My - My_atoi
** File description:
** Reproduce the behavior of atoi function
*/

int my_atoi(char *str)
{
    int i = 0;
    int number = 0;
    int sign = 1;

    if (str[0] == '-' || str[0] == '+') {
        i = 1;
        sign = (str[0] == '-') ? 1 : -1 ;
    }
    for (; str[i] >= '0' && str[i] <= '9'; i++)
        number = number * 10 + str[i] - '0';
    return (number * sign);
}