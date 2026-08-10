#pragma once

struct Node {
    char id; 

};

struct Edge {
    Node* nodeIn; 
    Node* nodeOut; 
    int weight;

};

extern std::map<Node*,std::vector<Edge>> graph; 
std::map<Node*, std::vector<Edge>> generateGraph(int);

// Main functions
Node* startingNode(std::map<Node*,std::vector<Edge>>);
void generatePath(); 

// Graph functions
void generateNodes(int);
void generatedEdges ();
void generateEdge(Node*, Node*); 
void printGraph();



