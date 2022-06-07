#include <iostream>
using namespace std;

int* ReverseArry(int *ary,int n,int *ary2){

    int k = 0;
    for (int i = n-1; i >= 0; i--){
        ary2[k] = ary[i];
        k++;
    }
    
    for (int i = 0; i < n; i++){
        cout <<"  "<< ary2[i] << endl;
    }
}

int main()
{
    int n;
    cin>>n;
    int ary[n];
    int ary2[n];

    for (int i = 0; i < n; i++)
    {
        cin>> ary[i];
    }

    ReverseArry(ary,n,ary2);
    return 0;
}