#include <stdbool.h>

static void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
	return;
}

void	bubble_sort(int a[], int n)
{
	int k;

	while (--n)
	{
		k = -1;
		while (++k < n)
			if (a[k] > a[k + 1])
				swap_int(&a[k], &a[k + 1]);
	}
	return;
}
