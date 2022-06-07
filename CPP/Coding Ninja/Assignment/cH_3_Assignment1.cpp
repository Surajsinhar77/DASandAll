#include<iostream>
using namespace std;

int main(){

    int n,c;
    cin>>n;
    cin>>c;

    int result = 0;
        if(c==1){
            while(0<n){
                result = result+n;
                n--;
            }
        }
        else if(c==2){
            while(1<n){
                result = result*n;
                n--;
            }
        }
        else{
            cout<<-1;
        }
        cout<<result<<endl;
    
    return 0;
}