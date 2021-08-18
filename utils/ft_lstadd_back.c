#include "../push_swap.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*temp;

	temp = *alst;
	new->next = NULL;
	if (*alst == NULL)
	{
		*alst = new;
		return;
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	return;
}
