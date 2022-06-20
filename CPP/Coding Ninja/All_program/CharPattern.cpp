#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value of the : n"<<endl;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=0;
        while(j<n){
            char ch = 'A'+j;
            cout<<"\t"<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}