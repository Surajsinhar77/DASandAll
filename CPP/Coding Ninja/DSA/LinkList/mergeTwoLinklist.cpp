#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node * next;

    node(){
        next = NULL;
    }
};

node *insertInLinklist()
{
    int data;
    cin >> data;
    node *head = NULL;
    node *tail = NULL;
    while (data != -1)
    {
        cout << "coming" << endl;
        node *newnode = new node;
        if (head == NULL)
        {
            newnode->data = data;
            head = newnode;
            tail = head;
        }
        else
        {
            newnode->data = data;
            tail->next = newnode;
            tail = tail->next;
        }
        cin >> data;
    }
    //     cout<<head->data<<endl;
    return head;
}

void display(node * head ){
    if(head == NULL){
        return;
    }
    cout<<head->data<<endl;
    display(head->next);
}

node * mergeTwoLinklist(node * head , node * head2){

    node * finalhead = NULL;
    node * finaltail = NULL;
    
    if (head2 == NULL){
        return head;
    }

    if (head == NULL){
        return head2;
    }

    while (head != NULL && head2 != NULL){
        /* code */
        if (finalhead==NULL){
            if(head->data <= head2->data){
                finalhead = head;
                head =  head->next;
                finaltail = finalhead;
            }else{
                finalhead = head2;
                head2 = head2->next;
                finaltail = finalhead;
            }
        }

            if(head->data <= head2->data){
                finaltail->next = head;
                head = head->next;
                finaltail= finaltail->next;
            }else{
                finaltail->next = head2;
                head2 = head2->next;
                finaltail = finaltail->next;
            }
    }

    if(head!=NULL){
        while (head!=NULL){
            finaltail->next = head;
            head= head->next;
            finaltail = finaltail->next;
        }
        
    }
    if(head2!=NULL){
        while (head2!=NULL)
        {
            /* code */
            finaltail->next = head2;
            head2 = head2->next;
            finaltail = finaltail->next;
        }
        
    }
    return finalhead;
}

node * getmid(node* head){

    node* slow = node;
    node* fast = node;
    
}

int main(){
    
    node * head = insertInLinklist();

    display(head); 
    cout<<"2nd linklist "<<endl;
    node * head2 = insertInLinklist();

    display(head2);   

    // node* head3 = mergeTwoLinklist(head, head2);
    node * mid = getmid(head);
    display(head3);
    return 0;
}