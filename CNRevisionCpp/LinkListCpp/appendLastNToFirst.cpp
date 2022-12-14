#include<iostream>
using namespace std;
#include "LinkedListClass.h"

Node * appendLastNToFirst(Node * head, int n){
    Node * start = head;
    Node * ptr = head;

    if(head==NULL){
        return NULL;
    }

    if(head->next==NULL){
        return head;
    }
    
    int count = 0;
    while(count != n-2){
        count++;
        start = start->next;
    }

    Node * temp = start->next;
    // start = NULL;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    head = start->next;
    start->next = NULL;
    temp->next = ptr;

    return head;
}

int main(){
    Node * head = NULL;
    head = LinkListCreation();
    // int lengthofLinkedlist = LengthOfLL(head);

    cout<<"Enter the size to rotate : "<<endl;
    int i; cin>>i;

    head = appendLastNToFirst(head, i);
    display(head);    
    return 0;
}