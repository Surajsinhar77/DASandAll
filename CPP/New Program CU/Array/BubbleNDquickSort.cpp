// Menu driven program to find sorting of array by using Bubble sort and quick sort 

#include <iostream>
using namespace std;

void bubbleSort(int n, int i)
{

    int ary[n];
    cout << "Enter the element of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> ary[i];
    }

    for (i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (ary[j] > ary[j + 1])
            {
                int temp = ary[j];
                ary[j] = ary[j + 1];
                ary[j + 1] = temp;
            }
        }
    }

    // Printing the array
    for (i = 0; i < n; i++)
    {
        cout << ary[i] << " ";
    }
    cout << endl;
    cout<<"Name -  Suraj Kumar\nUId-21BCS8187"<<endl;
    
};

void quickSort(int n,int i)
{
    int ary[n],pivot,high,low;

    // Quick sort in C++
    cout << "Enter the element of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> ary[i];
    }
    

        pivot = ary[high];

        // pointer for greater element
        i = (low - 1);

        // traverse each element of the array
        // compare them with the pivot
        for (int j = low; j < high; j++)
        {
            if (ary[j] <= pivot)
            {
                i++;
                int temp = ary[i];
                ary[i] = ary[j];
                ary[j] = temp;
            }
        }

        // Printing the array
    for (i = 0; i < n; i++)
    {
        cout << ary[i] << " ";
    }
    cout << endl;
    
    cout<<"Name -  Suraj Kumar\nUId-21BCS8187";
}

int main()
{
    // Bubble Sort
    int n, i,c;
    cout << "Enter the size of Array" << endl;
    cin >> n;

    

    cout << "Enter 1 for Bubble sort \nFor Quick sort enter 2 " << endl;
    cin >>c;
    if(c==1){
        bubbleSort(n, i);
    }else{
        quickSort(n,i);
    }

    return 0;
}