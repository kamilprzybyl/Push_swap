#include "push_swap.h"

void rotate(t_list **lst)
{
	t_list	*temp;
	t_list	*last_node;

	temp = *lst;
	last_node = *lst;
	while (last_node->next)
		last_node = last_node->next;
	*lst = (*lst)->next;
	temp->next = NULL;
	last_node->next = temp;
}

void handle_rotate(char *spec, t_list **head_a, t_list **head_b)
{
	if (ft_strncmp("ra", spec, ft_strlen(spec)) == 0)
	{
		rotate(head_a);
		ft_putstr_fd("ra\n", 1);
	}
	else if (ft_strncmp("rb", spec, ft_strlen(spec)) == 0)
	{
		rotate(head_b);
		ft_putstr_fd("rb\n", 1);
	}
	else if (ft_strncmp("rr", spec, ft_strlen(spec)) == 0)
	{
		rotate(head_a);
		rotate(head_b);
		ft_putstr_fd("rr\n", 1);
	}
}