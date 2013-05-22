/*
 * main.c
 *
 *  Created on: 30-Mar-2013
 *      Author: makarand
 */
#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
	int vertexNumber;
	struct ListNode * next;
};

struct Graph
{
	int V;
	int E;
	struct ListNode ** Adj; //head pointer to linked list
};


//Nodes of Linked List

//this code creates a graph with adj list representation
void adjListOfGraph ()
{
	int i, x, y;
	struct ListNode * temp;
	
/*	struct Graph *G;
	G = (struct Graph *) malloc (sizeof (struct Graph));
	printf ("\nNumber of Vertices: ");
	scanf ("Number of Vertices: %d", &G -> V);
	printf("\nNumber of Edges: ");
	scanf("Number of edges: %d",&G->E);
	printf("\nNumber of Vertices:%d", G->V);
*/

	struct Graph * G;
	G = (struct Graph *) malloc (sizeof (struct Graph));
	if (G == NULL)
	{
		printf ("Could not allocate memory to G\n");
		exit (0);
	}
	printf ("Enter no. of Vertices: ");
	scanf ("%d", &(G -> V));
	printf ("Enter no. of Edges: ");
	scanf ("%d", &(G -> E));
	printf ("Vertices = %d, Edges = %d\n", G -> V, G -> E);
	G -> Adj = (struct ListNode **) malloc ((G -> V) * sizeof (struct ListNode **));
	for (i = 0; i < (G -> V); i++)
	{  
		G -> Adj[i] = (struct ListNode *) malloc (sizeof (struct ListNode));
		((G -> Adj[i]) -> vertexNumber) = i;
		(G -> Adj[i]) -> next = G -> Adj[i];
	}
	
	printf ("Enter edges:\n");
	for (i = 0; i < (G -> E); i++)
	{
		printf ("Reading edge: ");
		scanf ("%d%d", &x, &y);
		temp = (struct ListNode *) malloc (sizeof (struct ListNode));
		temp -> vertexNumber = x;
		temp -> next = G -> Adj[y];
		G -> Adj[y] -> next = temp;
		temp = (struct ListNode *) malloc (sizeof (struct ListNode));
		temp -> vertexNumber = y;
		temp -> next = G -> Adj[x];
		G -> Adj[x] -> next = temp;
	}

	printf ("\nPrinting Graph in the form of adjacency list\n");
	for (i = 0; i < (G -> V); i++)
	{
		temp = (struct ListNode *) malloc (sizeof (struct ListNode));
		temp -> vertexNumber = G -> V;
		temp -> next = G -> Adj[i] -> next;
		printf ("\n%d -- ", temp -> vertexNumber);
		
		while ((temp -> next) != (G -> Adj[i]))
		{
			printf ("%d -- ", temp -> vertexNumber);
			temp = (temp -> next);
		}
		free (temp);
	}
	printf ("\n");
	
	//return G;
}

int main ()
{
	adjListOfGraph ();
	return 0;
}

