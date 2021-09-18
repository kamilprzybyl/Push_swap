#include "../push_swap.h"

int	max(t_list *head)
{
	t_list	*curr;
	int		max;

	curr = head;
	max = (int)curr->content;
	while (curr)
	{
		if ((int)curr->content > max)
			max = (int)curr->content;
		curr = curr->next;
	}
	return (max);
}
