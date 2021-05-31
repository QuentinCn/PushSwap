/*
** EPITECH PROJECT, 2020
** rotate_f
** File description:
** push_swap's rotation from first to last
*/

#include "../../include/push_swap.h"

t_list *ra(t_list *la)
{
    la = add_inlist(la, get_inlist(la, 0)->data, len_list(la));
    la = free_inlist(la, 0);
    return (la);
}

t_list *rb(t_list *lb)
{
    lb = add_inlist(lb, get_inlist(lb, 0)->data, len_list(lb));
    lb = free_inlist(lb, 0);
    return (lb);
}
