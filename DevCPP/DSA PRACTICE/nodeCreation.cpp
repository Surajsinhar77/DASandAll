#include<iostream>

using namespace std;

class node{
    public:
        int data;
        node* next;

    node(int data){
        this->data = data;
        next = NULL;
    }
};


node * insertingInLinkl(){
    int data;
    cin>>data;

    node* head = NULL;
    node* tail = NULL;
    
    while(data!= -1 ){
        node* newnode = new node(data);
        
        if(head == NULL){
            head = newnode;
            tail = head;
        }else{
            tail->next = newnode;
            tail =  tail->next;
        }

        cin>>data;
    }
    return head;
}

void display(node* head){

    while (head!=NULL)
    {
        cout<<head->data<<endl;
        head = head->next;
    }
}

int main(){

    node *head = insertingInLinkl();

    display(head);


}