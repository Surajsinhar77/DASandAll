#include<iostream>
using namespace std;

void find2_lg(int ary[],int n){

    int larger = 0;
    int secondLg = 0;
    larger = ary[0]; 
    secondLg = ary[0];
    for(int i = 1; i<n; i++){
        if(larger<ary[i]){
            larger = ary[i];
            if(ary[i] < secondLg < larger ){
                secondLg =  ary[i];
            }
        }
        
        
    }

    secondLg = ary[0];
    for(int i = 1; i<n; i++){
        if(larger > secondLg > ary[i] && ary[i] != larger){
            secondLg = ary[i];
        }
    }

    cout<<"The 1st Larger is "<<larger<<endl;
    cout<<"The 2nd Larger is "<<secondLg<<endl;
}

int main(){
    int n;
    cin>>n;

    int ary[n];

    for(int i = 0; i<=n; i++ ){
        cin>>ary[i];
    }

    find2_lg(ary,n);
    return 0;
}