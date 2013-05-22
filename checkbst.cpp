#include <iostream>
#include <climits>

using std :: cout;
using std :: cin;
using std :: endl;

struct node
{
	int data;
	struct node * left;
	struct node * right;
};

struct node * newNode (int x)
{
	struct node * node = new struct node;
	node -> data = x;
	node -> left = NULL;
	node -> right = NULL;
	return node;
}

bool isBST (struct node * node, int max, int min)
{
	if (node == NULL)
	  return true;
	
	if (node -> data > max || node -> data < min)
	  return false;
	
	return (isBST (node -> left, node -> data - 1, min) &&
		isBST (node -> right, max, node -> data + 1));
}

int main (void)
{
	struct node * root = newNode (4);
	root -> left = newNode (2);
	root -> right = newNode (1);
	root -> left -> left = newNode (1);
	root -> left -> right = newNode (3);
	
	if (isBST (root, INT_MAX, INT_MIN))
	  cout << "Is a BST" << endl;
	else
	  cout << "Not a BST" << endl;
	
	return 0;
}