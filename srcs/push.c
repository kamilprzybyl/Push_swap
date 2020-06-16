#include "push_swap.h"


void push(t_list **src, t_list **dst)
{
    t_list      *temp;

    temp = *src;

    if (*src)
        *src = (*src)->next;
    
    ft_lstadd_front(dst, temp);
}

void handle_push(char *spec, t_list **head_a, t_list **head_b)
{
    if (ft_strcmp("pa", spec) == 0)
    {
        push(head_b, head_a);
        printf("pa\n");
    }
    else if (ft_strcmp("pb", spec) == 0)
    {
        push(head_a, head_b);
        printf("pb\n");
    }
}