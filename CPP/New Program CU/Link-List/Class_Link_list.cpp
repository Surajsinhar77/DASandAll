#include<iostream>
using namespace std;

// struct node {
//     int data;
//     struct node *nxt;
// };

// class node{
//     public:
//         int data;
//         node *nxt;
// };
    int  recur(int n){
        while (n==0){
            return 1;
        }
        return  n*recur(n-1);
        // cout<<"this is a recursice F"+n;
        // recur(n);
    };

int main(){ 

    int a = recur(6);
    cout<<a<<endl;

    // node *ptr;
    // node *start;
    // node *end;
    // node *temp;



    // struct node * ptr;
    // struct node * start;
    // struct node * end;
    // struct node * temp;

    // start  = new node;
    // ptr  = new node;
    // end  = new node;
    // temp  = new node;

    // start -> nxt = ptr;
    
    // ptr->data = 3;
    // ptr->nxt =end;

    // end ->data = 4;
    // end->nxt =temp;

    // temp->data=6;
    // temp->nxt=end;

    

    // cout<<ptr->data<<endl;
    // cout<<temp->data<<endl;
    // cout<<end->data<<endl;



    return 0;
}
