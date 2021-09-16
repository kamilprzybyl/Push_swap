#include "push_swap.h"

void	push_swap(t_list **head_a, t_list **head_b, int ac)
{
	if (is_sorted(*head_a))
		return ;
 	if (ac <= 4)
		case_3(head_a, a);
	else if (ac == 5 || ac == 6)
		case_5(head_a, head_b);
	else if (ac >= 7 && ac <= 501)
		case_100(head_a, head_b);
	// else if (ac >= 101 && ac <= 500)
	// 	case_500(head_a, head_b);
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
