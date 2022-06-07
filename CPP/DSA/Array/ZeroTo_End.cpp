#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter the value of the n : ";
    cin>>n;

    int ary[n];
    cout<<"Enter the value of the arrys : "<<endl;
    for(int i = 0; i<n; i++){
        cin>>ary[i];
    }

    for(int i = 0; i<n; i++){
        cout<<ary[i];
    }

    int count = 0;
    int temp = 0;
    for(int i = 0; count<n;){
        if(ary[i] == 0){
            temp = ary[i];
            cout<<endl;
            // cout<<"  ---> "<<temp<<" -------->  LOCation : "<<i<<endl;
            int j = i;
            for(j; j<n; j++){
                ary[j] = ary[j+1];
            }
            ary[n] = temp;
        }else{
            // cout<<"< --------------- >"<<i<<endl;
            i++;
        }
        count++;
    }

    cout<<endl;
    cout<<"Printing... Result array"<<endl;
    for(int i = 0; i<n; i++){
        cout<<ary[i];
    }
    return 0;
}  