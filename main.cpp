#include <iostream>
#include <random>

#include "graph.h"



int main (){ 
    int amountOfNodes; 

    std::cout<<"How many nodes?\nThe weights will a randomly determined.\n"; 
    std::cin>>amountOfNodes;
    
    generateGraph(amountOfNodes);

}

