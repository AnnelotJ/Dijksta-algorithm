#include <iostream>
#include <random>
#include <algorithm>
#include <map>
#include <algorithm>
#include <vector>
#include <set>
#include "graph.h"
#include <typeinfo>



// clang++ -std=c++17 main.cpp graph.cpp 

extern std::map<Node*, std::vector<Edge>> graph;

int main (){ 
    int amountOfNodes; 

    std::cout<<"The weights will a randomly determined.\nHow many nodes would you like to be there?\n"; 
    std::cin>>amountOfNodes;
    
    graph = generateGraph(amountOfNodes);

    Node* startNode = pickStartingNode(graph);

    generatePath(startNode, graph);
    

    return 0;
    
}

Node* pickStartingNode (std::map<Node*, std::vector<Edge>>){ 
    std::random_device rd; 
    std::mt19937 gen(rd()); 
    
    std::pair<Node*, std::vector<Edge>> result[1]; 
    std::sample(graph.begin(),graph.end(),result,1,gen); 
    Node* randomNode = result[0].first;

    return randomNode; 
}


void generatePath(Node* startingNode, std::map<Node*,std::vector<Edge>> graph){

    std::set<Node*> visitedNodes; 

    // Adding the first node to the table
    std::cout<<startingNode->id << "\n";
    visitedNodes.insert(startingNode);

    auto startingEdges = graph[startingNode];
    std::cout<<"The starting edges are:\n";
    
   
    for (const Edge& e : startingEdges) {
    Node* neighbour = (e.nodeIn == startingNode) ? e.nodeOut : e.nodeIn;
    std::cout << startingNode->id << " -- " << neighbour->id
              << " (weight: " << e.weight << ")\n";
    }

    
    // now select the shortest edge  


}




