#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the value of the n" << endl;
    cin>>n;
    cout<<endl;
    int i;
    int j=1;
    while(j<=n){
        i=1;
        while(i<=j){
            cout<<i<<" ";
            i++;
        }
        cout<<"\n";
        j++;
    }
    return 0;
}