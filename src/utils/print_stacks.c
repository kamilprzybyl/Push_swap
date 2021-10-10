#include "../../inc/push_swap.h"

void	print_stacks(t_list *head_a, t_list *head_b)
{
	t_list	*temp_a;
	t_list	*temp_b;

	temp_a = head_a;
	temp_b = head_b;
	ft_putstr("\n A\tB \n");
	ft_putstr("  \t  \n");
	while (temp_a || temp_b)
	{
		ft_putstr(" ");
		if (temp_a)
		{
			ft_putnbr(temp_a->content);
		}
		ft_putstr("\t");
		if (temp_b)
			ft_putnbr(temp_b->content);
		ft_putstr(" \n");
		if (temp_a)
			temp_a = temp_a->next;
		if (temp_b)
			temp_b = temp_b->next;
	}
	ft_putchar('\n');
}
