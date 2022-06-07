#include<iostream>
using namespace std;

int swipe(int a[],int j){
    int temp = a[j];
    a[j] = a[j+1];
    a[j+1]=temp;
}

int main(){
    int n;
    cout<<"Enter the size of the arrya : ";
    cin>>n;

    int a[n];
    cout<<"Enter the Element of the Array : "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=n-1;i>=0;i--){
        for(int j=0;j<n;j++){
            if(a[j]>=a[j+1]){

                swipe(a,j);
                // int temp;
                // temp = a[j];
                // a[j] =a[j+1];
                // a[j+1]=temp;
                
            }
        }
    }

    cout<<"Printing the Element of the Array : "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }

    return 0;
}