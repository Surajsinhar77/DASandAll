#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int r)
{
    int i = l;
    int j = m + 1;
    int k = l;

    /* create temp array */
    int temp[5];

    while (i <= m && j <= r)
    {
        if (arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
            k++;
        }
    }


    while (i <= m)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }

    while (j <= r)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }

    for (int p = l; p <= r; p++)
    {
        arr[p] = temp[p];
    }
};

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        // find midpoint
        int m = (l + r) / 2;

        // recurcive mergesort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        // merge
        merge(arr, l, m, r);
    }
};


void insertSort(int a[], int n, int i)
{
    int key, j;
    for (int i = 1; i < n; i++)
    {
        key = a[i]; // take value
        j = i;
        while (j > 0 && a[j - 1] > key)
        {
            a[j] = a[j - 1];
            j--;
        }
        a[j] = key; // insert in right place
    }
    cout << "Enter the element of an array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<"\t";
    }
};

int main()
{
    int n, i;
    cout << "Enter the size of an array: " << endl;
    cin >> n;

    int a[n];
    cout << "Enter the element of an array: " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int mid = i + n / 2;

    cout << "Enter the number 1 for mergeShort \nEnter the number 2 for mergeShort \nEnter the number 0 for Exit" << endl;
    int choose;
    cin >> choose;
    if (choose == 1)
    {
        mergeSort(a, i, n);
        cout << "Printing the element of an array: " << endl;
        for (int i = 0; i < n; i++){
            {
                cout<<a[i]<<"\t";
            }
        }
    }
    else if (choose == 2)
    {
        insertSort(a, n, i);
    }
    else
    {
        cout << "You enter wrong input" << endl;
    }

    return 0;
}
