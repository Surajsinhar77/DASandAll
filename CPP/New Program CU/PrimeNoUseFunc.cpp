#include<iostream>
using namespace std;

void getPrimeNo(int n){

    int ary[n];
    cout<<"Entring the numbers"<<endl;
    for(int i=0;i<n;i++){
        cin>>ary[i];
        // cout<<"\n";
    }

    cout<<"Printing the prime numbers"<<endl;
    for(int i=0;i<n;i++){
        if (ary[i]%2==0){
            cout<<ary[i];
            cout<<"\t";
        }
    }

}

void primeFunc(int a, int b){
        
        for(int i=a;i<=b;i++){
    
            if(i%2!=0){ 
                cout<<i;
                cout<<"\t";
            }
        }
}

int main(){
    // # Function -- 1
    // int n ;
    // cout<<"Enter how many no do you really want to give to the program"<<endl;
    // cin>>n;
    // getPrimeNo(n);

    primeFunc(1,25);

    return 0;
}
