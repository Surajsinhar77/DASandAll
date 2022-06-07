#include <iostream>
using namespace std;
int main(){
    
    int n ;
    cin>>n;
    int res;
    int cout;
    while(n>0){
    	cout<<n;
        int y = n%2;
        cout<<y;
        res = res*10+y;
        n = n/2;
        cout++;
    }
    cout<<res;

//    int result;
//    while(cout > 0){
//        int y = res%10;
//        result =  result*10+y;
//        res = res/10;
//        cout--;
//    }

//    cout<<result;
    
    
}
