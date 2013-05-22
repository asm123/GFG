#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define d 256

void RabinKarpSearch (char * pat, char * txt, int q)
{
	int p = strlen (pat);
	int t = strlen (txt);
	int hp = 0;
	int ht = 0;
	int h = 1;
	int i, j;
	
	for (i = 0; pat[i+1]; i++)
		h = (h * d) % q;
	for (i = 0; pat[i]; i++)
	{
		hp = (d * hp + pat[i]) % q;
		ht = (d * ht + txt[i]) % q;
	}
	
	for (i = 0; i <= t-p; i++)
	{
		if (hp == ht)
		{
			for (j = 0; j < p; j++)
			{
				if (txt[i + j] != pat[j])
					break;
			}
			if (j == p)
				printf ("Pattern found at %d\n", i);
		}
		
		if (i < t-p)
		{
			ht = (d * (ht - txt[i] * h) + txt[i + p]) % q;
			if (ht < 0)
				ht += q;
		}
	}
}

int main (void)
{
	char * txt = "ABABDABACDABABACABAB";
	char * pat = "ABA";
	int q = 101;
	RabinKarpSearch (pat, txt, q);
	return 0;
}
