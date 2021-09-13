#include "push_swap.h"

static int	search_from_beginning(t_list *head, int min, int max)
{
	int		i;
	t_list	*curr;

	i = 0;
	curr = head;
	while (curr)
	{
		if (curr->content >= min && curr->content <= max)
			return (i);
		curr = curr->next;
		i++;
	}
	return (-1);
}

static int	search_from_end(t_list *head, int min, int max)
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
	while (i)
	{
		i--;
		if (arr[i] >= min && arr[i] <= max)
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
	int	mid;
	int	first_moves;
	int	second_moves;

	mid = list_len(head) / 2;
	if (first < mid)
		first_moves = first;
	else
		first_moves = list_len(head) - second;
	if (second < mid)
		second_moves = second;
	else
		second_moves = list_len(head) - second;
	if (first_moves < second_moves)
		return (first);
	else
		return (second);
}

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

static void	handle_chunk(t_list	**head_a, t_list **head_b, int start, int end)
{
	int	hold_first;
	int	hold_second;
	int	number_to_move;

	while (1)
	{
		hold_first = search_from_beginning(*head_a, start, end);
		// printf("hold_first index = %d\n", hold_first);
		hold_second = search_from_end(*head_a, start, end);
		// printf("hold_second index = %d\n", hold_second);
		if (hold_first == -1 && hold_second == -1)
			break ;
		if (hold_first != -1 || hold_second != -1)
			number_to_move = compare_numbers(*head_a, hold_first, hold_second);
		else if (hold_first != 0 && hold_second == -1)
			number_to_move = hold_first;
		else
			number_to_move = hold_second;
		// printf("number_to_move = %d\n", number_to_move);
		if (*head_b)
			move_top(head_b, b, min(*head_b));
		handle_push(head_a, head_b, b);
		// print_stacks(*head_a, *head_b);
	}
}

void	case_100(t_list **head_a, t_list **head_b)
{
	while (*head_a)
	{
		handle_chunk(head_a, head_b, -2147483648, -1288490189);
		handle_chunk(head_a, head_b, -1288490188, -429496730);
		handle_chunk(head_a, head_b, -429496729, 429496729);
		handle_chunk(head_a, head_b, 429496730, 1288490189);
		handle_chunk(head_a, head_b, 1288490190, 2147483647);
	}
	while (*head_b)
	{
		move_top(head_b, b, max(*head_b));
		handle_push(head_a, head_b, a);
	}
}
