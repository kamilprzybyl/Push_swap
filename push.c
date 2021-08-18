#include "push_swap.h"

void push(t_list **src, t_list **dst)
{
	t_list	*temp;

	temp = *src;
	if (*src)
		*src = (*src)->next;
	ft_lstadd_front(dst, temp);
}

void handle_push(char *spec, t_list **head_a, t_list **head_b)
{
	if (ft_strncmp("pa", spec, ft_strlen(spec)) == 0)
	{
		push(head_b, head_a);
		ft_putstr_fd("pa\n", 1);
	}
	else if (ft_strncmp("pb", spec, ft_strlen(spec)) == 0)
	{
		push(head_a, head_b);
		ft_putstr_fd("pb\n", 1);
	}
}
