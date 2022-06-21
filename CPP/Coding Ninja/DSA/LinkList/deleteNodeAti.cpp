#include<iostream>
#include "NodeClass.cpp"
using namespace std;

node*delectionOfnodeAtiTh(node*head, int i){
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
    
    return 0;
}