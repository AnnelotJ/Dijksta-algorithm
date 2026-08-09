#pragma once

struct Node {
    char id; 

};

struct Edge {
    Node* nodeIn; 
    Node* nodeOut; 
    int weight;

};

void generateGraph(int);
void generateNodes(int);
void generatedEdges ();
void generateEdge(Node*, Node*); 
void printGraph();
