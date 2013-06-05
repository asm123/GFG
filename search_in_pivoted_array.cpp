#include <cstdio>

int getPivot (int a[], int n)
{
	for (int i = 1; i < n; i++)
	{
		if (a[i] < a[i-1])
			return i;
	}
	return -1;
}

int binarySearch (int a [], int num, int low, int high)
{
	if (high < low)
	{
		printf ("High: %d Low: %d\n", high, low);
		return -1;
	}
	int mid = low + (high - low) / 2;
	if (a[mid] == num)
		return mid;
	if (num < a[mid])
		return binarySearch (a, num, low, mid - 1);
	return binarySearch (a, num, mid + 1, high);
}

int getIndex (int a[], int n, int num)
{
	int pivot = getPivot (a, n);
	if (pivot == -1)
		return binarySearch (a, num, 0, n-1);
	if (a[pivot] == num)
		return pivot;
	if (num >= a[0])
		return binarySearch (a, num, 0, pivot - 1);
	return binarySearch (a, num, pivot + 1, n - 1);
}

int main (void)
{
	int n;
	scanf ("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++)
		scanf ("%d", &a[i]);
	int num;
	scanf ("%d", &num);
	
	printf ("Index of %d: %d\n", num, getIndex (a, n, num));
	
	return 0;
}
