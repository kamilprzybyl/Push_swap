#include "push_swap.h"

void print_stacks(t_list *a, t_list *b)
{
	t_list	*temp_a;
	t_list	*temp_b;

	temp_a = a;
	temp_b = b;
	ft_putstr_fd("\n A\tB \n", 1);
	ft_putstr_fd("  \t  \n", 1);
	while (temp_a || temp_b)
	{
		ft_putstr_fd(" ", 1);
		if (temp_a)
		{
			ft_putstr_fd(temp_a->content, 1);
		}
		ft_putstr_fd("\t", 1);
		if (temp_b)
			ft_putstr_fd(temp_b->content, 1);
		ft_putstr_fd(" \n", 1);
		if (temp_a)
			temp_a = temp_a->next;
		if (temp_b)
			temp_b = temp_b->next;
	}
	ft_putchar_fd('\n', 1);
}
