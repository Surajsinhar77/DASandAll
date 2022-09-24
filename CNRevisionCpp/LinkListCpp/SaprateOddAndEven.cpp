#include<iostream>
using namespace std;
#include "LinkedListClass.cpp"


Node *  sprateOddAndEven(Node * head){
    if(head == NULL || head->next == NULL){
        return head;
    }

    Node * oddH = NULL; 
    Node * oddT = NULL; 
    Node * evenH = NULL; 
    Node * evenT = NULL; 

    while(head != NULL){
        if(head->data%2 == 0){
            if(evenH == NULL){
                evenH = head;
                head = head->next;
                evenT = evenH;
            }else{
                evenT->next = head;
                head = head->next;
                evenT = evenT->next;
            }
        }else{
            if(oddH == NULL){
                oddH = head;
                head = head->next;
                oddT = oddH;
            }else{
                oddT->next = head;
                head = head->next;
                oddT = oddT ->next;
            }
        }
    }
    
    if(oddH == NULL){
        evenT->next = NULL;
        return  evenH;
    }else if(evenH == NULL){
        oddT->next = NULL;
        return  oddH;
    }else{
        head = oddH;
        oddT->next = evenH;
        evenT->next = NULL;
        return head;
    }
}

int main(){
    Node * head = NULL;
    head = LinkListCreation();
    head = sprateOddAndEven(head);
    display(head);
    return 0;
}