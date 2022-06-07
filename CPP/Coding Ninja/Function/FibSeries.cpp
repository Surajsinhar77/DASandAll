#include<iostream>
using namespace std;

int fibSer2(int n){
        int res = 0;
            if (n==2||n==1){
                return 1;
            }
            else if(n==0){
                return 0;
            }
            else{
                int prev=0,next=0;
                prev = fibSer2(n-1);
                next = fibSer2(n-2);
                res = prev+next;
                return res; 
            }
}

bool smlMain(int n){
        int res = 0;
        int y = n;
        y = y+5;
        for(int i = 0; i<=n+2 && n>res; i++){
            res =  fibSer2(i);
            cout<<res<<" ";
            if(res == n){
                cout<<"true";
                return 0;
            }
            else{
                if(i==n+2){
                    cout<<"false";
                    return 0;
                }
            }
            
        }
        return smlMain(n);
}

int fibSer(int n){
    return smlMain(n);
}


int main(){
    int n;
    cin>>n;
    int res = 0;
        res =  fibSer(n);
        // cout<<res<<" ";
    return 0;
}