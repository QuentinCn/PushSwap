/*
** EPITECH PROJECT, 2020
** push_swap.h
** File description:
** .h of push_swap
*/

#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct s_list
{
    long int data;
    struct s_list *next;
}t_list;

typedef struct s_rep
{
    t_list *la;
    t_list *lb;
    char *result;
}t_rep;

int my_strlen(char *str);
char *my_strcat(char *str1, char *str2);
long long int my_getnbr(char *nbr);
int my_put_nbr(long int nb);
void my_putchar(char c);
t_list *push_swap(t_list *la, t_list *lb);
t_list *add_inlist(t_list *list, int data, int pos);
t_list *get_inlist(t_list *list, int pos);
t_list *free_inlist(t_list *list, int pos);
int len_list(t_list *list);
t_list *create_cell(int data);
t_list *free_list(t_list *list);
void print_list(t_list *list);
t_list *sa(t_list *la);
t_list *sb(t_list *lb);
t_list *pa(t_list *la, t_list *lb);
t_list *pb(t_list *la, t_list *lb);
t_list *ra(t_list *la);
t_list *rb(t_list *lb);
t_list *rra(t_list *la);
t_list *rrb(t_list *lb);
int my_putstr(char *str);
int check_order(t_list *la, t_list *lb);
int error_handling(int ac, char **av);
