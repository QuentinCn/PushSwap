/*
** EPITECH PROJECT, 2020
** list_creation
** File description:
** create, print & free a list
*/

#include "../../include/push_swap.h"

t_list *create_cell(int data)
{
    t_list *cell = malloc(sizeof(*cell));

    cell->data = data;
    cell->next = NULL;
    return (cell);
}

t_list *free_list(t_list *list)
{
    t_list *tmp = NULL;

    while (list) {
        tmp = list->next;
        free(list);
        list = tmp;
    }
    return (list);
}

void print_list(t_list *list)
{
    while (list) {
        my_put_nbr(list->data);
        my_putchar(' ');
        list = list->next;
    }
}
