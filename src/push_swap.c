#include "../inc/push_swap.h"

void	push_swap(t_list **head_a, t_list **head_b)
{
	int	len;

	len = list_len(*head_a);
	if (is_sorted(*head_a))
		return ;
	if (len <= 3)
		case_3(head_a, A);
	else if (len <= 5)
		case_5(head_a, head_b);
	else
		case_500(head_a, head_b);
}

static void	handle_error(t_list **head, char *arg)
{
	if (!is_number(arg)
		|| (ft_atoi(arg) == -1 && ft_strlen(arg) > 2)
		|| is_dup(*head, ft_atoi(arg)))
	{
		write(1, "Error!\n", 8);
		exit(1);
	}
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
		{
			free_list(head_a);
			return (1);
		}
		j = 0;
		while (arr[j])
		{
			handle_error(head_a, arr[j]);
			temp = ft_lstnew(ft_atoi(arr[j++]));
			ft_lstadd_back(head_a, temp);
		}
		i++;
		free_arr(arr);
	}
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
	push_swap(&head_a, &head_b);
	free_list(&head_a);
	return (0);
}
