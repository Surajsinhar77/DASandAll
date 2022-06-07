#include <iostream>
using namespace std;

struct node
{

    int data;
    struct node *next;
};

void printingNodedata(struct node *mover)
{
    while (mover != NULL)
    {
        cout << "Element of Node :" << mover->data << endl;
        mover = mover->next;
    }
}

int main(){

    int n, a[3];
    cout << "Enter the n digit Number :";
    cin >> n;
    
    for (int i = 0; i < 3; i++)
    {
        int b = n % 10;
        cout << b << endl;
        a[i] = b;
        n = n / 10;
    }

    struct node *ptr;
    struct node *head;
    struct node *temp;

    ptr = new node;
    ptr->data = a[2];
    ptr->next = NULL;
    temp = ptr;
    head = ptr;

    ptr = new node;
    ptr->data = a[1];
    ptr->next = NULL;
    temp = ptr;
    head->next = temp;

    ptr = new node;
    ptr->data = a[0];
    ptr->next = NULL;
    temp->next = ptr;

    printingNodedata(head);

    return 0;
}