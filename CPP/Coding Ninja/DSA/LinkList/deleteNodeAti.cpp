#include<iostream>
#include "NodeClass.cpp"
using namespace std;

node*delectionOfnodeAtiTh(node*head, int i){
    int count=0;
    while(head != NULL && count<i-1){
        head->next->next = head;
        count++;
    }
    
}

int main(){
    
    return 0;
}