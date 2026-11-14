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
Node* pickStartingNode(std::map<Node*,std::vector<Edge>>);
void generatePath(Node*, std::map<Node*,std::vector<Edge>>); 

// Graph functions
void generateNodes(int);
void generatedEdges ();
void generateEdge(Node*, Node*); 
Node* retrieveEdge(const Edge& e, Node* a);
bool edgeExist(Node*, Node*);
void printGraph();



