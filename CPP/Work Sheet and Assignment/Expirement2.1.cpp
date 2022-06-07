#include <iostream>
using namespace std;
void merge(int *,int, int , int );
void merge_sort(int *arr, int low, int high)
{
    int mid;
    if (low < high){
        //divide the array at mid and sort independently using merge sort
        mid=(low+high)/2;
        merge_sort(arr,low,mid);
        merge_sort(arr,mid+1,high);
        //merge or conquer sorted arrays
        merge(arr,low,high,mid);
    }
}
// Merge sort 
void merge(int *arr, int low, int high, int mid)
{
    int i, j, k, c[50];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high) {
        if (arr[i] < arr[j]) {
            c[k] = arr[i];
            k++;
            i++;
        }
        else  {
            c[k] = arr[j];
            k++;
            j++;
        }
    }
    while (i <= mid) {
        c[k] = arr[i];
        k++;
        i++;
    }
    while (j <= high) {
        c[k] = arr[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++)  {
        arr[i] = c[i];
    }
}

void inserSort(int arr[],int n){
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    
}

void display(int myarray[],int num){
    cout<<"Sorted array\n";
    for (int i = 0; i < num; i++)
    {
        cout<<myarray[i]<<"\t";
    }
    cout<<"\nName- Suraj Kumar\nUID - 21BCS8187"<<endl;
}


int main()
{
    int myarray[], num;
    cout<<"Enter number of elements to be sorted : ";
    cin>>num;
    cout<<"Enter "<<num<<" elements to be sorted : "<<endl;
    for (int i = 0; i < num; i++) { cin>>myarray[i];
    }
    cout<<"\nPress 1 for the Merge Sort\nPress 2 for the Insertion Sort"<<endl;
    int index;
    cin>>index;
    switch (index)
    {
    case 1:
        merge_sort(myarray, 0, num-1);
        display(myarray,num);
        break;
    case 2:
        inserSort(myarray,num);
        display(myarray,num);
        break;
    default:
        cout<<"You enter Invalid Input"<<endl;
        break;
    }
}