#include<iostream>
using namespace std;

node* insertingNewNodeAtiTH(node * head, int i, int data){

    node *newnode = new node(data);
    node * temp = head;
    int count = 0;

    if(i == 0){
        newnode->next = head;
        head = newnode;
        return head;
    }

    while(temp!=NULL && count<i-1){
        temp = temp->next;
        count++;
    }

    if(temp!=NULL){
        newnode->next = temp->next;
        temp->next = newnode;
    }
    return head;
}

int main(){
    
    return 0;
}