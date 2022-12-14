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

int partation(int input[], int start, int end){
    int piviot = input[start], pi = start;
        for(int i = start; i<=end; i++){
            if(input[i]<=input[start] && i!=start){
                pi++;
            }
        }
    
    swap(input, start, pi);
    piviot = input[pi];

    int i = start, j = end;
    while (i < pi && j > pi){
        
        if(input[i] > piviot && input[j] <= piviot){
            swap(input, i , j);
            i++; 
            j--;
        }else if(input[i] > piviot && input[j] >= piviot){
            j--;
        }else{
            i++;
        }
    }

    return pi;
}

void quickSort(int ary[], int start, int end){
    if(end - start <=0){
        return;
    }

    int pi = partation(ary, start, end);
    quickSort(ary, start, pi-1);
    quickSort(ary, pi+1, end);
}
// { Driver Code Starts.}
int main()
{
    int arr[1000], n, T, i=0;

        cin>>n;
        for (i ; i < n; i++){
            cin>>arr[i];
        }
        quickSort(arr, 0, n-1);
        printArray(arr, n);
    return 0;
} 