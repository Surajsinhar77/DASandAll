#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node * next;
    node(int data){
        this->data = data;
        this->next = NULL;
    }
};


void printingDynamicNodes(node * copyOfHead){  // Printing the Element og the linklist
    while(copyOfHead != NULL){
        cout<<copyOfHead->data<<" ";
        copyOfHead = copyOfHead->next;
    }
}

node *takeInput(){                // taking inputs and making LL  O(n) complexity

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

        // cout<<"You want to enter new data to press (y/n) and n for no : " ;
        cin>>nd; 
        // if(nd=='y'){
            // cin>>data;
        // }
    } while (nd != -1);    
    return head;
}


int main(){
    
    node * head = takeInput();
    printingDynamicNodes(head);
    return 0;
}