// inserting element in array

#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter the size of matrix :";
    cin>>n; 

    int ary[n],i,y;
    cout<<"Enter the Element of the Array :"<<endl;
    for(i=0;i<n;i++){
        cin>>ary[i]," ";
    }

    cout<<"Printing the Element of the Array :"<<endl;
    for(i=0;i<n;i++){
        cout<<ary[i]<<"\t";
    }

    cout<<"Enter the position which you wnat to Insert: ";
    cin>>y;
    
    for(i=n;i>=y;i--){
        ary[n+1]=ary[n];
    }
    cout<<"Enter the element which you wnat to Insert: ";
    cin>>ary[y];

    cout<<"Printing the Element of the Array  after Insection :"<<endl;
    for(i=0;i<n+1;i++){
        cout<<ary[i]<<"\t";
    }


    return 0;
}