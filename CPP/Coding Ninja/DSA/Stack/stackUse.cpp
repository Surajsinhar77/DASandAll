#include<iostream>
#include "StackUsingArray.cpp"
using namespace std;

int main(){
    
    Stack s1;
    
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    s1.push(60);

    cout<<"poping : "<<s1.pop()<<endl;
    cout<<"poping : "<<s1.pop()<<endl;
    cout<<"poping : "<<s1.pop()<<endl;

    cout<<s1.top()<<endl;
    cout<<s1.isEmpty()<<endl;
    cout<<s1.sizeOfStack()<<endl;
    
    return 0;
}