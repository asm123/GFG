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

struct node * newNode (int x)
{
	struct node * node = new struct node;
	node -> data = x;
	node -> left = NULL;
	node -> right = NULL;
	return node;
}

bool isIdentical (struct node * root1, struct node * root2)
{
	if (root1 == NULL && root2 == NULL)
	  return true;
	if (root1 != NULL && root2 != NULL)
		return (root1 -> data == root2 -> data && isIdentical (root1 -> left, root2 -> left)
		&& isIdentical (root1 -> right, root2 -> right));
	return false;
}

int main (void)
{
	struct node * root1 = newNode (1);
	root1 -> left = newNode (2);
	root1 -> right = newNode (3);
	root1 -> left -> left = newNode (4);
	root1 -> left -> right = newNode (5);
	root1 -> right -> left = newNode (6);
	root1 -> right -> right = newNode (7);
	
	struct node * root2 = newNode (1);
	root2 -> left = newNode (2);
	root2 -> right = newNode (3);
	root2 -> left -> left = newNode (4);
	root2 -> left -> right = newNode (5);
	root2 -> right -> left = newNode (6);
	root2 -> right -> right = newNode (7);
	
	if (isIdentical (root1, root2))
	  cout << "Trees are identical." << endl;
	else
	  cout << "Trees are not identical." << endl;
	
	return 0;
}