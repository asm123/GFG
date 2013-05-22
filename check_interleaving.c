#include <stdio.h>

int isInterleaving (char * s1, char * s2, char * s)
{
	while (*s)
	{
		if (*s == *s1)
			s1++;
		else if (*s == *s2)
			s2++;
		else
			return 0;
		s++;
	}
	if (*s || *s1 || *s2)
		return 0;
	return 1;
}

int main (void)
{
	char * s1 = "AB";
	char * s2 = "CD";
	char * s = "ACDB";
	
	if (isInterleaving (s1, s2, s))
		printf ("Is an interleaving\n");
	else
		printf ("Not an interleaving\n");
		
	return 0;
}
