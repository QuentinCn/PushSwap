/*
** EPITECH PROJECT, 2020
** list_action
** File description:
** action on the list
*/

#include "../../include/push_swap.h"

t_list *add_inlist(t_list *list, int data, int pos)
{
    t_list *prev = list;
    t_list *curr = list;
    t_list *cell = create_cell(data);

    if (!list)
        return (cell);
    if (pos == 0) {
        cell->next = list;
        return (cell);
    }
    for (int i = 0; i < pos; i += 1) {
        prev = curr;
        curr = curr->next;
    }
    prev->next = cell;
    cell->next = curr;
    return (list);
}

t_list *get_inlist(t_list *list, int pos)
{
    for (int i = 0; i < pos; i += 1)
        list = list->next;
    return (list);
}

int len_list(t_list *list)
{
    int i = 0;

    for (; list; i += 1)
        list = list->next;
    return (i);
}

t_list *free_inlist(t_list *list, int pos)
{
    t_list *prev = list;
    t_list *curr = list;

    if (pos == 0) {
        curr = list->next;
        free(list);
        return (curr);
    }
    for (int i = 0; i < pos; i += 1) {
        prev = curr;
        curr = curr->next;
    }
    prev->next = curr->next;
    free(curr);
    return (list);
}
