#include<iostream>
using namespace std;

int insertIng(int A[],int n){
    
    A[n+1];
    cout<<"Enter the location to insert variable : ";
    int itmLoc;
    cin>>itmLoc;

    cout<<"Enter the item to insert variable : ";
    int item;
    cin>>item;

    for(int i=n;i>=itmLoc;i--){
        A[i+1]=A[i];
    }
    A[itmLoc] = item;
    return A[n+1];
}

void display(int A[],int n){

    for(int i=0;i<=n;i++){
        cout<<A[i]<<"\n";
    }
    cout<<"Name- Suraj Kumar\nUID - 21BCS8187"<<endl;
}

void deleteIng(int A[],int n){
    cout<<"Enter the location to Delete variable : ";
    int itmLoc;
    cin>>itmLoc;

    for(int i=itmLoc;i<=n;i++){
        A[i]=A[i+1];
    }
}

void getLoc(int A[],int n){
    int item; 
    cout<<"Enter the element whose location do you want : ";
    cin>>item;
    for(int i=0;i<=n;i++){
        if(A[i]==item){
            cout<<"The location of "<<item<<" is : "<<i<<endl;
            break;
        }
        else{
            if(i==n){
                cout<<"Their is no "<<item<<" present in this array"<<endl;
            }
        }
    }
}

int main(){
    int n;
    cout<< "Enter the size of array : ";
    cin>>n;

    cout<<"Enter the element of array"<<endl;
    int A[n];
    
    for(int i=0;i<n;i++){
        cout<<"\t";
        cin>>A[i];
    }

    int index;
    cout<<"Enter the 1 for the insert an Element\nEnter the 2 for the delete an Element\nEnter the 3 for the find location of an Element\nEnter the 4 for Display Elements of array"<<endl;
    cin>>index;
    
    switch (index)
    {
    case 1:
        insertIng(A,n);
        display(A,n);
        break;
    case 2:
        deleteIng(A,n);
        display(A,n-2);
        break;
    case 3:
        getLoc(A,n);
        break;
    case 4:
        display(A,n-1);
        break;
    default:
        cout<<"you enter wrong input"<<endl;
        break;
    }
    return 0;
}