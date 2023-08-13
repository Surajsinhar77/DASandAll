#include<iostream>
using namespace std;
#include "LinkedListClass.cpp"

Node *skipMdeleteN(Node *head, int m, int n){
	// Write your code here
    if(head == NULL ){
        return head;
    }

    if( m == 0 && n == 0){
        return NULL;
    }

    int count1 = 1;
    int count2 = 1;
    Node * start = head;
    while(start !=NULL ){
        
    }
}

int main(){
    Node * head = NULL;
    head = LinkListCreation();
    int m,n;
    cin>>m>>n;
    head = skipMdeleteN(head,m,n);
    display(head);
    return 0;
}