#include<iostream>
#include "stackTemplate.h"
using namespace std;

int main(){
    stack<int> s1;
    s1.push(10);
    s1.push(11);
    s1.push(12);
    s1.push(13);
    s1.push(14);
    
    cout << s1.top() <<endl;
    cout << s1.pop() <<endl;
    cout << s1.size() <<endl;
    cout << s1.pop() <<endl;
    cout << s1.size() <<endl;
    return 0;
}