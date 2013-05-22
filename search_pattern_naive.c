#include <stdio.h>

void search (char * pat, char * txt)
{
	int i;
	for (i = 0; txt[i]; i++)
	{
		int j;
		for (j = 0; pat[j]; j++)
		{
			if (txt[i + j] != pat[j])
				break;
		}
		if (!pat[j])
			printf ("Pattern found at %d\n", i);
	}
}

int main (void)
{
	char * txt = "AABABACAADAABAAABAA";
	char * pat = "ABA";
	search (pat, txt);	
	return 0;
}
