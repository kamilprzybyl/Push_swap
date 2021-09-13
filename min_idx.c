#include "push_swap.h"

int	min_idx(t_list *head)
{
	t_list	*curr;
	int		last_min;
	int		min_idx;
	int		i;

	curr = head;
	last_min = (int)curr->content;
	i = 0;
	min_idx = 0;
	while (curr)
	{
		if ((int)curr->content < last_min)
		{
			last_min = (int)curr->content;
			min_idx = i;
		}
		curr = curr->next;
		i++;
	}
	return (min_idx);
}
