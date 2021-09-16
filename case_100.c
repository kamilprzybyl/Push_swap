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

static void	push_smaller(t_list **head_a, t_list **head_b, int apex)
{
	if ((*head_a)->content > apex && get_last(*head_a) > apex)
		while ((*head_a)->content > apex)
			handle_rotate(head_a, a);
	else
		while ((*head_a)->content >= apex)
			handle_reverse_rotate(head_a, a);
	handle_push(head_a, head_b, b);
}

void	case_100(t_list **head_a, t_list **head_b)
{
	while ((*head_a)->next)
	{
		int	*arr;
		int	mid;
		int	i;

		arr = put_to_arr(*head_a);
		quick_sort(arr, 0, list_len(*head_a) - 1);
		mid = list_len(*head_a) / 2;
		i = 0;
		while (i < mid)
		{
			push_smaller(head_a, head_b, arr[mid]);
			i++;
		}
	}
	while (*head_b)
	{
		move_top(head_b, b, max(*head_b));
		handle_push(head_a, head_b, a);
	}
}
