#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct word
{
	char * str;
	int index;
};

int compChar (const void * a, const void * b)
{
	return *(char *)a - *(char *)b;
}

int compStr (const void * a, const void * b)
{
	struct word * a1 = (struct word *)a;
	struct word * b1 = (struct word *)b;
	return strcmp (a1 -> str, b1 -> str);
}

void printAnagramsTogether (char * words[], int size)
{
	struct word * wordArr = (struct word *) malloc (sizeof (struct word) * size);
	int i;
	for (i = 0; i < size; i++)
	{
		wordArr[i].str = (char *) malloc (sizeof (char) * (strlen (words[i]) + 1));
		strcpy (wordArr[i].str, words[i]);
		wordArr[i].index = i;
		qsort (wordArr[i].str, strlen (wordArr[i].str), sizeof (char), compChar);
	}
	qsort (wordArr, size, sizeof (wordArr[0]), compStr);
	for (i = 0; i < size; i++)
	{
		printf ("%s\n", words[wordArr[i].index]);
	}
}

int main (void)
{
	char * words[] = {"action", "dig", "cation", "gid", "actino"};
	printAnagramsTogether (words, 5);
	return 0;
}
