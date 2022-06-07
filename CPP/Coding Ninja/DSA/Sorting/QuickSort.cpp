#include<iostream>
using namespace std;

void printArray(int arr[] ,  int n){
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swap(int ary[], int start, int pi){
    int temp = ary[start];
    ary[start] = ary[pi];
    ary[pi] = temp;
}

int partation(int ary[], int start, int end){

    int piviot = ary[start], pi = start;
    for(int i = start; i<=end; i++){
        if(ary[i]<ary[start]){
            pi++;
        }
    }
    
    swap(ary, start, pi);
    // cout<<"\t\t";
    // printArray(ary,end+1);
    // cout<<endl;
    piviot = ary[pi];


    int i = start, j = end;
    while (i < pi && j > pi){
        
        // if(end == 6){
            // cout<<"\t\t\t\t\t"<<" - "<<ary[i]<<" - "<<pi<<" - "<<ary[j]<<endl;
        // }

        if(ary[i] > piviot && ary[j] < piviot){
            swap(ary, i , j);
            i++; 
            j--;
        }else if(ary[i] > piviot && ary[j] > piviot){
            j--;
        }else{
            i++;
        }
    }

    // cout<<"\t\t\t";
    // printArray(ary,end+1);
    // cout<<endl;cout<<"\t\t\t\t"<<pi<<endl;
    return pi;
}

void quickSort(int ary[], int start, int end){
    if(end - start <=0){
        return;
    }

    // cout<<"\t";
    // printArray(ary, end+1);
    // cout<<endl;

    int pi = partation(ary, start, end);
    quickSort(ary, start, pi-1);
    quickSort(ary, pi+1, end);
}
// { Driver Code Starts.
int main()
{
    int arr[1000], n, T, i=0;
    // cin>>T;
    // while (T--)
    // {
        cin>>n;
        for (i ; i < n; i++){
            cin>>arr[i];
        }
        quicSort(arr, 0, n-1);
        printArray(arr, n);
    // }
    return 0;
} 