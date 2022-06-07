#include<iostream>
#include<math.h>
using namespace std;

bool checkmember(int n){

    int res = 5*(n*n)+4;
    int res2 = 5*(n*n)-4;
    double pfsq = sqrt(res);
    double pfsq2 = sqrt(res2);
    int cvpfsq = sqrt(res);
    int cvpfsq2 = sqrt(res2);
    
    if(pfsq == cvpfsq || pfsq2 == cvpfsq2){
        return true;
    }else{
        return false;
    }

}


int main(){

    int n;
    cin>> n;
    bool res; 
    res = checkmember(n);
    cout<<res;
    return 0;
}