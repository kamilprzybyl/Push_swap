#include "../../inc/push_swap.h"

int	get_content(t_list *head, int index)
{
	int		i;
	t_list	*curr;

	i = 0;
	curr = head;
	while (curr)
	{
		if (i == index)
			return (curr->content);
		curr = curr->next;
		i++;
	}
	return (-1);
}
