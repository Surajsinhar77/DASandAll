#include<iostream>
using namespace std;
#include "LinkedListClass.cpp"


Node*insertNodeSub(Node* head,int i, int data,int &count){

    Node * newnode = new Node(data);

    if(head==NULL){
        return NULL;
    }

    if(i == 0){
        newnode->next = head;
        head = newnode;
        return head;
    }

    count++; 
    if(count <= i){
        if(head->next==NULL && count == i){
            head->next = newnode;
            return head;
        }
        else if(count+1==i){
            newnode->next = head->next;
            head->next = newnode;
        }
    }
    

    Node * asn  =  insertNodeSub(head->next, i, data, count);
    return asn = head;
}


Node* insertNode(Node *head, int i, int data) {
	// Write your code here
    int count = -1;
    return insertNodeSub(head,i,data,count);
}



int main(){
    
    Node *head;
    head = LinkListCreation();

    cout<<"Enter the position to insert "<<endl;
    int i;
    cin>>i;

    cout<<"Enter the data to insert "<<endl;
    int data;
    cin>>data;

    head = insertNode(head, i, data);
    display(head); 
    return 0;
}