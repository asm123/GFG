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

void recursivePreorder (struct node *);
void recursiveInorder (struct node *);
void recursivePostorder (struct node *);
void iterativePreorder (struct node *);
void iterativeInorder (struct node *);
void iterativePostorder (struct node *);

void iterativePreorder (struct node * root)
{
	
}

void iterativeInorder (struct node * root)
{
	
}

void iterativePostorder (struct node * root)
{
	
}

void recursivePreorder (struct node * root)
{
	if (root == NULL)
	  return;
	cout << root -> data << "\t";
	recursivePreorder (root -> left);
	recursivePreorder (root -> right);
}

void recursiveInorder (struct node * root)
{
	if (root == NULL)
	  return;
	recursiveInorder (root -> left);
	cout << root -> data << "\t";
	recursiveInorder (root -> right);
}

void recursivePostorder (struct node * root)
{
	if (root == NULL)
	  return;
	recursivePostorder (root -> left);
	recursivePostorder (root -> right);
	cout << root -> data << "\t";
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
	
	cout << "Recursive preorder: "; recursivePreorder (root); cout << endl;
	cout << "Recursive inorder: "; recursiveInorder (root); cout << endl;
	cout << "Recursive postorder: "; recursivePostorder (root); cout << endl;
	cout << "Iterative preorder: "; iterativePreorder (root); cout << endl;
	cout << "Iterative inorder: "; iterativeInorder (root); cout << endl;
	cout << "Iterative postorder: "; iterativePostorder (root); cout << endl;
	
	
	return 0;
}
