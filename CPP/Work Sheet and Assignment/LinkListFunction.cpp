#include<iostream>
using namespace std;

struct node{
    public:
    int data;
    node* nxt;
};

struct node* head = NULL;
int linklist(int input){
    struct node* start;
    start = new node;
    start->data = input;
    start->nxt = head;
    head = start;
};

void searchIng(int item){
    struct node* ptr;
    ptr = head;

    while (ptr != NULL) {
        if (item==ptr->data){
            cout<<"I found your item :"<<item<<" is correct => :"<<ptr->data<<endl;
            break; 
        }
        ptr = ptr->nxt;
    }
};

void delectIng(int item){
    struct node* ptr;
    struct node* ptrNX;
    struct node* ptrPVR;
    ptr = head;
    
    while (ptr != NULL) {
        if (item==ptr->data){
            ptrPVR = ptr;
            ptrNX = ptr->nxt;
            ptrPVR->nxt = ptrNX->nxt;
        }
        ptr = ptr->nxt;
    }
};

void delectingAll(){
    head=NULL;
}

void display() {
    struct node* ptr;
    ptr = head;
    if (ptr==NULL){
        cout<<"Underflow"<<endl;
    }
    while (ptr != NULL) {
        cout<< ptr->data <<" ";
        ptr = ptr->nxt;
    }
    cout<<"\n";

    // Programmer Deatail
    cout<<"Name- Suraj Kumar\nUID - 21BCS8187"<<endl;
};

int main(){

    linklist(2);
    linklist(3);
    linklist(4);
    linklist(5);


    cout<<"Enter 1 for the Inserting element\nEnter 2 for the Display All element\nEnter 3 for the delete a element\nEnter 4 for the delete all element\nEnter 5 for the Serch an element\n : "; 
    int index;
    cin>>index;
    
    switch (index)
    {
    case 1:
        cout<< "enter the value of insert in linklist :";
        int x;
        cin>>x;
        linklist(x);    
        break;
    case 2:
        display();
        break;
    case 3:
        int item1;
        cout<<"Enter the element for delect: ";
        cin>>item1;
        delectIng(item1);
        break;
    case 4:
        delectingAll();
        break;
    case 5:
        int item;
        cout<<"Enter the element for search: ";
        cin>>item;
        searchIng(item);
        break;
    default:
        cout<<"You enter wrong entry check and try again"<<endl;
        break;
    }
    if(index!=2)
        display();
    return 0;
}