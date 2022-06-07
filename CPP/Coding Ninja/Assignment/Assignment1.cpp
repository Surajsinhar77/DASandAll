#include<iostream>
#include<cmath>
using namespace std;


int main(){

    int basicSal;
    char grade;
    cout<<"Enter the Basic Sal and Grade : ";
    cin>>basicSal>>grade;

    float hra,da,pf;
    hra = basicSal*20.0/100;
    da = basicSal*50.0/100;
    pf = basicSal*11.0/100;
    cout<<"the hra :"<<hra<<"  the da is : "<<da<<"  the pf is : "<<pf<<endl;

    float allow =0 ;
    if(grade == 'A'){
        allow = 1700;
    }else if(grade =='B'){
        allow =1500;
    }else if(grade == 'C'){
        allow = 1300;
    }

    float totalSal = basicSal+hra+allow+da-pf;
    cout<<totalSal;

    return 0;
}