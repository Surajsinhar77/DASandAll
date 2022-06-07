#include<iostream>
using namespace std;

void insertionSort(int ary[], int n){   
    for(int i=1; i<n; i++){
        int temp = ary[i];
        int j = i-1;
        for(j; j>=0 && ary[j]>temp; j--){
            ary[j+1] = ary[j];
        }
        ary[j+1] = temp;
    }

    for(int i=0; i<n; i++){
        cout<<" "<<ary[i];
    }
}

int main(){
    int n;
    cout<<"Enter the size of the array :";
    cin>>n;

    int ary[n];
    for(int i=0; i<n; i++){
        cin>>ary[i];
    }

    insertionSort(ary,n);
    return 0;
}