#include "push_swap.h"

static void	push(t_list **src, t_list **dst)
{
	t_list	*temp;

	temp = *src;
	if (*src)
		*src = (*src)->next;
	ft_lstadd_front(dst, temp);
}

void	handle_push(t_list **head_a, t_list **head_b, int stack)
{
	if (stack == A)
	{
		push(head_b, head_a);
		ft_putstr("pa\n");
	}
	else if (stack == B)
	{
		push(head_a, head_b);
		ft_putstr("pb\n");
	}
}
