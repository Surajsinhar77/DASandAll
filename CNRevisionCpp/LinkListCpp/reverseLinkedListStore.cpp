#include<iostream>
using namespace std;
#include "LinkedListClass.cpp"

class Pair{
    public:
    Node * head;
    Node * tail;
};

Pair reverse_2(Node * head){
    if(head == NULL || head->next == NULL){
        Pair ans;
        ans.head = head;
        ans.tail = head;
        return ans;
    }

    Pair smallans = reverse_2(head->next);
    smallans.tail->next = head;
    head->next = NULL;
    Pair ans;
    ans.head = smallans.head;
    ans.tail = head;
    return ans;
}

Node * reverseLinkedList(Node * head){

    Pair ans = reverse_2(head);
    return ans.head;
}

int main(){
    Node * head = NULL;
    head = LinkListCreation();

    head = reverseLinkedList(head);
    display(head);
    return 0;
}