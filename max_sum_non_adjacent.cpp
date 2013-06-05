#include <cstdio>

int getMaxSum (int a[], int n)
{
	int incl = a[0], excl = 0;
	
	for (int i = 1; i < n; i++)
	{
		int excl_new = (incl > excl) ? incl : excl;
		incl = excl + a[i];
		excl = excl_new;
	}
	return (incl > excl) ? incl : excl;
}

int main (void)
{
	int a[] = {3, 2, 5, 10, 7};
	int n = sizeof a / sizeof a[0];
	
	printf ("Max. sum: %d\n", getMaxSum (a, n));
	
	return 0;
}
