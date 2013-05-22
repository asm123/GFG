#include <stdio.h>

void reverse (char * begin, char * end)
{
	while (begin < end)
	{
		char temp = *begin;
		*begin++ = *end;
		*end-- = temp;
	}
}

void reverseWords (char * str)
{
	char * begin = str, * end = str;
	
	while (*end)
	{
		end++;
		if (*end == ' ')
		{
			reverse (begin, end - 1);
			begin = end + 1;
		}
		else if (*end == '\0')
		{
			reverse (begin, end - 1);
		}
	}
	reverse (str, end - 1);
}

int main (void)
{
	char str[] = "asmita sudhir metrewar";
	reverseWords (str);
	printf ("Reversed string: %s\n", str);
	return 0;
}
