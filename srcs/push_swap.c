#include "push_swap.h"

void swap(t_list **lst)
{
    t_list *temp;

    temp = *lst;

    temp = temp->next;
    (*lst)->next = temp->next;
    temp->next = *lst;

    *lst = temp;
}

void rotate(t_list **lst)
{
    t_list *temp;
    t_list *last_node;

    temp = *lst;
    last_node = *lst;

    while (last_node->next)
        last_node = last_node->next;

    *lst = (*lst)->next;
    temp->next = NULL;
    last_node->next = temp;
}

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

int push_swap(int ac, char **av)
{

    for (int i = 0; i < ac; i++)
        printf("%d: %s\n", i, av[i]);

    t_list *a;
    t_list *b;
    t_list *c;
    t_list *d;

    a = ft_lstnew(av[1], sizeof(int));
    b = ft_lstnew(av[2], sizeof(int));
    c = ft_lstnew(av[3], sizeof(int));
    d = ft_lstnew(av[4], sizeof(int));

    ft_lstadd_back(&a, b);
    ft_lstadd_back(&a, c);
    ft_lstadd_back(&a, d);

    ft_lstprint(a);
    printf("-> swap <-\n");
    swap(&a);

    ft_lstprint(a);
    printf("-> rotate <-\n");
    rotate(&a);

    ft_lstprint(a);
    printf("-> reverse rotate <-\n");
    reverse_rotate(&a);
    
    ft_lstprint(a);


    // int     i;

    // i = 0;
    // while (i < ac)
    // {

    // }

    return (0);
}

int main(int ac, char **av)
{
    push_swap(ac, av);

    return (0);
}

