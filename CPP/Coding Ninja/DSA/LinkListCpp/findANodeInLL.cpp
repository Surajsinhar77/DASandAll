#include<iostream>
using namespace std;
#include "LinkedListClass.cpp"

int findANodeinLinklist(Node * head, int n){
    if(head==NULL){
        return -1;
    }
    if(head->data == n){
        return 0;
    }
    int ans = findANodeinLinklist(head->next,n);
    if(ans == -1){
        return ans;
    }else{
        return ans+1;
    }
}

int main(){
    
    Node * head = NULL;
    head = LinkListCreation();

    cout<<"Enter the item to find : ";
    int item;cin>>item;

    cout<<findANodeinLinklist(head,item)<<endl;

    display(head);
    return 0;
}