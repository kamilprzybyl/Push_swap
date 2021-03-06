#include "push_swap.h"


void rotate(t_list **lst)
{
    t_list      *temp;
    t_list      *last_node;

    temp = *lst;
    last_node = *lst;

    while (last_node->next)
        last_node = last_node->next;

    *lst = (*lst)->next;
    temp->next = NULL;
    last_node->next = temp;
}


void handle_rotate(char *spec, t_list **head_a, t_list **head_b)
{
    if (ft_strcmp("ra", spec) == 0)
    {
        rotate(head_a);
        printf("ra\n");
    }
    else if (ft_strcmp("rb", spec) == 0)
    {
        rotate(head_b);
        printf("rb\n");
    }
    else if (ft_strcmp("rr", spec) == 0)
    {
        rotate(head_a);
        rotate(head_b);
        printf("rr\n");
    }
}