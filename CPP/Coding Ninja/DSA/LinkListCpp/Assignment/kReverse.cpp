#include<iostream>
using namespace std;
#include "LinkedListClass.cpp"

class Pair{
    public:
    	Node * head;
    	Node * tail;
};

Pair reverseList(Node * head){
    
    if(head == NULL || head->next == NULL){
		Pair p1;
        p1.head = head;
        p1.tail = head;
        return p1;
    }
    
    Pair ans = reverseList(head->next);
    ans.tail->next = head;
    head->next = NULL;
    Pair p2;
    p2.head = ans.head;
    p2.tail = head;
    return p2;
}	


Node * movereR(Node * mover, int k){
    Node * head = mover;
    for(int i = 1; i < k && mover != NULL; i++){
        mover = mover->next;
    }
    if(mover!=NULL){
        Node * get = mover->next;
        mover->next = NULL;
        return get;
    }
    return NULL;
}

Node *kReverse(Node *head, int k){
    
    if(head == NULL || head->next == NULL || k == 0 ){
        return head;
    }
	
    //Write your code here
    Node * mainHead = NULL;
    Node * mainTail = NULL;
    
    while(head!=NULL){
        
        Node * nextpart = movereR(head,k);
        
        Pair p = reverseList(head);
        if(mainHead==NULL){
            cout<<" ---  "<<endl;
            display(p.head);
            cout<<" ---  "<<endl;
            mainHead = p.head;
        }else{
            mainTail->next = p.head;
        }
        
        mainTail = p.tail;
        head = nextpart;
    }
    return mainHead;
}


int main(){
    Node * head = NULL;
    head = LinkListCreation();

    int k;
    cin>>k;
    head = kReverse(head,k);
    display(head);
    return 0;
}