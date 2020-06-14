#include "push_swap.h"
#include <time.h>
#include <sys/time.h>


void instructions(char *instruct, t_list **head_a, t_list **head_b)
{
    if (ft_strcmp(instruct, "sa") == 0)
    {
        swap(head_a);
        printf("sa\n");
    }
    else if (ft_strcmp(instruct, "sb") == 0)
    {
        swap(head_b);
        printf("sb\n");
    }
    else if (ft_strcmp(instruct, "ss") == 0)
    {
        swap(head_a);
        swap(head_b);
        printf("ss\n");
    }
    else if (ft_strcmp(instruct, "pa") == 0)
    {
        push(head_b, head_a);
        printf("pa\n");
    }
    else if (ft_strcmp(instruct, "pb") == 0)
    {
        push(head_a, head_b);
        printf("pb\n");
    }
    else if (ft_strcmp(instruct, "ra") == 0)
    {
        rotate(head_a);
        printf("ra\n");
    }
    else if (ft_strcmp(instruct, "rb") == 0)
    {
        rotate(head_b);
        printf("rb\n");
    }
    else if (ft_strcmp(instruct, "rr") == 0)
    {
        rotate(head_a);
        rotate(head_b);
        printf("rr\n");
    }
    else if (ft_strcmp(instruct, "rra") == 0)
    {
        reverse_rotate(head_a);
        printf("rra\n");
    }
    else if (ft_strcmp(instruct, "rrb") == 0)
    {
        reverse_rotate(head_b);
        printf("rrb\n");
    }
    else if (ft_strcmp(instruct, "rrr") == 0)
    {
        reverse_rotate(head_a);
        reverse_rotate(head_b);
        printf("rrr\n");
    }
}


void ft_lstprint_two(t_list *a, t_list *b)
{
    t_list      *temp_a;
    t_list      *temp_b;

    temp_a = a;
    temp_b = b;

    printf("\n A\tB \n");
    printf("  \t  \n");

    while (temp_a || temp_b)
    {
        printf(" %s\t%s \n", temp_a ? temp_a->content : "", temp_b ? temp_b->content : "");
        
        if (temp_a)
            temp_a = temp_a->next;
        if (temp_b)
            temp_b = temp_b->next;
    }

    printf("\n");
}

void swap(t_list **lst)
{
    t_list      *temp;

    temp = *lst;

    temp = temp->next;
    (*lst)->next = temp->next;
    temp->next = *lst;

    *lst = temp;
}

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

void push(t_list **src, t_list **dst)
{
    t_list      *temp;

    temp = *src;

    if (*src)
        *src = (*src)->next;
    
    ft_lstadd_front(dst, temp);
}


void sort(t_list **head_a, t_list **head_b)
{
    int         i;
    int         min_idx;

    while (*head_a)
    {
        i = 0;
        min_idx = ft_min_idx(*head_a);

        while (i++ < min_idx)
        {
            instructions("ra", head_a, head_b);
            printf("ra\n");
        }

        instructions("pb", head_a, head_b);
        printf("pb\n");
    }
    
    while (*head_b)
    {
        instructions("pa", head_a, head_b);
        printf("pa\n");
    }
}

void sort_2(t_list **head_a, t_list **head_b, int ac)
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
            {
                instructions("ra", head_a, head_b);
                // ft_lstprint_two(*head_a, *head_b);
            }
        else
            while (i++ < (lst_len - min_idx))
            {
                instructions("rra", head_a, head_b);
                // ft_lstprint_two(*head_a, *head_b);
            }

        instructions("pb", head_a, head_b);
        // ft_lstprint_two(*head_a, *head_b);
        lst_len--;
    }
    while (*head_b)
    {
        instructions("pa", head_a, head_b);
        // ft_lstprint_two(*head_a, *head_b);
    }
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

    // ft_lstprint_two(head_a, head_b);
    // sort(&head_a, &head_b);
    sort_2(&head_a, &head_b, ac);

    // ft_lstprint_two(head_a, head_b);
    // printf("%d\n", ft_issorted(head_a));

    return (0);
}


int main(int ac, char **av)
{
    push_swap(ac, av);

    return (0);
}