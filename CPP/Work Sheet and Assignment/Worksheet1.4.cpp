#include<iostream>
using namespace std;

int partition(int A[], int low, int high){
    int pivot = A[high];    // pivot 
    int i = (low - 1);   
    
    for (int j = low; j <= high- 1; j++) 
    { 
        //if current element is smaller than pivot, increment the low element
        //swap elements at i and j
        if (A[j] <= pivot) 
        { 
            i++;    // increment index of smaller element 
            int temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        } 
    } 
            int temp = A[i+1];
            A[i+1] = A[high];
            A[high] = temp;
    return (i + 1); 
}; 

    //quicksort algorithm
    void quickSort(int A[], int low, int high)
    { 
        if (low < high)
        { 
            //partition the array 
            int pivot = partition(A, low, high); 
            //sort the sub arrays independently 
            quickSort(A, low, pivot - 1); 
            quickSort(A, pivot + 1, high); 
        } 
    }; 
    


void bubbleSort(int A[],int n){

    for(int i=0;i<n;i++){
        for (int j=0;j<n-i;j++){
            if(A[j]>A[j+1]){
                int temp;
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] =temp;
            }
        }
    }
}

void display(int A[],int n){

    cout<<"\nSorted Array : "<<endl;
    for(int i=0;i<n;i++){
        cout<<A[i]<<"\n";
    }
    // cout<<"Name- Suraj Kumar\nUID - 21BCS8187"<<endl;
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
    cout<<"Enter 1 for Quick Sort : \nEnter 2 for the Bubble Sort : "<<endl;
    int index;
    cin>>index;
    switch (index)
    {
    case 1:
        quickSort(A,0,n-1);
        display(A,n);
        break;
    case 2:
        bubbleSort(A,n);
        display(A,n);
        break;
    default:
        cout<<"You Enter Wrong Input ! "<<endl;
        break;
    }

    return 0;
}