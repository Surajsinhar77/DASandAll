#include<iostream>
#include "NodeClass.cpp"
using namespace std;

void printingDynamicNodes(node * copyOfHead){
    while(copyOfHead != NULL){
        cout<<copyOfHead->data<<" ";
        copyOfHead = copyOfHead->next;
    }
}

node *takeInput(){

    int data;
    cin>> data;
    node * head = NULL,*temp = NULL;
    char nd;
    do{
        node *newNode = new node(data);
        
        if(head==NULL){
            head = newNode;
            temp = head;
        }else{
            temp->next = newNode;
            temp = newNode;
        }

        cout<<"You want to enter new data to press (y/n) and n for no : " ;
        cin>>nd; 
        if(nd=='y'){
            cin>>data;
        }
    } while (nd =='y');    
    return head;
}

node *takeInput2(){
    int data;
    cin>> data;
    node * head=NULL;
    
    while(data!= -1){
        node *newnode = new node(data);

        if(head==NULL){
            head = newnode;
        }else{
            node * temp = head;
            while(temp->next!=NULL){
                temp = temp->next;
            }
            temp->next = newnode;
        }

        cin>>data;
    }
    return head;
} 

int main(){

    node * head = takeInput();
    // node* head = takeInput2();
    printingDynamicNodes(head);



    return 0;
}