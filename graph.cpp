#include <iostream>
#include <random>
#include <map>
#include <vector> 
#include <random>

#include "graph.h"

std::map<Node*,std::vector<Edge>> graph; 


void generateGraph(int amountOfNodes){ 
    generateNodes(amountOfNodes);

    

}


void generateNodes(int amountOfNodes) { 
    // std::cout<<"Making " << amountOfNodes << " Nodes\n";
    for (int i =0; i<amountOfNodes; i++){
        Node* newNode = new Node();
        newNode->id = 'A' + i;
        graph[newNode];
    }
    
    // for(const auto& pair : graph){
    //     std::cout<< pair.first->id << ": " << pair.second.size() <<std::endl;
    // }
}

void generateEdges (Node* a, Node* b){


}


