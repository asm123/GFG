#include <stdio.h>

int firstNonRepeatingCharacter (char * str)
{
	if (str[0] == '\0')
		return -1;
	int i, count[256] = {0};
	for (i = 0; str[i]; i++)
	{
		int c = str[i];
		count[c]++;
	}
	for (i = 0; str[i]; i++)
	{
		int c = str[i];
		if (count[c] == 1)
			return i;
	}
	return -1;
}

int main (void)
{
	char * str = "geeksforgeeks";
	int i = firstNonRepeatingCharacter (str);
	if (i == -1)
		printf ("Either all characters repeat or the string is empty\n");
	else
		printf ("First non-repeating character: %c\n", str[i]);
	return 0;
}
