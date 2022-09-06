#include<iostream>
using namespace std;
#include "StackUsingArray.cpp"

int main(){
    
    Stack s1;

    int n ;

    string brk;
    cin>>brk;

    cout<<brk<<endl;

    for(int i =0; brk[i]!= '\0'; i++){
        s1.push(brk[i]);
        for(int j = 0; brk[j]!='\0' && i!=j ;j++){
            if(s1.top() == '(' || ')'){
                // cout<<"i am in"<<endl;
                s1.pop();
                break;
            }
        }
        
    }
    
    if(s1.top() == -1){
        cout<<"Balancing brackket"<<endl;
    }else{
        cout<<"non Balancing brackket"<<endl;
    }

    // cout<<"how many item do you want to insert"<<endl;
    // cin>>n;
    // for(int i=0; i<n; i++){
    //     int data;
    //     cin>>data;
    //     s1.push(data);
    // }


    
    return 0;
}

