#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        next = NULL;
    }
};

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
            cout<<head->data<<" ";
            head=head->next;
        }
    }