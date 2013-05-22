#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void permute (char * str, char * perm, int start, int end)
{
	int i = 0;
	while (*(str + i))
	{
		perm[start] = *(str + i);
		if (start == end)
			printf ("%s\n", perm);
		else
			permute (str, perm, start + 1, end);
		i++;
	}
}

void printPermutations (char * str)
{
	int len = strlen (str);
	char * perm = (char *) malloc (sizeof (char) * (len + 1));
	int count[256] = {0}, i = 0;
	while (str[i])
	{
		int c = str[i];
		count[c]++;
		i++;
	}
	int j, k = 0;
	char * temp = (char *) malloc (sizeof (char) * (len + 1));
	for (i = 0; i < 256; i++)
	{
		for (j = 0; j < count[i]; j++)
		{
			temp[k] = (char) i;
			k++;
		}
	}
	
	permute (temp, perm, 0, len - 1);
}

int main (void)
{
	char * str = "BARC";
	printPermutations (str);
	return 0;
}
