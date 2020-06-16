#include "push_swap.h"


void print_stacks(t_list *a, t_list *b)
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