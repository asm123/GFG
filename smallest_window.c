#include <stdio.h>
#include <string.h>
#include <limits.h>

int getSmallestWindowLength (char * s, char * t)
{
	int minLength = INT_MAX;
	int i, j, len, find[256] = {0}, found[256] = {0};
	
	len = strlen (t);
	
	i = 0;
	while (t[i])
	{
		int c = t[i];
		find[c]++;
		i++;
	}
	
	for (i = 0, j = 0; s[j]; j++)
	{
		int c = s[j];
		if (find[c] == 0)
			continue;
		
		found[c]++;
		if (found[c] <= find[c])
			len--;
		
		if (len == 0)
		{
			c = s[i];
			while (find[c] == 0 || found[c] > find[c])
			{
				if (found[c] > find[c])
					found[c]--;
				i++;
				c = s[i];
			}
			
			int window = j - i + 1;
			if (minLength > window)
				minLength = window;
		}
	}
	return minLength;
}

int main (void)
{
	char * s = "ADOBECODEBAHNC";
	char * t = "ABC";
	int min_length = getSmallestWindowLength (s,t);
	printf ("Smallest window length: %d\n", min_length);
	
	return 0;
}
