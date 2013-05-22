#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring (char * str)
{
	int i, len, max;
	int pos[256] = {-1}, prev;
	
	i = 0;
	len = 0;
	max = 1;
	
	while (str[i])
	{
		int j = str[i];
		prev = pos[j];
		if (prev == -1 || (i - prev > len))
			len++;
		else
		{
			if (max < len)
				max = len;
			len = len - pos[j];
		}
		pos[j] = i;
		i++;
	}
	if (max < len)
		max = len;
	return max;
}

int main (void)
{
	char * str = "GEEKSFORGEEKS";
	printf ("Length of longest substring with no repeating characters: %d\n", lengthOfLongestSubstring (str));
	return 0;
}
