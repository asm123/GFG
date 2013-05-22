#include <stdio.h>
#include <string.h>

int min (int a, int b) { return (a < b) ? a : b; }

int minCuts (char * s)
{
	int n = strlen (s);
	int C[n][n], P[n][n];
	int k, start, end, len;
	
	for (k = 0; k < n; k++)
	{
		C[k][k] = 0;
		P[k][k] = 1;
	}
	
	for (len = 2; len <= n; len++)
	{
		for (start = 0; start < n-len+1; start++)
		{
			end = start + len - 1;
			
			if (len == 2)
				P[start][end] = (s[start] == s[end]);
			else
				P[start][end] = (s[start] == s[end]) && P[start + 1][end - 1];
				
			if (P[start][end])
				C[start][end] = 0;
			else
			{
				C[start][end] = n + 1;
				
				for (k = start; k < end - 1; k++)
				{
					C[start][end] = min (C[start][end], C[start][k] + C[k + 1][end] + 1);
				}
			}
		}
	}
	
	return C[0][n - 1];
}

int main (void)
{
	char * str = "ababbbabbababa";
	printf ("Min. cuts: %d\n", minCuts (str));
	
	return 0;
}
