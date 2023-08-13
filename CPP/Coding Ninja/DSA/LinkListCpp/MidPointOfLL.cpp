#include<iostream>
using namespace std;
#include "LinkedListClass.cpp"


Node * MidPointOfTheLL(Node * head){
    if(head==NULL){
        return head;
    }
    
    Node * slow = head;
    Node * fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }    
    return slow;
}

int main(){   
    Node * head = NULL;
    head = LinkListCreation();
    
    Node * ans = MidPointOfTheLL(head);
    cout<<ans->data<<endl;
    return 0;
}