#include "../../inc/push_swap.h"

int	get_last(t_list *head)
{
	t_list	*curr;

	curr = head;
	while (curr)
	{
		if (!curr->next)
			return (curr->content);
		curr = curr->next;
	}
	return (-1);
}
