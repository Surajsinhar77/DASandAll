#include<iostream>
using namespace std;

void InsertIng(int item,int loc,int n,int A[]){

    for (int i = n; i > loc ;i--){
        int temp = A[i-1];
        A[n] = temp;
    }
	
	A[loc] = item;
	
    for(int i = 0;i < n+1;i++){
        cout<<A[i];
        cout<<"\n";
    }
}

void delt(int A[],int n){
    for (int i = 0; i < n ;i++){
        int temp = A[i+1];
        A[i] = temp;
    }
    
    for(int i = 0;i < n-1;i++){
        cout<<A[i];
        cout<<"\n";
    }
}

int main(){
    int n;
    cout<<"Enter the size of the Array :";
    cin>>n;
    int A[n];

    for(int i =0;i<n;i++){
        cin>>A[i];
    }

    cout<<"Press 1 for the Insert : \n Press 2 for delect Item : ";
    int choise ;
    cin>>choise;

    if(choise == 1){
        int item,loc;
        cout<<"Item which you want to insert :";
        cin>>item;
        cout<<"Enter the loc whare you want to insert :";
        cin>>loc;
        InsertIng(item,loc,n,A);
    }
    else if(choise == 2){
        delt(A,n);
    }
    return 0;
}
