#include <stdio.h>
#include <stdlib.h>

void reverse (char * s)
{
	if (*s)
	{
		reverse (s + 1);
		printf ("%c", *s);
	}
}

int main (void)
{
	char * str = (char *)malloc (sizeof (char) * 1000);
	scanf ("%s", str);
	reverse (str);
	printf ("\n");
	free (str);
	return 0;
}
