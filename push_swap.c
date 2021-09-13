#include "push_swap.h"

void	push_swap(t_list **head_a, t_list **head_b, int ac)
{
	if (is_sorted(*head_a))
		return ;
 	if (ac <= 4)
		case_3(head_a, a);
	else if (ac == 5 || ac == 6)
		case_5(head_a, head_b);
	else if (ac >= 7 || ac <= 100)
		case_100(head_a, head_b);
	// else if (ac >= 101 && ac <= 500)
	// 	case_500(head_a, head_b);
}

int	is_dup(t_list *head)
{
	t_list	*curr_1;
	t_list	*curr_2;
	int		i;
	int		j;

	i = 0;
	curr_1 = head;
	curr_2 = head;
	while (curr_1)
	{
		j = 0;
		while (curr_2)
		{
			if (curr_1->content == curr_2->content && i != j)
				return (1);
			curr_2 = curr_2->next;
			j++;
		}
		curr_2 = head;
		curr_1 = curr_1->next;
		i++;
	}
	return (0);
}

int	is_number(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (!ft_isdigit(s[i]))
			return (0);
		i++;
	}
	return (1);
}

static int	init(t_list **head_a, int ac, char **av)
{
	int		i;
	int		j;
	t_list	*temp;
	char	**arr;

	i = 1;
	while (i < ac)
	{
		arr = ft_split(av[i], ' ');
		if (!arr)
			return (1);
		j = 0;
		while (arr[j])
		{
			if (!is_number(arr[j]))
				return (write(1, "only numbers bro!\n", 19));
			temp = ft_lstnew(ft_atoi(arr[j]));
			ft_lstadd_back(head_a, temp);
			j++;
		}
		i++;
	}
	if (is_dup(*head_a))
		return ((write(1, "without duplicates please!\n", 28)));
	return (0);
}

int	main(int ac, char **av)
{
	t_list	*head_b;
	t_list	*head_a;

	head_a = NULL;
	head_b = NULL;
	if (init(&head_a, ac, av))
		return (1);
	// print_stacks(head_a, head_b);
	push_swap(&head_a, &head_b, ac);
	// print_stacks(head_a, head_b);
	return (0);
}
