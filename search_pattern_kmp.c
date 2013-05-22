#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void computeLPSArray (char * pat, int * lps)
{
	int len = 0;
	lps[0] = 0;
	int i = 1;
	
	while (pat[i])
	{
		if (pat[i] == pat[len])
		{
			len++;
			lps[i] = len;
			i++;
		}
		else
		{
			if (len == 0)
			{
				lps[i] = 0;
				i++;
			}	
			else
				len = lps[len - 1];
		}
	}
}

void KMPSearch (char * pat, char * txt)
{
	int p = strlen (pat);
	int * lps = (int *) malloc (sizeof (int) * p);
	computeLPSArray (pat, lps);
	
	int i = 0, j = 0;
	
	while (txt[i])
	{
		if (txt[i] == pat[j])
		{
			i++;
			j++;
		}
		if (!pat[j])
		{
			printf ("Pattern found at %d\n", (i - j));
			j = lps[j - 1];
		}
		else if (txt[i] != pat[j])
		{
			if (j != 0)
				j = lps[j - 1];
			else
				i++;
		}
	}

	free (lps);
}

int main (void)
{
	char * txt = "ABABDABACDABABACABAB";
	char * pat = "ABA";
	KMPSearch (pat, txt);
	return 0;
}
