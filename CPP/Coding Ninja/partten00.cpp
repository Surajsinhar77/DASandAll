#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the value of the n" << endl;
    cin>>n;
    cout<<endl;
    int i=1;
    int j=1;
    int k=1;
    while(j<=n){
        i=1;
        while(i<=j){
            cout<<k<<"\t";
            i++;
            k++;
        }
        cout<<"\n\n";
        j++;
    }
    return 0;
}