#include<iostream>
#include "NodeClass.cpp"
using namespace std;

void printIthNode(Node *head, int i) // printing i th element in the node
{
    //Write your code here
    int count=-1;
    
    while(head!=NULL){
        count++;
        if(count == i){
            cout<<head->data;
            break;
        }
        head = head->next;
    }
}

int length(node * head){   // Printing the Length of the Linklist
    int count = 0;

    while(head != NULL){
        count++;
        head = head->next;
    }
    return count;
}

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

        cout<<"You want to enter new data to press (y/n) and n for no : " ;
        cin>>nd; 
        if(nd=='y'){
            cin>>data;
        }
    } while (nd =='y');    
    return head;
}

node *takeInput2(){       // taking inputs and making LL O(n) complexity
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