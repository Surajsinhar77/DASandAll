#include<iostream>
using namespace std;
#include "LinkedListClass.cpp"

Node * removeDuplicates(Node * head){
    Node * current = head->next;
    Node * prev = head;

    if(head == NULL){
        return head;
    }

    while (current != NULL){
        if(prev->data==current->data){
            prev->next =  current->next;
            delete(current);
            current = prev->next; 
        }else{
            prev = prev->next;
            current= current->next;
        }
    }
    return head;
}

int main(){
    
    Node * head = NULL;
    head = LinkListCreation();
    head = removeDuplicates(head);
    cout<<head->data<<endl;
    display(head);
    return 0;
}