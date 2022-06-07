#include<iostream>
using namespace std;

int main(){

    int x;
    cin>>x;
    
    int i = 1;
    while(i<=x){
        int temp = (3*i)+2; 
    	if(temp%4 != 0){
            cout<<temp<<endl;
        }
        i++;
    }
    return 0;
}