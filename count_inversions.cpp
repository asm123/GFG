#include <cstdio>

int merge (int a[], int temp[], int low, int mid, int high)
{
	int i, j, k, invCount = 0;
	
	i = low;
	j = mid;
	k = low;
	
	while (i <= mid - 1 && j <= high)
	{
		if (a[i] <= a[j])
			temp[k++] = a[i++];
		else
		{
			temp[k++] = a[j++];
			invCount += (mid - i);
		}
	}
	while (i <= mid - 1)
		temp[k++] = a[i++];
	while (j <= high)
		temp[k++] = a[j++];
		
	for (i = low; i <= high; i++)
		a[i] = temp[i];
	
	return invCount;
}

int mergeSort (int a[], int temp[], int low, int high)
{
	int mid, invCount = 0;
	if (low < high)
	{
		mid = low + (high - low) / 2;
		invCount = mergeSort (a, temp, low, mid);
		invCount += mergeSort (a, temp, mid + 1, high);
		invCount += merge (a, temp, low, mid + 1, high);
	}
	return invCount;
}

int getInversionCount (int a[], int n)
{
	int temp[n];
	return mergeSort (a, temp, 0, n - 1);
}

int main (void)
{
	int a[] = {2, 4, 1, 3, 5};
	int n = sizeof a / sizeof a[0];
	printf ("Inversions: %d\n", getInversionCount (a, n));
	return 0;
}
