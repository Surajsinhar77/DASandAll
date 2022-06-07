#include<iostream>

    using namespace std;

int main (){
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    
    int ary[n],i,j,temp=0;

    
    cout<<"enter the number of the array"<<endl;
    for(i=1; i<=n; i++){
        cin>>ary[i];
    }

    for(i=1; i<=n; i++){
        cout<<"\t";
        cout<<ary[i];
    }

    for(j=1; j<=n; j++){
        
        for(i=1; i<=n; i++){

            if(ary[i]>ary[i+1]){
                temp = ary[i];
                ary[i]=ary[i+1];
                ary[i+1]=temp;
            }

        }

    }
        cout<<"\n\n";

    for(i=1; i<=n; i++){
        
            cout<<"\t";
            cout<<ary[i];
        
    }

    return 0;
}