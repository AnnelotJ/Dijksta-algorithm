#include <iostream>
#include <random>
#include <algorithm>
#include <map>
#include <algorithm>
#include <vector>
#include <set>
#include "graph.h"


// clang++ -std=c++17 main.cpp graph.cpp 

extern std::map<Node*, std::vector<Edge>> graph;

int main (){ 
    int amountOfNodes; 

    std::cout<<"How many nodes?\nThe weights will a randomly determined.\n"; 
    std::cin>>amountOfNodes;
    
    graph = generateGraph(amountOfNodes);

    Node* startNode = startingNode(graph);

    generatePath(startNode, graph);

    // std::cout<<"Start Node::" << startNode->id << "\nx";

    // for (const Edge& e : graph.at(startNode)) {
    // std::cout << "  " << e.nodeIn->id << " -> " << e.nodeOut->id
    //           << " (weight: " << e.weight << ")\n";

    
    //}
    
}

Node* startingNode(std::map<Node*, std::vector<Edge>>){ 
    std::random_device rd; 
    std::mt19937 gen(rd()); 
    
    std::pair<Node*, std::vector<Edge>> result[1]; 
    std::sample(graph.begin(),graph.end(),result,1,gen); 
    Node* randomNode = result[0].first;

    return randomNode; 
}

void generatePath(Node* startingNode, std::map<Node*,std::vector<Edge>> graph){
   
    int distance = 0; 

    std::set<Node*> visitedNodes; 

    // Retrieve the starting edge
    
    auto startingEdges = graph[startingNode];
    // now select the shortest edge 
    

}
