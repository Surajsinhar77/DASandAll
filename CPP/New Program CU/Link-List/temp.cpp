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

/*

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
*/

// #include<iostream>
// using namespace std;

// int one(int *ary, int n , int x){

//     // int arry[&ary];
//     for(int i = 0; i<n; i++){

//         cout<<ary[i]<<endl;

//         if (ary[i] == x){
//             cout<<"Come111"<<endl;
//             return i;
//         }
//         else{
//             if(i>=n){
//                 cout<<"Come222"<<endl;
//                 return -1;
//             }
//         }
//         cout<<endl;
//     }

// }

// int main(){

//     int n;
//     cin>>n;
//     int arry[n];

//     for(int i =0; i<n; ++i){
//         cin>>arry[i];
//     }

//     cout<<"Enter the num to find : " ;
//     int x; cin>>x;

//     cout<<one(arry,n,x);
// bool flag ;
// cout<<flag<<endl;
// flag = true;
// cout<<flag<<endl;
//     return 0;
// }

// 5 15 14 4 25 34
// ================================================

// #include <iostream>
// using namespace std;

// int main(){

//     int t;
//     cin>>t;
//     int n;
//     int ary[n];
//     while(t--){
//         cin >> n;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> ary[i];
//         }
//     }
//         int mex = 0;
//         for (int i = 0; i < n; i++)
//         {

//                 if (ary[i] > ary[i+1])
//                 {
//                     int temp;
//                     temp = ary[i];
//                     ary[i] = ary[i+1];
//                     ary[i+1]=temp;
//                 }
//                 else{
//                     int temp;
//                     temp = ary[i+1];
//                     ary[i+1] = ary[i];
//                     ary[i]=temp;
//                 }
//         }
//         for (int i = 0; i < n; i++)
//         {
//             cout<<ary[1]<<"\t";
//         }

//         bool get = false;
//         int fn = ary[0];
//         for (int i = 2; i <= sqrt(fn); i++){
//             if (fn % i == 0){
//                 get = false;
//                 fn--;
//             }
//         }

//         // for(int i=ary[0];i<0;i--){
//         //     if(i%2!=0){
//         //         cout<<i;
//         //         cout<<"\t";
//         //     }
//         // }

//     return 0;
// }

// #include <iostream>
// #include <algorithm>
// using namespace std;

// // #include "solution.h"

// void sortZeroesAndOne(int *input, int size)
// {
//     for(int i = 0; i<size; i++){
//         for(int j = 0; j<size; j++){
//         	if(input[i] > input[j] && i!=j){
//                 int temp = input[i];
//                 input[i] = input[j];
//                 input[j] = temp;
//             }else if(input[i]==input[j]){
//                 for(int k = j; k<=i; k--){
//                     int temp = input[k];
//                 	input[k] = input[k-1];
//                 }
//             }
//         }
//     }
//     for(int i = 0; i<size; i++){
//         cout<<input[i]<<" ";
//     }
// }

// int main()
// {

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int size;
//         cin >> size;
//         int *input = new int[size];
//         for (int i = 0; i < size; ++i)
//         {
//             cin >> input[i];
//         }
//         sortZeroesAndOne(input, size);
//         for (int i = 0; i < size; ++i)
//         {
//             cout << input[i] << " ";
//         }
//         cout << endl;
//         delete[] input;
//     }
//     return 0;
// }