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

void levelOrder ()
{
	struct node * p;
	
	push (root);
	p = pop ();
	while (p)
	{
		cout << p -> data << " ";
		if (!p)
		  break;
		if (p -> left)
		  push (p -> left);
		if (p -> right)
		  push (p -> right);
		p = pop ();
	}
	cout << endl;
}

int main (void)
{
	insert (4);
	insert (0);
	insert (1);
	insert (3);
	insert (6);
	insert (5);
	
	levelOrder ();
	
	return 0;
}