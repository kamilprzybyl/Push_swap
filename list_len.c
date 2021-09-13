#include "push_swap.h"

int	list_len(t_list *head)
{
	int		i;
	t_list	*curr;

	i = 0;
	curr = head;
	while (curr)
	{
		curr = curr->next;
		i++;
	}
	return (i);
}
