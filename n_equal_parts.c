#include <stdio.h>
#include <string.h>

void divideString (char * str, int n)
{
	int len = strlen (str);
	if (len % n != 0)
	{
		printf ("Size of the string is not divisible by %d\n", n);
		return;
	}
	int size = len / n;
	int i;
	for (i = 0; str[i]; i++)
	{
		printf ("%c", str[i]);
		if ((i + 1) % size == 0)
			printf ("\n");
	}
}

int main (void)
{
	char * str = "a_string_to_be_divided";
	divideString (str, 1);
	return 0;
}
