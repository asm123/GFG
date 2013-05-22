#include <stdio.h>

int match (char * s1, char * s2)
{
	if (!(*s1) && !(*s2))
		return 1;
	if (*s1 == '*' && *(s1 + 1) && !(*s2))
		return 0;
	if (*s1 == *s2)
		return match (s1 + 1, s2 + 1);
	if (*s1 == '?')
		return match (s1 + 1, s2 + 1);
	if (*s1 == '*')
		return (match (s1 + 1, s2) || match (s1, s2 + 1));
	return 0;
}

int main (void)
{
	char s1[100], s2[100];
	while (scanf ("%s", s1) == 1)
	{
		scanf ("%s", s2);
		if (match (s1, s2))
			printf ("Match!\n");
		else
			printf ("Do not match!\n");
	}
	return 0;
}
