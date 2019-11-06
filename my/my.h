/*
** EPITECH PROJECT, 2019
** Lib My
** File description:
** Prototypes of functions from the library.
*/

#ifndef _MY_H_

#define _MY_H_

void my_putchar(char c);
int my_getnbr(char const *str);
void my_put_nbr(int n);
int my_putstr(char const *str);
char *my_revstr(char *str);
int my_str_showmem(char const *str, int size);
int my_str_showstr(char const *str);
void my_sort_in_array(int *tab, int size);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char const *src);
int my_strcmp(const char *s1, const char *s2);
char *my_strcpy(char *dest, char const *src);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, char const *src, int n);
int my_strncmp(const char *s1, const char *s2, int n);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strstr(char *str, char const *to_find);
char *my_strupcase(char *str);
void my_swap(int *a, int *b);
void my_swap_char(char *a, char *b);
int my_show_word_array(char * const *tab);
char *my_strlcat(char *dest, char const *src, int n);

#endif