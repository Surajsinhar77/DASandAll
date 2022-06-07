#include<iostream>
using namespace std;

struct node{
    public:
    int data;
    node* nxt;
};

struct node* head = NULL;
int linklist(int input){
    struct node* start;
    start = new node;
    start->data = input;
    start->nxt = head;
    head = start;
};

void display() {
    struct node* ptr;
    ptr = head;
    if (ptr==NULL){
        cout<<"Underflow"<<endl;
    }
    while (ptr != NULL) {
        cout<< ptr->data <<" ";
        ptr = ptr->nxt;
    }
    cout<<"\n";

    // Programmer Deatail
    cout<<"Name- Suraj Kumar\nUID - 21BCS8187"<<endl;
};

int main(){
    cout<<"Enter the N Numbers"<<endl;
    int n;
    cin>>n;
    
    while(n>0){
        int y = n%10;
        linklist(y);
        n = n/10;
    }

    cout<<"Your n Numbers in the linklist node"<<endl;
    display();
    return 0;
}