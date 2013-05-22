#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int areRotations (char * str1, char * str2)
{
	int s1 = strlen (str1);
	int s2 = strlen (str2);
	
	if (s1 != s2)
		return 0;
	char * str = (char *) malloc (sizeof (char) * s1 * 2 + sizeof (char));
	str[0] = '\0';
	strcat (str, str1);
	strcat (str, str1);
	
	if (strstr (str, str2) == NULL)
		return 0;
	return 1;
}

int main (void)
{
	char * str1 = "ABCD";
	char * str2 = "BCAD";
	
	if (areRotations (str1, str2))
		printf ("Are rotations\n");
	else
		printf ("Are not rotations\n");
	
	return 0;
}
