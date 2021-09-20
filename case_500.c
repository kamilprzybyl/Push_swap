#include "push_swap.h"

static int	*put_to_arr(t_list *head)
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

void	case_500(t_list **head_a, t_list **head_b)
{
	int	div;
	int	*arr;
	int	mid;
	int	i;

	div = 5;
	while ((*head_a)->next)
	{
		arr = put_to_arr(*head_a);
		if (!arr)
			exit(1);
		quick_sort(arr, 0, list_len(*head_a) - 1);
		mid = list_len(*head_a) / div;
		i = 0;
		while (i++ < mid)
			push_smaller(head_a, head_b, arr[mid]);
		if (div > 2)
			div--;
		free(arr);
	}
	while (*head_b)
	{
		move_top(head_b, B, max(*head_b));
		handle_push(head_a, head_b, A);
	}
}
