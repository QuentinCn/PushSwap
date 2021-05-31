/*
** EPITECH PROJECT, 2020
** main
** File description:
** main pushswap
*/

#include "include/push_swap.h"

int main(int ac, char **av)
{
    t_list *la = NULL;
    t_list *lb = NULL;

    if (error_handling(ac, av))
        return (84);
    for (int i = 1; av[i]; i += 1)
        la = add_inlist(la, my_getnbr(av[i]), i - 1);
    if (!la || !la->next)
        my_putchar(10);
    else if (check_order(la, lb))
        my_putchar(10);
    else {
        lb = push_swap(la, lb);
        free_list(lb);
    }
    return (0);
}
