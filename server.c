#include "header.h"

// node* createNode(int v)
// {
//     node* new_Node = malloc(sizeof(node));
//     new_Node-> = v;
//     new_Node->next = NULL;
//     return new_Node;
// }

graph *createGraph(struct Edge *edges, int n)
{
    int i;
 
    // allocate storage for the graph data structure
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
 
    // initialize head pointer for all vertices
    for (i = 0; i < n; i++) 
    {
        graph->head[i] = NULL;
    }
 
    // add edges to the directed graph one by one
    for (i = 0; i < n; i++)
    {
        // get the source and destination vertex
        int src = edges[i].src;
        int dest = edges[i].dest;
        int weight = edges[i].weight;
 
        // allocate a new node of adjacency list from `src` to `dest`
        node* newNode = (struct Node*)malloc(sizeof(node));
        newNode->dest = dest;
        newNode->weight = weight;
 
        // point new node to the current head
        newNode->next = graph->head[src];
 
        // point head pointer to the new node
        graph->head[src] = newNode;
    }
 
    return graph;
}


// void addEdge(graph* graph_var, int s, int d) {
//   // Add edge from s to d
//   node* newNode = createNode(d);
//   newNode->next = graph_var->adjList[s];
//   graph_var->adjList[s] = newNode;

// }

void printGraph(struct Graph* graph,int N)
{
    int i;
    for (i = 0; i < N; i++)
    {
        // print current vertex and all its neighbors
        node* ptr = graph->head[i];
        while (ptr != NULL)
        {
            printf("%d —> %d (%d)\t", i, ptr->dest, ptr->weight);
            ptr = ptr->next;
        }
 
        printf("\n");
    }
}
