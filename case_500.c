#include "push_swap.h"

void	case_500(t_list **head_a, t_list **head_b)
{
	while (*head_a)
	{
		handle_chunk(head_a, head_b, -2147483648, -1757032076);
		handle_chunk(head_a, head_b, -1757032075, -1366580504);
		handle_chunk(head_a, head_b, -1366580503, -976128932);
		handle_chunk(head_a, head_b, -976128931, -585677360);
		handle_chunk(head_a, head_b, -585677359, -195225788);
		handle_chunk(head_a, head_b, -195225787, 195225784);
		handle_chunk(head_a, head_b, 195225785, 585677356);
		handle_chunk(head_a, head_b, 585677357, 976128928);
		handle_chunk(head_a, head_b, 976128929, 1366580500);
		handle_chunk(head_a, head_b, 1366580501, 1757032072);
		handle_chunk(head_a, head_b, 1757032073, 2147483647);
	}
	while (*head_b)
	{
		// move_top(head_b, b, max(*head_b));
		handle_push(head_a, head_b, a);
	}
}
