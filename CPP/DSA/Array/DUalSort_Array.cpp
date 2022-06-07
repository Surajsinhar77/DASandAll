#include <iostream>
using namespace std;

void dualSort(int ary[], int ary2[], int n, int n2)
{

    // for(int i=1; i<n; i++){
    //     int temp = ary[i];
    //     int j = i-1;
    //     for(j; j>=0 && ary[j]>temp; j--){
    //         ary[j+1] = ary[j];
    //     }
    //     ary[j+1] = temp;
    // }
    int ary3[n + n2];
    for (int i = 0; i < n; i++){
        ary3[i] = ary[i];
    }

    int l = n;
    for (int i = 0; i < n2; i++){
        ary3[l] = ary2[i];
        l++;
    }
     
     for (int i = 0; i < n+n2; i++){
        cout<<" "<<ary3[i];
    }
     
    for(int i=1; i<n+n2; i++){
        int temp = ary3[i];
        int j = i-1;
        for(j; j>=0 && ary3[j]>temp; j--){
            ary3[j+1] = ary3[j];
        }
        ary3[j+1] = temp;
    }
     cout<<endl;
    for (int i = 0; i < n+n2; i++){
        cout<<" "<<ary3[i];
    }
}


int main(){
    int n;
//    cout << "Enter the size of the array :";
    cin >> n;

    int ary[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ary[i];
    }

    int n2;
//    cout << "Enter the size of the array :";
    cin >> n2;

    int ary2[n2];
    for (int i = 0; i < n2; i++)
    {
        cin >> ary2[i];
    }

    dualSort(ary, ary2, n, n2);
    return 0;
}