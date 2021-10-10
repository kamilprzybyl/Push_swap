#include "../../inc/push_swap.h"

void	move_top(t_list **head, int stack, int number)
{
	int	mid;

	mid = list_len(*head) / 2;
	if (get_idx(*head, number) < mid)
		while (get_idx(*head, number) != 0)
			handle_rotate(head, stack);
	else
		while (get_idx(*head, number) != 0)
			handle_reverse_rotate(head, stack);
}
