#include "libft.h"

static void	swap_int(int *a, int *b)
{
	int	tmp;

	tmp = 0;
	if (a == b)
		return ;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	selection_sort(int a[], int n)
{
	int	i;
	int	j;
	int	min;

	i = -1;
	while(++i < n - 1)
	{
		j = i - 1;
		min = i;
		while (++j < n)
			if (a[min] > a[j])
				min = j;
		swap_int(&a[i], &a[min]);
	}
	return;
}
