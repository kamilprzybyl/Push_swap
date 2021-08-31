#include "push_swap.h"

void	push_swap(t_list **head_a, __attribute__ ((unused)) t_list **head_b, __attribute__ ((unused)) int ac)
{
	if (is_sorted(*head_a))
		return ;
	
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
			temp = ft_lstnew(arr[j]);
			ft_lstadd_back(head_a, temp);
			j++;
		}
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	t_list	*head_b;
	t_list	*head_a;

	head_a = NULL;
	head_b = NULL;
	init(&head_a, ac, av);
	print_stacks(head_a, head_b);
	push_swap(&head_a, &head_b, ac);
	print_stacks(head_a, head_b);
	return (0);
}
