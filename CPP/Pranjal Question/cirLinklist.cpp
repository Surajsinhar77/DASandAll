#include<iostream>
using namespace std;

struct node{
    int data;
    node * link;
};

node * head = NULL;

void nodeCreation(){
    
    cout << "Enter the value  to insert : ";
    int a;
    cin>>a;

    node * newnode = new node;
    newnode->data = a;

    if(head == NULL){
        head = newnode;
        head->link = head;
    }else{

        node*ptr = head;
        while(ptr->link!=head){
            ptr = ptr->link;
        }
        ptr->link = newnode;
        ptr->link->link  = head;
    }
}

void dPlay(){
    node * ptr2 = head;
    while(ptr2->link!= head){
        cout<<"DATA IS : "<<ptr2->data<<endl;
        ptr2 = ptr2->link;
    }
        cout<<"DATA IS : "<<ptr2->data<<endl;
}

int main(){
        nodeCreation();
        nodeCreation();
        nodeCreation();
        dPlay();
    return 0;
}