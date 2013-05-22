#include <stdio.h>
#include <string.h>

void search (char * pat, char * txt)
{
	int i = 0;
	
	while (txt[i])
	{
		int j = 0;
		while (pat[j])
		{
			if (txt[i + j] != pat[j])
				break;
			j++;
		}
		if (!pat[j])
			printf ("Pattern found at %d\n", i);
		if (j == 0)
			i++;
		else
			i += j;
	}
}

int main (void)
{
	char * txt = "firefoxgeckoosgeckfirefoxgecko";
	char * pat = "gecko";
	search (pat, txt);
	return 0;
}
