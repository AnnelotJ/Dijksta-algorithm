#pragma once

struct Node {
    char id; 

};

struct Edge {
    Node* nodeIn; 
    Node* nodeOut; 
    int weight;

};

std::map<Node*,std::vector<Edge>> graph; 

std::map<Node*, std::vector<Edge>> generateGraph(int);
void generateNodes(int);
void generatedEdges ();
void generateEdge(Node*, Node*); 
void printGraph();

