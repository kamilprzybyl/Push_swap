#include "../push_swap.h"

int	is_dup(t_list *head)
{
	t_list	*curr_1;
	t_list	*curr_2;
	int		i;
	int		j;

	i = 0;
	curr_1 = head;
	curr_2 = head;
	while (curr_1)
	{
		j = 0;
		while (curr_2)
		{
			if (curr_1->content == curr_2->content && i != j)
				return (1);
			curr_2 = curr_2->next;
			j++;
		}
		curr_2 = head;
		curr_1 = curr_1->next;
		i++;
	}
	return (0);
}
