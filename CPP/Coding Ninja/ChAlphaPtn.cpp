#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=0;
        while(i<n){
            int j = 0;
            int k = i;
            while(j<=i){
                char ch = 'E'-k;
                cout<<ch;
                k--;
                j++;
            }
            cout<<endl;
            i++;
        }
    return 0;
}