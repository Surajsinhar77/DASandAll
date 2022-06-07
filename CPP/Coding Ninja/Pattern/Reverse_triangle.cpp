#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=1;
    while(i<=n){

            int k = 1;
            while(k<=n-i){
                cout<<" ";
                k++;
            }

            int l = 1;
            while(l<=i){
                cout<<"*";
                l++;
            }
            cout<<endl;
            i++;
    }
    return 0;
}