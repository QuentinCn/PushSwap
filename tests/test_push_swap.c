/*
** EPITECH PROJECT, 2020
** test_101pong
** File description:
** test the push_swap
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/push_swap.h"

Test(push_swap, test_little_unsort)
{
    t_list *la = NULL;
    t_list *lb = NULL;
    t_list *lc = NULL;

    la = add_inlist(la, 2, 0);
    la = add_inlist(la, 1, 1);
    la = add_inlist(la, 3, 2);
    la = add_inlist(la, 4, 3);
    la = add_inlist(la, 5, 4);
    
    lc = add_inlist(lc, 1, 0);
    lc = add_inlist(lc, 2, 1);
    lc = add_inlist(lc, 3, 2);
    lc = add_inlist(lc, 4, 3);
    lc = add_inlist(lc, 5, 4);

    cr_assert_eq(push_swap(la, lb), lc);
}
