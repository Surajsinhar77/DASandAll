#include<iostream>
using namespace std;

struct node
{   
    int data;
    struct node* self;
    /* data */
};


int main(){

    struct node* makerMover;
    struct node* head;
    struct node* temp;

    makerMover = new node;
    
    makerMover->data=7;
    makerMover->self = NULL;

    temp = makerMover;
    head = makerMover;

    makerMover = new node;
    makerMover->data=8;
    makerMover->self= NULL;

    head->self= makerMover;

    temp = makerMover;

    makerMover = new node;
    makerMover->data = 9;
    makerMover->self= NULL;

    temp->self = makerMover;



    // cout<<makerMover->data<<endl;
    for (int i=0; i<3; i++){
        
        cout<<head->data<<endl;
        if (temp->self=NULL){
            break;
        }
    }

    // cout<<"Hello World";
    return 0;
}