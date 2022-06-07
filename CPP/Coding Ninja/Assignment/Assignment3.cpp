#include<iostream>
#include<cmath>
using namespace std;

void por(int x,int n){
    int i=1;
        int por = 1;
        while(i<=n){
            por = por*x;
            i++;
        }
        cout<<por;
}

int main(){

    int x,n;
        cin>>x>>n;
        por(x,n);
    return 0;
}