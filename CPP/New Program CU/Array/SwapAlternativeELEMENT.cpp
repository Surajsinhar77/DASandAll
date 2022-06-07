#include<iostream>
using namespace std;

void swapAlternate(int arr[], int size)
{
    int j = 1;
    int i = 0;
    while(j<size){
        int temp = 0;
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        j=j+2;
        i=i+2;
    }
}

int main(){

    int t;
	cin >> t;
	while (t--)
	{
		int size;
		cin >> size;
		int *arr = new int[size];
		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}
		swapAlternate(arr, size);
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		delete [] arr;
    }
    return 0;
    
}

// 1
// 6
// 1 2 3 4 5 6 
