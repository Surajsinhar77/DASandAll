#include<iostream>
using namespace std;

int main(){

    int x;
    cin>>x;
    
    int i = 1;
    int j = 1;
    while(j<=x){
        int temp = (3*i)+2; 
    	if(temp%4 != 0){
            cout<<temp<<endl;
            j++;
        }
        i++;
    }
    return 0;
}