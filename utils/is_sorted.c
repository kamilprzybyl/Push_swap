#include "../push_swap.h"

int	is_sorted(t_list *head)
{
	t_list	*curr;

	curr = head;
	while (curr)
	{
		if (curr->next && curr->content > curr->next->content)
			return (0);
		curr = curr->next;
	}
	return (1);
}
