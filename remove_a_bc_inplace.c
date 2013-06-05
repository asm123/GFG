#include <stdio.h>

void remove_a_bc (char * s)
{
	int i = 1, j = 0;
	
	if (s[0] != 'a' && s[0] != 'b')
		j++;
	
	while (s[i])
	{
		if (s[i-1] == 'a')
		{
			if (s[i] == 'a' || s[i] == 'b')
			{
				s[j++] = s[i-1];
			}			
			else if (s[i] != 'c')
			{
				s[j++] = s[i-1];
				s[j++] = s[i];
			}
		}
		else
		{
			if (s[i] != 'a' && s[i] != 'b')
			{
				if (j > 0 && s[j-1] == 'a' && s[i] == 'c')
					j--;
				else
					s[j++] = s[i];
			}
		}
		i++;
	}
	if (s[i-1] == 'a')
		s[j++] = s[i-1];
	s[j] = '\0';
}

int main (void)
{
	while (1)
	{
		char s[100];
		scanf ("%s", s);
		if (s[0] == '*')
			break;
		remove_a_bc (s);
		printf ("Filtered: %s\n", s);
	}
	return 0;
}
