#include <iostream>
using namespace std;
#include "LinkedListClass.cpp"

// easy way to delect the node by recusrion 

Node *deleteNodeRec(Node *head, int k){
    if(head == NULL){
        return NULL;
    }

    if(k==0){
        Node*temp = head->next;
        delete(head);
        return temp;
    }

    head->next = deleteNodeRec(head->next, k-1);
    return head;
}

Node * deleteNodeRec(Node * head, int k, int data){
    if(head==NULL){
        return NULL;
    }

    
}

int main(){
    Node *head;
    head = LinkListCreation();
    cout<<"Enter the position to insert "<<endl;
    int i;
    cin>>i;

    head = deleteNodeRec(head,i);
    display(head);
    return 0;
}