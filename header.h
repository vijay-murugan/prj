#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct node {
  int dest;
  int weight;
  struct node* next;
}node;

node* createNode(int );
struct Edge {
    int src, dest, weight;
};

typedef struct Graph
{
    // An array of pointers to Node to represent an adjacency list
    struct Node** head;
}graph;
// typedef struct Graph {
//   int verNum;
//   node* adjList;
//   struct Graph * next_graph;  
// }graph;

graph* createGraph(struct Edge * , int );

void addEdge(graph* , int , int );