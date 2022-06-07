// #include <iostream>
// using namespace std;
// int binarySearch(int arr[], int p, int r, int num)
// {
//     if (p <= r)
//     {
//         int mid = (p + r) / 2;
//         if (arr[mid] == num)
//             return mid;
//         if (arr[mid] > num)
//             return binarySearch(arr, p, mid - 1, num);
//         if (arr[mid] < num)
//             return binarySearch(arr, mid + 1, r, num);
//     }
//     return -1;
// }
// int main(void)
// {
//     int arr[] = {1, 3, 7, 15, 18, 20, 25, 33, 36, 40};

//     for(int i=0;i<10;i++){
//         cout<<arr[i];
//         cout<<"\t";
//     }
//     cout<<"\n\n";
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int num ;
//     cout<<"Enter the Num To search : ";
//     cin>>num;
//     cout<<endl;
//     int index = binarySearch(arr, 0, n - 1, num);
//     if (index == -1)
//         cout << num << " is not present in the array";
//     else
//         cout << num << " <=  is present at index => " << index << " in the array"<<endl;
//     return 0;
// }

// ==================================================================================

#include <iostream>
using namespace std;
void swapping(int &a, int &b)
{ 
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void display(int *array, int size)
{
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}
void selectionSort(int *array, int size)
{
    int i, j, imin;
    for (i = 0; i < size - 1; i++)
    {
        imin = i; 
        for (j = i + 1; j < size; j++)
            if (array[j] < array[imin])
                imin = j;
        swap(array[i], array[imin]);
    }
}
int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Array before Sorting: ";
    display(arr, n);
    selectionSort(arr, n);
    cout << "Array after Sorting: ";
    display(arr, n);
    cout<<"\n\n Suraj Kumar Uid - 21BCS8187"<<endl;
}