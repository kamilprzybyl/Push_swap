#include "../inc/push_swap.h"

void	case_3(t_list **head, int stack)
{
	while (!is_sorted(*head))
	{
		if (max_idx(*head) == 0)
			handle_rotate(head, stack);
		else if ((max_idx(*head) == 1 && min_idx(*head) == 0)
			|| (max_idx(*head) == 2 && min_idx(*head) == 1))
			handle_swap(head, stack);
		else if (max_idx(*head) == 1 && min_idx(*head) == 2)
			handle_reverse_rotate(head, stack);
	}
}
