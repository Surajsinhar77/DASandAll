#include<iostream>
using namespace std;


int main(){

    int  *sno ;
    string  *Name;

    sno = new int(10);
    Name =  new string("Suraj Sinha");

    cout<<&Name;    // to Access the Address of the variable  uses the& oprator 

    cout<<*Name;    // to Access the pointer Value of the variable is *
    cout<<*sno;     
    return 0;
}