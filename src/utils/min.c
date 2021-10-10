#include "../../inc/push_swap.h"

int	min(t_list *head)
{
	t_list	*curr;
	int		min;

	curr = head;
	min = (int)curr->content;
	while (curr)
	{
		if ((int)curr->content < min)
			min = (int)curr->content;
		curr = curr->next;
	}
	return (min);
}
