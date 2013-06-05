#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int K = 26;
const int MAX = 250052;

struct node
{
	int child[K];
	int parent;
} tree [2 * MAX - 1]; // max nodes will be (2 * max - 1)

int size, prev;

void init ()
{
	root[0].parent = -1; // root initially has no children
	memset (root[0].child, -1, sizeof (root[0].child));
	size++;
}

void extend (char c)
{
	int cur = size++;
	tree[cur].length = tree[prev].length + 1;
	memset (tree[cur].next, -1, sizeof (tree[cur].next));
	
	int i;
	for (i = prev; i != -1 && tree[i].next[c] == -1; i = tree[i].parent)
		tree[i].next[c] = cur;
	if (i == -1)
		tree[cur].parent = 0;
	else
	{
		int j = tree[i].next[c];
		if (tree[i].length + 1 == tree[j].length)
			tree[cur].link = j;
		else
		{
			int clone = size++;
			tree[clone].length = tree[i].length + 1;
			memcpy (tree[clone].next, tree[j].next, sizeof (tree[clone].next));
			tree[clone].link = tree[j].link;
		}
	}
	prev = cur;
}

int main (void)
{
	int i = 0;
	char * s = "banana";
	init ();
	while (s[i])
	{
		extend (s[i]);
		i++;
	}
	
	return 0;
}
