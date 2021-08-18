
#include "push_swap.h"

void	push_swap(t_list **head_a, __attribute__ ((unused)) t_list **head_b, __attribute__ ((unused)) int ac)
{
	if (is_sorted(*head_a))
		return ;
	
}

static int	init(t_list **head_a, t_list **head_b, int ac, char **av)
{
	int		i;
	t_list	*temp;

	i = 1;
	*head_a = NULL;
	*head_b = NULL;
	while (i < ac)
	{
		temp = ft_lstnew(av[i]);
		ft_lstadd_back(head_a, temp);
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	t_list	*head_b;
	t_list	*head_a;

	init(&head_a, &head_b, ac, av);
	print_stacks(head_a, head_b);
	push_swap(&head_a, &head_b, ac);
	print_stacks(head_a, head_b);
	return (0);
}
