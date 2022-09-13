#include<iostream>
using namespace std;

// i just sort the merge sort in one time i can't belive my self WTF

using namespace std;

void merge(int input[],int lb,int mid, int ub){
    // cout<<lb<<" "<<mid<<" "<<ub<<endl;
    
    int newary[ub+1];
    
    int i, j, k=0;
    i=lb; j = mid+1;
    while(i <= mid && j <= ub){
        if(input[i] < input[j]){
            newary[k] = input[i];
            i++;
            k++;
        }else if(input[i]==input[j]){
            newary[k] = input[i];
            newary[k+1] = input[j];
            i++;
            k+=2;
            j++;
        }else{
            newary[k] = input[j];
            k++;
            j++;
        }
        
    }
    if(i<=mid){
        while(i<=mid){
            newary[k] = input[i];
            i++;
            k++;
        }
    }else{
        while(j<=ub){
            newary[k] = input[j];
            j++;
            k++;
        }
    }
    
    
    int l = lb;
    int r = 0;
    while(l<=ub){
        input[l] = newary[r];
        l++;
        r++;
    }
    
}

void MergeSort(int input[], int lb,int ub){
    if(ub-lb <=0){
        return;
    }
    
    int mid = (lb+ub)/2;
    
    MergeSort(input,lb,mid);
    MergeSort(input,mid+1,ub);
    merge(input,lb,mid,ub);
}


void mergeSort(int input[], int size){
    MergeSort(input,0,size-1);
}


int main(){
    cout<<"Enter the size of the Array : "<<endl;
    int n; cin>>n;
    int ary[n];

    cout<<"Enter the value of the element : "<<endl;
    for(int i =0; i<n; i++){
        cin>>ary[i];
    }

    MergeSort(ary,0,n-1);

    cout<<"printing the array : "<<endl;
    for(int i = 0; i<n; i++){
        cout<<ary[i]<<" ";
    }
    return 0;
}