#include<iostream>
using namespace std;

int pw(int n){
    int res = n*n;
    return res;
}

int main(){
    int n;
    cin>>n;
    int res;

    int  i = 0;
    while(true){
        int y = pw(i);
        if(y>n){
            cout<<i-1<<endl;
            break;
        }
        i++;
    }
    return 0;
}