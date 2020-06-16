#include "push_swap.h"


void swap(t_list **lst)
{
    t_list      *temp;

    temp = *lst;

    temp = temp->next;
    (*lst)->next = temp->next;
    temp->next = *lst;

    *lst = temp;
}


void handle_swap(char *spec, t_list **head_a, t_list **head_b)
{
    if (ft_strcmp("sa", spec) == 0)
    {
        swap(head_a);
        printf("sa\n");
    }
    else if (ft_strcmp("sb", spec) == 0)
    {
        swap(head_b);
        printf("sb\n");
    }
    else if (ft_strcmp("ss", spec) == 0)
    {
        swap(head_a);
        swap(head_b);
        printf("ss\n");
    }    
}