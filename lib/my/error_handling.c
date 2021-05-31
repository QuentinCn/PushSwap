/*
** EPITECH PROJECT, 2020
** error_handling
** File description:
** handle error
*/

#include "../../include/push_swap.h"

int error_handling(int ac, char **av)
{
    if (ac < 2)
        return (1);
    for (int i = 1; av[i]; i += 1) {
        for (int j = 0; av[i][j] != '\0'; j += 1) {
            if (av[i][j] == '-' && j != 0)
                return (1);
            if ((av[i][j] < '0' || av[i][j] > '9') && av[i][j] != '-')
                return (1);
            if (my_getnbr(av[i]) == 0 && av[i][0] != '0')
                return (1);
        }
    }
    return (0);
}
