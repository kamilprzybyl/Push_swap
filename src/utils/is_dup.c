#include "../../inc/push_swap.h"

int	is_dup(t_list *head, int num)
{
	t_list	*curr;
	int		i;

	i = 0;
	curr = head;
	while (curr)
	{
		if (curr->content == num)
			return (1);
		curr = curr->next;
		i++;
	}
	return (0);
}
