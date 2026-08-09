#include <iostream>
#include <random>
#include <map>
#include <vector> 
#include <random>

#include "graph.h"

std::map<Node*,std::vector<Edge>> graph; 
std::vector<Node*> nodeList;

std::random_device rd;
std::mt19937 gen(rd());
std::uniform_int_distribution<> weightDist(0,100);


std::map<Node*, std::vector<Edge>> generateGraph(int amountOfNodes){ 
    generateNodes(amountOfNodes);
    generatedEdges();
    printGraph();

    return graph;
}

void printGraph() {
    for (const auto& [node, edges] : graph) {
        std::cout << "Node " << node->id << " has " << edges.size() << " edges:\n";
        for (const auto& edge : edges) {
            std::cout << "  -> " << edge.nodeIn->id 
                      << " to " << edge.nodeOut->id 
                      << " (weight: " << edge.weight << ")\n";
        }
    }
}


void generateNodes(int amountOfNodes) { 
    for (int i =0; i<amountOfNodes; i++){
        Node* newNode = new Node();
        newNode->id = 'A' + i;
        graph[newNode];
        nodeList.push_back(newNode);
    }
}

bool allNodesConnected(){
    for (const auto& [node, edge] : graph){
        if (edge.empty()){
            return false; 
        }
    }
    return true;
}

void generatedEdges (){ 
    std::uniform_int_distribution<> dist(0, nodeList.size() - 1);
    while (!allNodesConnected()){
       Node* a = nodeList[dist(gen)]; 
       Node* b = nodeList[dist(gen)];
    
       if (a == b){ 
        continue;
       }
       
       generateEdge(a,b);
    }

}

void generateEdge (Node* in, Node* out){
    Edge newEdge;
    newEdge.nodeIn = in;
    newEdge.nodeOut = out;

    newEdge.weight = weightDist(gen);

    graph[in].push_back(newEdge);
    graph[out].push_back(newEdge);

}


