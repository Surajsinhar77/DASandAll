#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int y;
    int sumE=0;
    int sumO=0;
    while(n>0){
        y = n%10;
        if(y%2 == 0){
            sumE = sumE + y;
        }
        else{
            sumO = sumO + y;
        }
            n = n/10;
    }
        cout<<sumE<<" "<<sumO;
    return 0;
}