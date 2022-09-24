#include<iostream>
using namespace std;
#include "LinkedListClass.cpp"

Node* sortedMerge(Node* head1, Node* head2)  
{  
    Node * mainHead = NULL;
    Node * mainTail = NULL;
    // code here
    while(head1 != NULL && head2 != NULL){
        if(head1->data < head2->data){
            
            if(mainHead == NULL){
                mainHead = head1;
                mainTail = head1;
                head1 = head1->next;
            }
            else{
                mainTail->next = head1; 
                head1 = head1->next;
                mainTail = mainTail->next;
            }
        }else if(head1->data > head2->data){
            
            if(mainHead == NULL){
                mainHead = head2;
                mainTail = head2;
                head2 = head2->next;
            }
            else{
                mainTail->next = head2; 
                head2 = head2->next;
                mainTail = mainTail->next;
            }
        }else{
            if(mainHead == NULL){
                mainHead = head2;
                mainTail = head2;
                head2 = head2->next;
                mainTail->next = head1;
                head1 = head1->next;
                mainTail = mainTail->next;
            }else{
                mainTail->next = head1;
                head1 = head1->next;
                mainTail = mainTail->next;
                mainTail->next = head2;
                head2 = head2->next;
                mainTail = mainTail->next;
            }
        }
    }
    while(head1!=NULL){
        mainTail->next = head1;
        head1 = head1->next;
        mainTail = mainTail->next;
    }
    while(head2!=NULL){
        mainTail->next  = head2;
        head2 = head2->next;
        mainTail = mainTail->next;
    }
    return mainHead;
}  

Node * MidPointOfTheLL(Node * head){
    if(head==NULL){
        return head;
    }

    Node * slow = head;
    Node * fast = head->next;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }    
    return slow;
}


Node * mergeSort(Node * head ){
        if(head == NULL || head->next == NULL){
            return head;
        }
        Node* midNode = MidPointOfTheLL(head);
            
        Node * left = head;
        Node * right = midNode->next;
        midNode->next = NULL;
            
        left = mergeSort(left);
        right = mergeSort(right);
        return sortedMerge(left,right);
}

int main(){
    Node * head = NULL;
    head = LinkListCreation();
    head = mergeSort(head);
    display(head);
    return 0;
}