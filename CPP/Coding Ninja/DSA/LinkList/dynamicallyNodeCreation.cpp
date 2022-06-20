#include<iostream>
#include "NodeClass.cpp"
using namespace std;

void printingDynamicNodes(node * copyOfHead){
    while(copyOfHead != NULL){
        cout<<copyOfHead->data<<" ";
        copyOfHead = copyOfHead->next;
    }
}

int main(){
     // creating object or for this called node Dynamically 
    node * head;

    node *node1 = new node(6);
    head = node1;                // address of the node1 keeping store on head point variabel of type node

    // Creating 5 nodes
    node *node2 = new node(7);   
    node *node3 = new node(8);
    node *node4 = new node(9);
    node *node5 = new node(10);


    // Linking dymanic nodes 
    node1->next = node2;               // // address of the node2 placing in node1 and address of node3 into the node2
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;

    printingDynamicNodes(head);
    return 0;
}