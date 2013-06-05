#include <iostream>

using std :: cout;
using std :: cin;
using std :: endl;

void preprocess (int a[], int n, int **M)
{
	for (int i = 0; i < n; i++)
		M[i][i] = i;
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (a[j] > a[M[i][j-1]])
				M[i][j] = j;
			else
				M[i][j] = M[i][j-1];
		}
	}
}

int main (void)
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	
	int **M;
	M = new int *[n];
	for (int i = 0; i < n; i++)
		M[i] = new int [n];
		
	preprocess (a, n, M);
	
	int k;
	cin >> k;
	
	for (int i = 0; i < n-k+1; i++)
	{
		cout << a[M[i][i+k-1]] << " ";
	}
	cout << endl;
	
	for (int i = 0; i < n; i++)
		delete [] M[i];
	delete [] M;
	
	return 0;
}
