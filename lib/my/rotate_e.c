/*
** EPITECH PROJECT, 2020
** rotate_e
** File description:
** push_swap's rotation from the end
*/

#include "../../include/push_swap.h"

t_list *rra(t_list *la)
{
    la = add_inlist(la, get_inlist(la, len_list(la) - 1)->data, 0);
    la = free_inlist(la, len_list(la) - 1);
    return (la);
}

t_list *rrb(t_list *lb)
{
    lb = add_inlist(lb, get_inlist(lb, len_list(lb) - 1)->data, 0);
    lb = free_inlist(lb, len_list(lb) - 1);
    return (lb);
}
