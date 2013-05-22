#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ListNode
{
	int index;
	struct ListNode * next;
};

struct TrieNode
{
	struct TrieNode * child[26];
	struct ListNode * head;
	struct ListNode * last;
	int isLeaf;
};

struct TrieNode * newTrieNode ()
{
	struct TrieNode * node = (struct TrieNode *) malloc (sizeof (struct TrieNode));
	int i;
	for (i = 0; i < 26; i++)
		node -> child[i] = NULL;
	node -> isLeaf = 0;
	node -> head = NULL;
	node -> last = NULL;
	return node;
}

struct ListNode * newListNode ()
{
	struct ListNode * node = (struct ListNode *) malloc (sizeof (struct ListNode));
	node -> next = NULL;
	return node;
}

int compare (const void * a, const void * b) { return (*(char *)a - *(char *) b); }

void insert (struct TrieNode * root, char * word, int index)
{
	if (!root)
		root = newTrieNode ();
	int i = 0;
	while (word[i])
	{
		int j = word[i] - 'a';
		if (!root->child[j])
			root -> child = newTrieNode ();
		else
		{
			if (root -> isLeaf)
			{
				struct ListNode * temp = newListNode ();
				temp -> index = index;
				root -> last -> next = temp;
				root -> last = temp;
			}
		}
	}
}

void printAnagramsTogether (char * words[], int size)
{
	struct TrieNode * root = newTrieNode ();
	
	int i;
	for (i = 0; i < size; i++)
	{
		char * word = (char *) malloc (sizeof (char) * strlen (words[i]));
		strcpy (word, words[i]);
		qsort (word, strlen (word), sizeof (char), compare);
		insert (root, word, i);
	}
}

int main (void)
{
	char * words[] = {"cat", "dog", "tac", "god", "act", "gdo"};
	int size = sizeof (words) / sizeof (words[0]);
	printAnagramsTogether (words, size);
	return 0;
}
