/*
** EPITECH PROJECT, 2020
** my_strcat
** File description:
** concate two string
*/

#include "../../include/push_swap.h"

char *my_strcat(char *str1, char *str2)
{
    int len = my_strlen(str1);

    if (len > 500) {
        my_putstr(str1);
        str1[0] = '\0';
        len = 0;
    }
    for (int i = 0; str2[i] != '\0'; i += 1, len += 1) {
        str1[len] = str2[i];
    }
    str1[len] = '\0';
    return (str1);
}
