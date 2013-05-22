#include <iostream>

using std :: cout;
using std :: cin;
using std :: endl;

struct node
{
	int data;
	struct node * left;
	struct node * right;
};

struct node * root = NULL;

void insert (int x)
{
	bool found = false;
	struct node * p = root;
	struct node * q;
	
	while (p && !found)
	{
		q = p;
		if (x == p -> data)
		  found = true;
		else
		{
			if (x < p -> data)
			  p = p -> left;
			else
			  p = p -> right;
		}
	}
	if (!found)
	{
		p = new struct node;
		p -> data = x;
		p -> left = NULL;
		p -> right = NULL;
		
		if (root)
		{
			if (x < q -> data)
			  q -> left = p;
			else
			  q -> right = p;
		}
		else
		  root = p;
	}
}

int minInBST (struct node * root)
{
	struct node * p = root;
	
	while (p -> left)
	  p = p -> left;
	
	return (p -> data);
}

int main (void)
{
	insert (4);
	insert (0);
	insert (1);
	insert (3);
	insert (6);
	insert (5);
	
	cout << "Min. in BST: " << minInBST (root) << endl;
	
	return 0;
}