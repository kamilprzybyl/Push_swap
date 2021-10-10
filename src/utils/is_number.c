#include "../../inc/push_swap.h"

int	is_number(char *s)
{
	int	i;

	i = 0;
	if (s[i] == '-')
		i++;
	while (s[i])
	{
		if (!ft_isdigit(s[i]))
			return (0);
		i++;
	}
	if (ft_strlen(s) == 1 && s[0] == '-')
		return (0);
	return (1);
}
