#include "../../inc/push_swap.h"

void	ft_putnbr(int n)
{
	long	l;

	l = n;
	if (l < 0)
	{
		ft_putchar('-');
		l *= -1;
	}
	if (l <= 9)
		ft_putchar(l + '0');
	else
	{
		ft_putnbr(l / 10);
		ft_putnbr(l % 10);
	}
}
