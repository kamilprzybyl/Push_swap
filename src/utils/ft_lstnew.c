#include "../../inc/push_swap.h"

t_list	*ft_lstnew(int	content)
{
	t_list	*new_elem;

	new_elem = malloc(sizeof(t_list));
	if (!new_elem)
		return (0);
	new_elem->content = content;
	new_elem->next = 0;
	return (new_elem);
}
