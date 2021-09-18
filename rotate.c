#include "push_swap.h"

static void	rotate(t_list **head)
{
	t_list	*temp;
	t_list	*last_node;

	temp = *head;
	last_node = *head;
	while (last_node->next)
		last_node = last_node->next;
	*head = (*head)->next;
	temp->next = NULL;
	last_node->next = temp;
}

void	handle_rotate(t_list **head, int stack)
{
	if (stack == a)
	{
		rotate(head);
		ft_putstr("ra\n");
	}
	else if (stack == b)
	{
		rotate(head);
		ft_putstr("rb\n");
	}
}