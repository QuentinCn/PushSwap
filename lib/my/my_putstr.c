/*
** EPITECH PROJECT, 2020
** my_putstr.c
** File description:
** display a string
*/

#include <unistd.h>

void my_putchar(char c);

int my_strlen(char *str);

int my_putstr(char *str)
{
    write(1, str, my_strlen(str));
    return (0);
}
