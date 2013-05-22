#include <stdio.h>
#include <string.h>

int LCSubstr (char * s1, char * s2, int len1, int len2)
{
	int suffix [len1 + 1][len2 + 1];
	int max = 0, i, j;
	
	for (i = 0; i <= len1; i++)
		suffix[i][0] = 0;
	for (i = 0; i <= len2; i++)
		suffix[0][i] = 0;
	
	for (i = 1; i <= len1; i++)
	{
		for (j = 1; j <= len2; j++)
		{
			if (s1[i - 1] == s2[j - 1])
			{
				suffix[i][j] = suffix[i - 1][j - 1] + 1;
				if (max < suffix[i][j])
					max = suffix[i][j];
			}
			else
				suffix[i][j] = 0;
		}
	}
	return max;
}

int main (void)
{
	char * s1 = "QuizGeeksForGeeksQuiz";
	char * s2 = "GeeksForGeeks";
	printf ("Length of longest common substring: %d\n", LCSubstr (s1, s2, strlen (s1), strlen (s2)));
	return 0;
}
