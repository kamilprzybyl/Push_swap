#include "push_swap.h"


void reverse_rotate(t_list **lst)
{
    t_list      *pre_last;
    t_list      *last_node;

    pre_last = *lst;
    last_node = *lst;

    while (last_node->next)
        last_node = last_node->next;

    while (pre_last->next != last_node)
        pre_last = pre_last->next;

    pre_last->next = NULL;
    last_node->next = *lst;

    *lst = last_node;
}

void handle_reverse_rotate(char *spec, t_list **head_a, t_list **head_b)
{
    if (ft_strcmp("rra", spec) == 0)
    {
        reverse_rotate(head_a);
        printf("rra\n");
    }
    else if (ft_strcmp("rrb", spec) == 0)
    {
        reverse_rotate(head_b);
        printf("rrb\n");
    }
    else if (ft_strcmp("rrr", spec) == 0)
    {
        reverse_rotate(head_a);
        reverse_rotate(head_b);
        printf("rrr\n");
    }
}