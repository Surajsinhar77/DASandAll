#include <iostream>
using namespace std;

void merging(int ary[], int start, int mid, int last)
{
    int newary[last + 1];

    int i, j, k;
    i = start;
    k = 0;
    j = mid + 1;

    while (i <= mid && j <= last){

        // cout<<"--"<<endl;
        if (ary[i] < ary[j]){
            newary[k] = ary[i];
            k++;
            i++;
        }
        else if (ary[i] == ary[j]){
            ary[k] = ary[i];
            // k++;
            ary[k+1] = ary[j];
            j++;
            k = k+2;
            i++;
        }
        else{
            newary[k] = ary[j];
            k++;
            j++;
        }
    }

        if (i <= mid){
            while (i <= mid ){
                newary[k] = ary[i];
                k++;
                i++;
            }
        }
        else{
            while (j <= last){
                newary[k] = ary[j];
                k++;
                j++;
            }
        }
    
    int l = start;
    int r = 0;
    while(l<=last){
        ary[l] = newary[r];
        l++;
        r++;
    }
}

void merg_sorting(int ary[], int start, int last){

    if(last-start<=0){
        return;
    }

    int mid = (start + last) / 2;

    merg_sorting(ary, start, mid);
    merg_sorting(ary, mid + 1, last);
    merging(ary, start, mid, last);
}

void mkaing_merge(int ary[], int n){
    merg_sorting(ary, 0, n - 1);
}

int main(){
    int n;
    cin >> n;
    int ary[n];

    for (int i = 0; i < n; i++){
        cin>> ary[i];
    }
    
    mkaing_merge(ary, n);

    for (int i = 0; i < n; i++){
        cout<< ary[i] << " ";
    }
    return 0;
}
