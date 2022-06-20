#include<iostream>
using namespace std;

int main(){

    // cout<<"Enter the value of the n :";
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(n-i>=j){  
            cout<<" ";
            j++;
        }
            int k=1;
            int l=i;
        while (k<=i)
        {
            cout<<l;
            k++;
            l++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}