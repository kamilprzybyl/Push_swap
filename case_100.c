#include "push_swap.h"

void	case_100(t_list **head_a, t_list **head_b)
{
	while ((*head_a)->next && !(is_sorted(*head_a) && min(*head_a) > max(*head_b)))
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
