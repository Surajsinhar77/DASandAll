#include <iostream>
using namespace std;
int main(){
    
    int n =0;
    cin>>n;
    int res=0;
    int count=0;
    
    while(n>0){
        int y = n%2;
        res = res*10+y;
        n = n/2;
        count++;
    }
    // cout<<res;

    int result=0;
    while(count > 0){
        int y = res%10;
        result =  result*10+y;
        res = res/10;
        count--;
    }

    cout<<result;

}