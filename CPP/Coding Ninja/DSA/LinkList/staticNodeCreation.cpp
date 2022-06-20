#include<iostream>
#include "NodeClass.cpp"
using namespace std;

    void printingDataFromLL(node *CpyOfHead){

        while(CpyOfHead != NULL){
            cout<<CpyOfHead->data<<endl;
            CpyOfHead = CpyOfHead->next;
        }
    }

int main(){
    node * head;

    node node1(1);          // creating object or for this called node 
    head = &node1;          // address of the node1 keeping store on head point variabel of type node

    node node2(2);
    node node3(3);
    node node4(4);
    node node5(5);

    //  linking the nodes together 
    node1.next = &node2;     // address of the node2 placing in node1 and address of node3 into the node2 same as it
    node2.next = &node3;
    node3.next = &node4;
    node4.next = &node5;


    printingDataFromLL(head);      // Printing all data node  
    printingDataFromLL(head);
    return 0;
}