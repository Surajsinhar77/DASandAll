#include<iostream>
using namespace std;

int conclusion(int sn){
    // cout<<sn;
    bool ans = false;
    int prev = sn%10;
    while(sn > 0){
        sn = sn/10;
        int curr = sn%10;
        // cout<<"\t\t"<<sn<<"\t\t"<<prev<<"\t\t"<<curr<<endl;
        if(prev==curr){
            return ans;
        }else if(prev<curr){
            // cout<<"on:-> 1"<<endl;
            if(ans == true){
                ans = false;
                break;
            }else{
                ans = true;
            }
        }
        else{
            // cout<<"on:-> 2"<<endl;
            if(ans == true){
                ans = false;
                break;
            }
            else{
                ans = true;
            } 
        }
        // cout<<"pn-> at END"<<endl;
        prev = curr;
    }
    return ans;
} 

int main(){
    int n=0;
    cin>>n;
    int s=0,sn = 0,temp=0;

    int i=0;
    while(i<n){
        cin>>s;
        // cout<<"\t"<<s<<endl;
        temp = temp*10+s;
        i++;
    }

    // cout<<temp<<endl;
    int j=0;
    while(j<n){
        int y = temp%10;
        // cout<<"\t\t"<<y<<endl;
        sn = sn*10+y;
        temp = temp/10;
        j++;
    }
    
    int getAns = conclusion(sn);
    if (getAns == 1){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
    
    return 0;
}