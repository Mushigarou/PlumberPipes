static void	swap_int(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	insertion_sort(int a[], int n)
{
	int	i;
	int	j;
	
	i = 1;
	while (i < n)
	{
		j = i;
		while (j > 0 && a[j-1] > a[j])
		{
			swap_int(&a[j], &a[j-1]);
			j--;
		}
		i++;
	}
	return;
}
