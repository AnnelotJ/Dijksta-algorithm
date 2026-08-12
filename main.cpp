#include <iostream>
#include <random>
#include <algorithm>
#include <map>
#include <algorithm>
#include "graph.h"

// clang++ -std=c++17 main.cpp graph.cpp 

extern std::map<Node*, std::vector<Edge>> graph;

int main (){ 
    int amountOfNodes; 

    std::cout<<"How many nodes?\nThe weights will a randomly determined.\n"; 
    std::cin>>amountOfNodes;
    
    graph = generateGraph(amountOfNodes);

    Node* x = startingNode(graph);
    std::cout << x; 
    
}

Node* startingNode(std::map<Node*, std::vector<Edge>>){ 
    std::random_device rd; 
    std::mt19937 gen(rd()); 
    
    std::pair<Node*, std::vector<Edge>> result[1]; 
    std::sample(graph.begin(),graph.end(),result,1,gen); 
    Node* randomNode = result[0].first;

    return randomNode; 
}

void generatePath(){
    std::cout<<"hello";
}
