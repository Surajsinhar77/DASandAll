#include<iostream>
using namespace std;

int ToGT_ASCII_value(char n){
    cout<<"The ASCII code of : "<<n<< " is : "<<n+0<<endl;
    return n+0;
}

void ToGT_Char_value(int y){
    char ch = y;
    cout<<"The value of the ASCII code : "<<y<<" is : "<<ch<<endl;
}

int main(){

    char n;
    cout<<"Enter the Char which u want  : ";
    cin>>n;

    int y = ToGT_ASCII_value(n);
    
    ToGT_Char_value(y);

    // cout<<n;
    return 0;
}