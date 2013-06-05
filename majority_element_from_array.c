#include <stdio.h>

int getCandidate (int a[], int n)
{
	int index = 0, count = 1, i;
	
	for (i = 1; i < n; i++)
	{
		if (a[i] == a[index])
			count++;
		else
			count--;
		if (count == 0)
		{
			index = i;
			count = 1;
		}
	}
	return a[index];
}

int checkCandidate (int a[], int n, int cand)
{
	int count = 0, i;
	for (i = 0; i < n; i++)
	{
		if (a[i] == cand)
			count++;
	}
	if (count > n/2)
		return 1;
	return 0;
}

void printMajorityElement (int a[], int n)
{
	int cand = getCandidate (a, n);
	if (checkCandidate (a, n, cand))
		printf ("%d\n", cand);
	else
		printf ("NONE\n");
}

int main (void)
{
	int a[] = {3, 3, 4, 2, 4, 4, 2, 4, 4};
	printMajorityElement (a, 9);
	return 0;
}
