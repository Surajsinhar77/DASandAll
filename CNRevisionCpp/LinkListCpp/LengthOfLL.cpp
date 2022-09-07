#include<iostream>
using namespace std;
#include "LinkedListClass.cpp"

int LengthOfLL(Node*head){
    if(head==NULL){
        return 0;
    }
    return LengthOfLL(head->next)+1;
}

int main(){

    Node * head;
    head = LinkListCreation(); 

    cout<<LengthOfLL(head)<<endl;
    display(head);
    return 0;
}