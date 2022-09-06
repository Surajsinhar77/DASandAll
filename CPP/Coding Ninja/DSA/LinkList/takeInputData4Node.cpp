#include<iostream>
#include "NodeClass.cpp"
using namespace std;

node* insertingNewNodeAtiTH(node * head, int i, int data){  // inserting the element at ith position

    node *newnode = new node(data);
    node * temp = head;
    int count = 0;

    if(i == 0){
        newnode->next = head;
        head = newnode;
        return head;
    }

    while(temp!=NULL && count<i-1){
        temp = temp->next;
        count++;
    }

    if(temp!=NULL){
        newnode->next = temp->next;
        temp->next = newnode;
    }
    return head;
}

void printIthNode(node *head, int i) // printing i th element in the node
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

node *takeInput2(){       // taking inputs and making LL O(n2) complexity
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

node*delectionOfnodeAtiTh(node*head, int i){ // deleting the element at ith position
    int count=0;
    node * temp = head;
    if(i==0){
        temp = head->next;
        head = temp;
        return head;
    }
    while(head != NULL && count<i-1){
        head = head->next;
        count++;
    }
    if(head != NULL){
        node * a = head->next;
        head ->next = a->next;
        delete a;
    }
    return head;
}

int main(){

    node * head = takeInput();
    // node* head = takeInput2();
    head = insertingNewNodeAtiTH(head,2,99);
    printingDynamicNodes(head);
    head = delectionOfnodeAtiTh(head,0);
    cout<<endl;
    printingDynamicNodes(head);
    return 0;
}