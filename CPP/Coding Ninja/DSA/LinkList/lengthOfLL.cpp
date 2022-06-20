#include<iostream>
#include "NodeClass.cpp"
using namespace std;

int length(node * head){
    int count = 0;

    while(head->data != NULL){
        count++;
        head = head->next;
    }
    return count;
}

int main(){
    
    return 0;
}