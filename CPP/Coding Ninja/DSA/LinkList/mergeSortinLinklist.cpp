#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node()
    {
        this->next = NULL;
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

void display(node *head)
{
    // 	cout<<"eee"<<endl;
    if (head == NULL)
    {
        cout << "aaya" << endl;
        return;
    }
    cout << head->data << endl;
    display(head->next);
}

//=========================================================================
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


node *getmid(node *head){
    if(head!=NULL){
        node* slow = head;
        node* fast = head->next;
        
        while(fast!=NULL && fast->next!= NULL){
            slow = slow->next;
            
            if(fast->next->next==NULL){
                fast = fast->next;
            }else{
            	fast =  fast->next->next;
            }
        }
        return slow;
    } 
}

node * mergesort(node *head){

    cout << "mergeSort"<<endl; 
    if (head ==NULL || head->next==NULL)
    {
        return head;
    }

    node *mid = getmid(head);
    node *rlist = head;
    node *llist = mid->next;
    cout<<llist->data<<endl;
    mid->next = NULL;
    llist = mergesort(llist);
    rlist = mergesort(rlist);
    node * finalhead = mergeTwoLinklist(rlist, llist);
    return finalhead;
}

int main()
{

    node *head = insertInLinklist();
    // cout << "ee";
    display(head);
    head = mergesort(head);
    cout << "ff";
    display(head);
    return 0;
}