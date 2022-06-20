// #include <stdio.h>
// void mergesort(int a[], int i, int j);
// void merge(int a[], int i1, int j1, int i2, int j2);
// int main()
// {
//     int n, i;
//     printf("Enter no of elements:");
//     scanf("%d", &n);
//     int a[n];
//     printf("Enter array elements:");
//     for (i = 0; i < n; i++)
//         scanf("%d", &a[i]);
//     mergesort(a, 0, n - 1);
//     printf("\nSorted array is :");

//     for(int i=1; i <= n; i++){
//         printf("%d",a[n-i]);
//         printf("\t");
//     }
//     return 0;
// }
// void mergesort(int a[], int i, int j)
// {
//     int mid;
//     if (i < j)
//     {
//         mid = (i + j) / 2;
//         mergesort(a, i, mid);
//         mergesort(a, mid + 1, j);
//         merge(a, i, mid, mid + 1, j);
//     }
// }
// void merge(int a[], int i1, int j1, int i2, int j2)
// {
//     int temp[50];
//     int i, j, k;
//     i = i1;
//     j = i2;
//     k = 0;
//     while (i <= j1 && j <= j2)
//     {
//         if (a[i] < a[j])
//             temp[k++] = a[i++];
//         else
//             temp[k++] = a[j++];
//     }
//     while (i <= j1)
//         temp[k++] = a[i++];
//     while (j <= j2)
//         temp[k++] = a[j++];
//     for (i = i1, j = 0; i <= j2; i++, j++)
//         a[i] = temp[j];
// }
// #include<stdio.h>
// #include<conio.h>

// int main(){
//     int x = 1;
//     while(x <= 10) {
//         printf(x);
//     printf("Coding Ninjas\n");
//     x += 1;
//     }
//     return 0;
// }
#include <iostream>
using namespace std;
int main()
{
    int i, m1, m2, n, num;
    cin>>n;
    for (i = 0; i < n; i++)
    {
        cin>>num;
        if (i == 0)
        {
            num = m1 = m2;
        }
        if (num > m1)
        {
            m2 = m1;
            m1 = num;
        }
        else if (num > m2)
        {
            m2 = num;
        }
    }
    cout<<m2;
    return 0;
}