#include "../push_swap.h"

static int	scan_from_top(t_list *head, int number)
{
	int		i;
	t_list	*curr;

	i = 0;
	curr = head;
	while (curr)
	{
		if (curr->content < number)
			return (i);
		curr = curr->next;
		i++;
	}
	return (-1);
}

static int	scan_from_bottom(t_list *head, int number)
{
	int		i;
	int		*arr;
	t_list	*curr;

	i = 0;
	curr = head;
	arr = (int *)malloc(sizeof(int) * list_len(head));
	if (!arr)
		return (-1);
	while (curr)
	{
		arr[i] = curr->content;
		curr = curr->next;
		i++;
	}
	while (i-- >= 0)
	{
		if (arr[i] < number)
		{
			free(arr);
			return (i);
		}
	}
	free(arr);
	return (-1);
}

static int	compare_numbers(t_list *head, int first, int second)
{
	if (first < list_len(head) - second)
		return (first);
	return (second);
}

int	push_smaller(t_list **head_a, t_list **head_b, int apex)
{
	int	hold_first;
	int	hold_second;
	int	number_to_move;
	int	number_to_move_val;

	hold_first = scan_from_top(*head_a, apex);
	hold_second = scan_from_bottom(*head_a, apex);
	if (hold_first == -1 && hold_second == -1)
		return (-1);
	if (hold_first != -1 || hold_second != -1)
		number_to_move = compare_numbers(*head_a, hold_first, hold_second);
	else if (hold_first != 0 && hold_second == -1)
		number_to_move = hold_first;
	else
		number_to_move = hold_second;
	number_to_move_val = get_content(*head_a, number_to_move);
	if (number_to_move < list_len(*head_a) / 2)
		while (get_idx(*head_a, number_to_move_val) != 0)
			handle_rotate(head_a, A);
	else
		while (get_idx(*head_a, number_to_move_val) != 0)
			handle_reverse_rotate(head_a, A);
	handle_push(head_a, head_b, B);
	return (0);
}
