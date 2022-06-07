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
        int l=1;
        while(l<=n-i){
            cout<<" "<<"\t";
            l++;
        }
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



// Sample

/*
        *   *   *   *   1
        *   *   *   2   3
        *   *   4   5   6
        *   7   8   9   10
        11  12  13  14  15
*/