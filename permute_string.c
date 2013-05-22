#include <stdio.h>
#include <string.h>

void swap (char * s1, char * s2)
{
	char temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void permute (char * str, int start, int end)
{
	if (start == end)
		printf ("%s\n", str);
	else
	{
		int j;
		for (j = start; j <= end; j++)
		{
			swap ((str + start), (str + j));
			permute (str, start + 1, end);
			swap ((str + start), (str + j));
		}
	}
}

int main (void)
{
	char str [] = "asmita";
	permute (str, 0, strlen (str) - 1);
	return 0;
}
