#include<iostream>
using namespace std;

void unION(int ary[],int ary2[],int n){
    int ary3[n*2];

    for(int i =0; i<n; i++){
        ary3[i] = ary[i]; 
    }

    // int i = 0;
    int k = n;
    for(int i =0; i<n; i++){
        for(int j=0; j<n; j++){
            if(ary3[j] == ary2[i]){
                break;
            }else{
                if(j == n-1){
                    ary3[k] = ary2[i];
                    k++;
                }
            }
        }
    }
    cout<<endl;
    for(int i =0; i<k; i++){
        cout<<"  "<<ary3[i]<<endl;
    }
}

void interSection(int ary[],int ary2[],int n){
    int ary3[n];
    int k = 0;
    for(int i =0; i<n; i++){
        for(int j=0; j<n; j++){
            if(ary[i]==ary2[j]){
                ary3[k]=ary[i];
                k++; 
            }
        }
    }

    cout<<endl;
    for(int i =0; i<k; i++){
        cout<<"  "<<ary3[i]<<endl;
    }
}

int main(){
    
    int n;
    cout<<"enter the sieze of the array: ";
    cin>>n;

    int ary[n];    
    int ary2[n];    

    for(int i =0; i<n; i++){
        cin>>ary[i];
    }

    for(int i =0; i<n; i++){
        cin>>ary2[i];
    }

    unION(ary,ary2,n);
    interSection(ary,ary2,n);
    return 0;
}