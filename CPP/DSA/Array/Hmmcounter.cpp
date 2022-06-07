#include<iostream>
using namespace std;

int main(){

    char ary[100];
    char test;
    int count = 0;

    int i=0;
    while(test =='0'){
        cin>>ary[i];
        test=ary[i];
        count++;
    }

    for(int i=0; i<count; i++){
        cout<<ary[i];
    }

    return 0;
}
