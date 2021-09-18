#include "../push_swap.h"

static void	swap(int *x, int *y)
{
	int	tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}

static int	partition(int *arr, int low, int high)
{
	int	pivot;
	int	i;
	int	j;

	j = low;
	i = (low - 1);
	pivot = arr[high];
	while (j <= high - 1)
	{
		if (arr[j] < pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
		}
		j++;
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

void	quick_sort(int *arr, int low, int high)
{
	if (low < high)
	{
		int	pi;
		pi = partition(arr, low, high);
		quick_sort(arr, low, pi - 1);
		quick_sort(arr, pi + 1, high);
	}
}
