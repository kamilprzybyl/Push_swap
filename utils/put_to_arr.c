#include "../push_swap.h"

int	*put_to_arr(t_list *head)
{
	int		i;
	int		*arr;
	t_list	*curr;
	arr = (int *)malloc(sizeof(int) * list_len(head));
	curr = head;
	i = 0;
	if (!arr)
		return (arr);
	while (curr)
	{
		arr[i] = curr->content;
		curr = curr->next;
		i++;
	}
	return (arr);
}
