#include "../inc/push_swap.h"

static void	reverse_rotate(t_list **lst)
{
	t_list	*pre_last;
	t_list	*last_node;

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

void	handle_reverse_rotate(t_list **head, int stack)
{
	if (stack == A)
	{
		reverse_rotate(head);
		ft_putstr("rra\n");
	}
	else if (stack == B)
	{
		reverse_rotate(head);
		ft_putstr("rrb\n");
	}
}
