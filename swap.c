#include "push_swap.h"


static void	swap(t_list **lst)
{
	t_list	*temp;

	temp = *lst;
	temp = temp->next;
	(*lst)->next = temp->next;
	temp->next = *lst;
	*lst = temp;
}

void handle_swap(char *spec, t_list **head_a, t_list **head_b)
{
	if (ft_strncmp("sa", spec, ft_strlen(spec)) == 0)
	{
		swap(head_a);
		printf("sa\n");
	}
	else if (ft_strncmp("sb", spec, ft_strlen(spec)) == 0)
	{
		swap(head_b);
		printf("sb\n");
	}
	else if (ft_strncmp("ss", spec, ft_strlen(spec)) == 0)
	{
		swap(head_a);
		swap(head_b);
		printf("ss\n");
	}
}
