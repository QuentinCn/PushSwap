/*
** EPITECH PROJECT, 2020
** swap
** File description:
** push_swap's swap
*/

#include "../../include/push_swap.h"

t_list *sa(t_list *la)
{
    t_list *tmp;
    t_list *first;

    if (!la->next)
        return (la);
    first = la->next;
    tmp = la->next->next;
    la->next = tmp;
    first->next = la;
    return (first);
}

t_list *sb(t_list *lb)
{
    t_list *tmp;
    t_list *first;

    if (!lb->next)
        return (lb);
    first = lb->next;
    tmp = lb->next->next;
    lb->next = tmp;
    first->next = lb;
    return (first);
}
