#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int y ;
    
    int rev=0;
    while(n > 0){
        y = n % 10;
        
        if(y != 0){
            rev = rev * 10+y;
            n=n/10;
        }
    }
    cout<<rev;
    return 0;
}