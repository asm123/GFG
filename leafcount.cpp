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

struct node * queue [101];
int rear = 0;
int front = 0;

void push (struct node * node)
{
	queue [rear] = node;
	rear++;
}

struct node * pop ()
{
	front++;
	return (queue [front - 1]);
}

int getLeafCount (struct node * root)
{
	if (root == NULL)
	  return 0;
	if (!root -> left && !root -> right)
	  return 1;
	return (getLeafCount (root -> left) + getLeafCount (root -> right));
}

int main (void)
{
	insert (4);
	insert (0);
	insert (1);
	insert (3);
	insert (6);
	insert (5);
	
	cout << "No. of leaves: " << getLeafCount (root) << endl;
	
	return 0;
}