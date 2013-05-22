#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void interleave (char * s1, char * s2, char * il, int start, int end1, int end2)
{
	if (end1 == 0 && end2 == 0)
		printf ("%s\n", il);
	
	if (end1)
	{
		il[start] = s1[0];
		interleave (s1 + 1, s2, il, start + 1, end1 - 1, end2);
	}
	
	if (end2)
	{
		il[start] = s2[0];
		interleave (s1, s2 + 1, il, start + 1, end1, end2 - 1);
	}
}

void printInterleavings (char * s1, char * s2)
{
	int len1 = strlen (s1);
	int len2 = strlen (s2);
	char * il = (char *) malloc (len1 + len2 + 1);
	il[len1 + len2] = '\0';
	interleave (s1, s2, il, 0, len1, len2);
}

int main (void)
{
	char * s1 = "AD";
	char * s2 = "CB";
	printInterleavings (s1, s2);
	return 0;
}
