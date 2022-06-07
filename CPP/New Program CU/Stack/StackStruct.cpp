#include<iostream>
using namespace std;

int push(int a[],int num,int top,int n){
    if(top==n){
        cout<<"Our Stack is full"<<endl;
    }98 
    else{
        top++;
        a[top] = num; 
    }
    return top;
}

int pop(int top){
    if(top==-1){
        cout<<"Stack is empty"<<endl;
    }
    top--;
    return top;
}

void display(int a[],int top){
    for(int i=top;i>-1;i--){
        cout<<a[i]<<"\t";
    }
    cout<<"\n";
}

int main(){
    int n,top = -1;
    cout<<"Enter the size of stack : ";
    cin>>n;

    int a[n];
    top = push(a,2,top,n);
    top = push(a,4,top,n);
    top = push(a,6,top,n);

    // top=pop(top);
    display(a,top);
    return 0;
}