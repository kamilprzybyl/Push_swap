#include "push_swap.h"


void sort(t_list **head_a, t_list **head_b, int ac)
{
    int         i;
    int         min_idx;
    int         middle;
    int         lst_len;

    lst_len = ac - 1;
    while (*head_a && lst_len > 1)
    {
        i = 0;
        middle = lst_len / 2;
        min_idx = ft_min_idx(*head_a);

        if (ft_issorted(*head_a))
            break;

        if (min_idx <= middle)
            while (i++ < min_idx)
                handle_rotate("ra", head_a, head_b);
        else
            while (i++ < (lst_len - min_idx))
                handle_reverse_rotate("rra", head_a, head_b);

        handle_push("pb", head_a, head_b);
        lst_len--;
    }
    while (*head_b)
        handle_push("pa", head_a, head_b);
}


int push_swap(int ac, char **av)
{
    t_list      *head_a; 
    t_list      *head_b;
    t_list      *temp;
    int         i;

    head_a = NULL; 
    head_b = NULL;
    i = 1;

    while (i < ac)
    {
        temp = ft_lstnew(av[i], ft_strlen(av[i]));
        ft_lstadd_back(&head_a, temp);  
        i++;  
    }

    print_stacks(head_a, head_b);
    sort(&head_a, &head_b, ac);
    print_stacks(head_a, head_b);

    return (0);
}


int main(int ac, char **av)
{
    push_swap(ac, av);

    return (0);
}