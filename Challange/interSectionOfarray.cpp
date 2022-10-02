#include<iostream>
#include<vector>
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

void getInterSection(int ary[], int ary2[], int size1, int size2){

    int i =0,j=0;
    while(i<size1 && j<size2){
        cout<<endl;
        if(ary[i]==ary2[j]){
            
            cout<<" -- > "<<ary[i]<<" ";
            i++;j++;
        }else if(ary[i] < ary2[j]){
            i++;
        }else{
            j++;
        }
    }
}

int main(){

    int n;
    cout<< "Enter how many element do u want to enter ";
    cin>>n;
    int v[n];

    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    int m;
    cout<<"Enter how many element do u wnat to enter for 2nd array ";
    cin>>m;
    int v1[m];
    
    for(int i=0; i<m; i++){
        cin>>v1[i];
    }

    // int * arry = &v;
    // int * arry2 = &v1; 
    mergeSort(v, 0, n-1);
    mergeSort(v1, 0, m-1);


    for(int i =0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for(int i =0; i<m; i++){
        cout<<v1[i]<<" ";
    }

    getInterSection(v,v1,n,m);


    return 0;
}