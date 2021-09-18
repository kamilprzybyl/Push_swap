#include "../push_swap.h"

int	max_idx(t_list *head)
{
	t_list	*curr;
	int		last_max;
	int		max_idx;
	int		i;

	curr = head;
	last_max = (int)curr->content;
	i = 0;
	max_idx = 0;
	while (curr)
	{
		if ((int)curr->content > last_max)
		{
			last_max = (int)curr->content;
			max_idx = i;
		}
		curr = curr->next;
		i++;
	}
	return (max_idx);
}
