#include "../inc/push_swap.h"

static void	swap(t_list **lst)
{
	t_list	*temp;

	temp = *lst;
	temp = temp->next;
	(*lst)->next = temp->next;
	temp->next = *lst;
	*lst = temp;
}

void	handle_swap(t_list **head, int stack)
{
	if (stack == A)
	{
		swap(head);
		ft_putstr("sa\n");
	}
	else if (stack == B)
	{
		swap(head);
		ft_putstr("sb\n");
	}
}
