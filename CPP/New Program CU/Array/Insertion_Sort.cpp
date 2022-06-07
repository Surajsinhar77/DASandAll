#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
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

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int ary[n];
    cout<<"Enter "<<n<<" elements to be sorted : "<<endl;
    for (int i = 0; i < n; i++) { cin>>ary[i];
    }

    insertionSort(ary,n);
    display(ary,n);
    return 0;
}
