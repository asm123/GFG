#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 50

char * encode (char * str)
{
	char * result, count[MAX_LEN], cur, prev = *str;
	int cnt = 1, i = 1, j = 0;
	result = (char *)malloc (sizeof (char) * (strlen (str) * 2 + 1));
	while (*(str + i))
	{
		cur = *(str + i);
		if (cur == prev)
			cnt++;
		else
		{
			int k = 0;
			*(result + j) = prev;
			j++;
			sprintf (count, "%d", cnt);
			while (*(count + k))
			{
				*(result + j) = *(count + k);
				j++;
				k++;
			}
			cnt = 1;
			prev = cur;
		}
		i++;
	}
	int k = 0;
	*(result + j) = prev;
	j++;
	sprintf (count, "%d", cnt);
	while (*(count + k))
	{
		*(result + j) = *(count + k);
		j++;
		k++;
	}	
	result[j] = '\0';
	return result;
}

int main (void)
{
	char str [] = "wwwwaaadexxxxxx";
	char * rle = encode (str);
	printf ("Encoded: %s\n", rle);
	return 0;
}
