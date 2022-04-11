#include <stdio.h>
#include <stdlib.h>
#include "List.h"

//Initialize Graph

typedef struct GraphObj* Graph;

//Constructors

Graph newGraph(int n);
void freeGraph(Graph *pG);

//Access Functions

int getOrder(Graph G);
int getSize(Graph G);
int getSource(Graph G);
int getParent(Graph G, int u);
int getDist(Graph G, int u);
void getPath(ListL, Graph G, int u);

//Manipulation Procedures

void makeNull(Graph G);
void addEEdge(Graph G, int u, int v);
void addArc(Graph G, int u, int v);
void BFS(Graph G, int s);

//Other operations
void printGraph(FILE *out, Graph G);
