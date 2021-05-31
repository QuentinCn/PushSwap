/*
** EPITECH PROJECT, 2020
** push_swap
** File description:
** sort a list of number
*/

#include "include/push_swap.h"

int check_order(t_list *la, t_list *lb)
{
    while (la->next) {
        if (la->data > la->next->data) {
            return (0);
        }
        la = la->next;
    }
    if (!lb)
        return (1);
    while (lb->next) {
        if (lb->data < lb->next->data) {
            return (0);
        }
        lb = lb->next;
    }
    return (1);
}

t_rep change_la(t_rep rep, char **disp)
{
    if (rep.la->next)
        if (rep.la->data > rep.la->next->data) {
            rep.la = sa(rep.la);
            *disp = my_strcat(*disp, "sa ");
        }
    rep.lb = pb(rep.la, rep.lb);
    rep.la = free_inlist(rep.la, 0);
    *disp = my_strcat(*disp, "pb ");
    if (rep.lb->next)
        if (rep.lb->data < rep.lb->next->data) {
            rep.lb = sb(rep.lb);
            *disp = my_strcat(*disp, "sb ");
        }
    return (rep);
}

t_rep change_lb(t_rep rep, char **disp)
{
    if (rep.lb->next)
        if (rep.lb->data < rep.lb->next->data) {
            rep.lb = sb(rep.lb);
            *disp = my_strcat(*disp, "sb ");
        }
    rep.la = pa(rep.la, rep.lb);
    rep.lb = free_inlist(rep.lb, 0);
    *disp = my_strcat(*disp, "pa ");
    if (rep.la->next)
        if (rep.la->data > rep.la->next->data) {
            rep.la = sa(rep.la);
            *disp = my_strcat(*disp, "sa ");
        }
    return (rep);
}

t_list *push_swap(t_list *la, t_list *lb)
{
    char *disp = malloc(sizeof(char) * 500);
    int len = len_list(la);
    t_rep rep = {la, lb};
    int lenrest = 1;

    while (!check_order(rep.la, rep.lb)) {
        for (int i = len - lenrest; i > 0; i -= 1)
            rep = change_la(rep, &disp);
        lenrest += 1;
        for (int i = len - lenrest; i > 0; i -= 1)
            rep = change_lb(rep, &disp);
        lenrest += 1;
    }
    while (rep.lb) {
        rep.la = pa(rep.la, rep.lb);
        rep.lb = free_inlist(rep.lb, 0);
        disp = my_strcat(disp, "pa ");
    }
    write(1, disp, my_strlen(disp) - 1);
    my_putchar(10);
    free(disp);
    return (rep.la);
}
