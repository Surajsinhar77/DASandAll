#include<iostream>
using namespace std;

int Swapee(int a[],int j){
    int temp = a[j];
    a[j] = a[j+1];
    a[j+1] =temp;
}

int main(){

    int n;
    cout<<"Enter the size of the arrya :";
    cin>>n;
    int a[n],j;

    cout<<"Enter the Element of the arrya :"<<endl;
    for (j=0;j<n;j++){
        cin>>a[j];
    }

        

    cout<<"printing the Element of the arrya Before :"<<endl;
    for (j=0;j<n;j++){
        cout<<a[j]<<endl;
    }
        a[n] = Swapee(a,2);

    cout<<"Printing the Element of the arrya After :"<<endl;
    for (j=0;j<n;j++){
        cout<<a[j]<<endl;
        if(a[j]==2){
            cout<<"\t\tThe value of a[2] : "<<a[2]<<" is Swaped"<<endl;
        }
    }


    return 0;
}
