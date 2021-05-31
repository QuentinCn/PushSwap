/*
** EPITECH PROJECT, 2020
** move
** File description:
** push_swap's move
*/

#include "../../include/push_swap.h"

t_list *pa(t_list *la, t_list *lb)
{
    if (!lb)
        return (la);
    la = add_inlist(la, get_inlist(lb, 0)->data, 0);
    return (la);
}

t_list *pb(t_list *la, t_list *lb)
{
    if (!la)
        return (lb);
    lb = add_inlist(lb, get_inlist(la, 0)->data, 0);
    return (lb);
}
