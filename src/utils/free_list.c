#include "../../inc/push_swap.h"

void	free_list(t_list **head)
{
	t_list	*curr;

	curr = *head;
	while (curr)
	{
		head = &(*head)->next;
		free(curr);
		curr = *head;
	}
}
