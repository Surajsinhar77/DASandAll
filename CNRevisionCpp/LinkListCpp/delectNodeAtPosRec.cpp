#include <iostream>
using namespace std;
#include "LinkedListClass.cpp"

// easy way to delect the node by recusrion 

Node *deleteNodeRec(Node *head, int k){
    // If invalid k
    //     if (k < 0)
    //        return head;

    // If linked list is empty
    if (head == NULL)
        return NULL;

    // Base case (start needs to be deleted)
    if (k == 0)
    {
        Node *res = head->next; // saving the address of the  next node in res  and returning the res and the res saves in the pervious node next mai
        delete (head);
        return res;
    }

    head->next = deleteNodeRec(head->next, k - 1);
    return head;
}

int main(){
    Node *head;
    head = LinkListCreation();

    cout<<"Enter the position to insert "<<endl;
    int i;
    cin>>i;

    head = deleteNodeRec(head,i);
    display(head);
    return 0;
}