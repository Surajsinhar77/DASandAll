#include<iostream>
using namespace std;
#include "LinkedListClass.cpp"

Node * LinkListCreation(){
    Node * head = NULL;
    Node* temp =NULL;
    int data;
    cin>>data;
    while(data != -1){
        Node * newNode = new Node(data);

        if(head==NULL){
            head = newNode;
            temp = head;
        }else{
            temp->next = newNode;
            temp = temp->next;
        }
        
        cin>>data;
    }
    return head;
}

void display(Node * head){

    while(head!=NULL){
        cout<<head->data<<endl;
        head=head->next;
    }
}

int main(){

    Node * head;
    head = LinkListCreation();
    display(head);
    return 0;
}