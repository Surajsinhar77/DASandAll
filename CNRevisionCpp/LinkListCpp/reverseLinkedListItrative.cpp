#include<iostream>
using namespace std;
#include "LinkedListClass.cpp"

Node * reverseItrativeLList(Node * head){
    if(head == NULL || head->next == NULL){
        return head;
    }

    Node * prev = NULL;
    Node * curr = head;
    

    while(curr != NULL){
        Node * next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

int main(){
    Node * head = NULL;
    head = LinkListCreation();

    head = reverseItrativeLList(head);
    display(head);
    return 0;
}