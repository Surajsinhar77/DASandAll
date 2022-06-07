#include <iostream>
using namespace std;
int  minJumps(int ary[], int n){
    int i = 0;
    int count = 0;
    int jumps = 1;
    if (ary[0] != 0){
        while (i < n){
            if (jumps > 0){
                jumps--;
            }
            if (jumps == 0){
                jumps = ary[i];
                count++;
                if (jumps == ary[n - 1]){
                    return count;
                }
            }
            i++;
        }
        return -1;
    }
    else{
        return 0;
    }
}
s(int ary[], int n)
{

    int i = 0;
    int count = 0;
    int jumps = 1;
    if (ary[0] != 0)
    {
        while (i < n)
        {
            if (jumps > 0)
            {
                jumps--;
            }
            if (jumps == 0)
            {
                jumps = ary[i];
                count++;
                if (jumps == ary[n - 1])
                {
                    return count;
                }
            }
            i++;
        }
        return -1;
    }
    else
    {
        return 0;
    }
}
int main(){
    int n;
    cin>> n;
    int ary[n];
    for(int i =0; i<n; i++){
        cin>>ary[i]; 
    }

    int one = minJumps(ary,n);
    cout<<one<<endl;
    return 0;
}