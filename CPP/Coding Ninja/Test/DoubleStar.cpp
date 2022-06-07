#include<iostream>
using namespace std;

int main(){

  // Write your code here
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<j;
        }

        for(int j=0;j<i;j++){
            cout<<"*";
        }

        for(int j=0;j<i;j++){
            cout<<"*";
        }

        int l = n-i;
        for(int j=1;j<=n-i;j++){
            cout<<l;
            l--;
        }

        cout<<endl;

    }
}
