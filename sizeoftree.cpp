#include <iostream>

using std :: cout;
using std :: endl;

struct node
{
	int data;
	struct node * left;
	struct node * right;
};

struct node * createNewNode (int data)
{
	struct node * node = new struct node;
	node -> data = data;
	node -> left = NULL;
	node -> left = NULL;
	
	return node;
}

int sizeOfTree (struct node * root)
{
	if (root == NULL)
	  return 0;
	return (sizeOfTree (root -> left) + 1 + sizeOfTree (root -> right));	  
}

int main (void)
{
	struct node * root = createNewNode (1);
	
	root -> left = createNewNode (2);
	root -> right = createNewNode (3);
	root -> left -> left = createNewNode (4);
	root -> left -> right = createNewNode (5);
	root -> right -> left = createNewNode (6);
	root -> right -> right = createNewNode (7);
	
	cout << "Size of tree: " << sizeOfTree (root) << endl;
	
	return 0;
}