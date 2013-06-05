#include <stdio.h>
#define range 1000

void printPairs (int sum, int a[], int n)
{
	int i;
	int map[range * 2 + 1] = {0}, max = 0;
	for (i = 0; i < n; i++)
	{
		map[a[i] + range] = 1;
		if (a[i] + range > max)
			max = a[i] + range;
	}
	for (i = 0; i < max; i++)
	{
		if (map[i] == 1)
		{
			int j = (sum + range) - i + range;
			if (j < (range * 2 + 1) && map[j] == 1)
			{
				map[i] = 0; map[j] = 0;
				printf ("%d %d\n", i - range, j - range);
			}
		}
	}
}

int main (void)
{
	int a[] = {1, 4, 45, 6, 10, -8};
	int sum = 16;
	int n = 6;
	printPairs (sum, a, n);
	return 0;
}
