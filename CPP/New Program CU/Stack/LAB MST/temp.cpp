#include<iostream>
using namespace std;

int main(){
    int A[4];

    for (int i =0; i < 4;i++){
        cin>>A[i];
    }

    cout<<endl;

    for (int i =0; i < 4;i++){
        cout<<A[i];
        cout<<"\t";
    }

    cout<<"Enter the loc :";
    int loc;    
    cin>>loc;

    for(int i = 4; i>loc; i--){
        int temp = A[i-1];
        A[i] = temp;
    }
    A[loc] = 1;

    for (int i =0; i < 4+1;i++){
        cout<<A[i];
        cout<<"\t";
    }
    return 0;
}