#include<iostream>
using namespace std;

int main(){

    int ab,bc,ca;
    cout<<"Enter the sides of traingle : ";
    cin>>ab>>bc>>ca;

    if(ab==bc && bc==ca && ca==ab){
        cout<<"Trainagle is Equilateral"<<endl;
    }
    else if(ab==bc || bc==ca || ca==ab){
        cout<<"Traiangle is Isosceles"<<endl;
    }
    else{
        cout<<"traingle is scaler"<<endl;
    }
    
    return 0;
}