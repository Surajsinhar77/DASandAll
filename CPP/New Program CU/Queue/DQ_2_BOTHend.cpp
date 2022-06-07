#include <iostream>
using namespace std;
#define MAX 50

void insert();
void delete1();
void display();
int queue_array[MAX];
int rear = - 1;
int front = - 1;
int main()
{
    int choice;
    while (1)
    {   
        cout<<endl;
        cout<<"1.Insert element to queue \n";
        cout<<"2.Delete element from queue \n";
        cout<<"3.Display all elements of queue \n";
        cout<<"4.Quit \n";
        cout<<"Enter your choice : ";
        cin>>choice;
        cout<<endl;
        switch (choice)
        {
            case 1:
            insert();
            break;
            case 2:
            delete1();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(1);
            default:
            cout<<"Wrong choice \n";
        } /* End of switch */
    } /* End of while */
} /* End of main() */

void insert()
{
    int add_item;
    if (rear == MAX - 1)
    cout<<"Queue Overflow \n";
    else
    {
        if (front == - 1)
        /*If queue is initially empty */
        front = 0;
        cout<<"Inset the element in queue : ";
        cin>>add_item;
        rear = rear + 1;
        queue_array[rear] = add_item;
    }
} /* End of insert() */

void delete1()
{
    if (front == - 1 || front > rear)
    {
        cout<<"Queue Underflow \n";
        return ;
    }
    else
    {
        cout<<"Element deleted from queue is : "<< queue_array[front];
        front = front + 1;
    }

    if (front == - 1 || front > rear)
    {
        cout<<"Queue Underflow \n";
        return ;
    }
    else{
        cout<<"Element deleted from queue is : "<< queue_array[rear];
        rear = rear - 1;
    
    }
} /* End of delete1() */

void display()
{
    int i;
    if (front == - 1)
        cout<<"Queue is empty \n";
    else
    {
        cout<<"Queue is : \n";
        for (i = front; i <= rear; i++)
            cout<<" "<<queue_array[i];
		cout<<"\n"<<"Suraj Kumar "<<"UID – 21BCS8187 ";
        cout<<"\n";
    }
} /* End of display() */
