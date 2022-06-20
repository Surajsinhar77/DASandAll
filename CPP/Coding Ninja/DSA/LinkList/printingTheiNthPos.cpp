#include<iostream>
using namespace std;

void printIthNode(Node *head, int i)
{
    //Write your code here
    int count=-1;
    
    while(head!=NULL){
        count++;
        if(count == i){
            cout<<head->data;
            break;
        }
        head = head->next;
    }
}

int main(){
    
    return 0;
}