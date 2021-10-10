#include "../inc/push_swap.h"

static void	sort_stack(t_list **head)
{
	if (min_idx(*head) == 1 || min_idx(*head) == 2)
		while (min_idx(*head) != 0)
			handle_rotate(head, A);
	else
		while (min_idx(*head) != 0)
			handle_reverse_rotate(head, A);
}

void	case_5(t_list **head_a, t_list **head_b)
{
	handle_push(head_a, head_b, B);
	handle_push(head_a, head_b, B);
	case_3(head_a, A);
	while (*head_b)
	{
		if ((*head_b)->content < max(*head_a)
			&& (*head_b)->content > min(*head_a))
		{
			if (((*head_b)->content < get_content(*head_a, 1)
					&& (*head_b)->content > get_content(*head_a, 0)))
				while (!((*head_b)->content < get_content(*head_a, 0)
						&& (*head_b)->content > get_last(*head_a)))
					handle_rotate(head_a, A);
			else
				while (!((*head_b)->content < get_content(*head_a, 0)
						&& (*head_b)->content > get_last(*head_a)))
					handle_reverse_rotate(head_a, A);
		}
		else
			sort_stack(head_a);
		handle_push(head_a, head_b, A);
	}
	sort_stack(head_a);
}
