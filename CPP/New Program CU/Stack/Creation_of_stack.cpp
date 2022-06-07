#include<iostream>
using namespace std;

int push(int stack[],int n,int top){

    if(top == n){
        cout<<"OverFlow"<<endl;
    }else{
        cout<<"Enter the element to Push in Stack : ";
        int element;
        cin>>element;
        top = top +1;
        stack[top] = element;
        return top;
    }
    
}


int pop(int top){
    
    if(top == -1){
        cout<<"UnderFlow";
    }else{
        return top = top-1;
    }
}

void displayEl(int stack[],int top){
    for(int i = 0;i<=top;i++){
        cout<<"  "<<"____"<<"  "<<"\n"<<" | "<<stack[i]<<" | "<<"\n"<<"  "<<"____"<<"  "<<"\n";
        // cout<<stack[i];
        // cout<<"\t";
    }
}

int main(){

    cout<<"Enter the size of the stack : ";
    int n;
    cin>>n;
    
    int stack[n];
    int top = -1;
    
    for(int i =0;i< n;i++){
        top = push(stack,n,top);
    }

    top = pop(top);

    displayEl(stack,top);
    top = push(stack,n,top);
    displayEl(stack,top);

    return 0;
}