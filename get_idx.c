#include "push_swap.h"

int	get_idx(t_list *head, int val)
{
	int		i;
	t_list	*curr;

	i = 0;
	curr = head;
	while (curr)
	{
		if (curr->content == val)
			return (i);
		curr = curr->next;
		i++;
	}
	return (-1);
}
