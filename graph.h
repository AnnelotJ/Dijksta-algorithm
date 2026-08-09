#pragma once

struct Node {
    char id; 

};

struct Edge {
    Node* nodeIn; 
    Node* nodeOut; 
    int weight;



};

void makeNode();
