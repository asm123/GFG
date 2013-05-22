#include <stdio.h>

int wordCount (char * s)
{
	int count = 0, prev = 1;
	
	while (*s)
	{
		if (*s == ' ' || *s == '\t' || *s == '\n')
		{
			if (!prev)
				count++;
			prev = 1;
		}
		else
			prev = 0;
		s++;
	}
	if (!prev)
		count++;
	return count;
}

int main (void)
{
	char * s = "a a \n\n\n\n wmaewl";
	printf ("Word count: %d\n", wordCount(s));
	return 0;
}
