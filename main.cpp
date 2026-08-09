#include <iostream>
#include <random>
#include <map>

#include "graph.h"

std::map<Node*,std::vector<Edge>> graph; 

int main (){ 
    int amountOfNodes; 

    std::cout<<"How many nodes?\nThe weights will a randomly determined.\n"; 
    std::cin>>amountOfNodes;
    
    graph = generateGraph(amountOfNodes);

    

}

