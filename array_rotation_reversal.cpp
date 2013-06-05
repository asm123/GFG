#include <cstdio>

void reverseArray (int a[], int start, int end)
{
	while (start < end)
	{
		int temp = a[start];
		a[start++] = a[end];
		a[end--] = temp;
	}
}

void rotateArray (int a[], int n, int d)
{
	reverseArray (a, 0, d-1);
	reverseArray (a, d, n-1);
	reverseArray (a, 0, n-1);
}

void printArray (int a[], int n)
{
	for (int i = 0; i < n; i++)
		printf ("%d ", a[i]);
	printf ("\n");
}

int main (void)
{
	int a[] = {1, 2, 3, 4, 5, 6, 7};
	int n = sizeof a / sizeof a[0];
	int d = 3;
	printArray (a, n);
	rotateArray (a, n, d);
	printArray (a, n);
	
	return 0;
}
