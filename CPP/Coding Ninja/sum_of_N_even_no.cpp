#include<iostream>
using namespace std;

int main(){

    cout << "Enter the number n :";
    int n;
    cin>>n;
    int i=1;
    int sum=0;
    while(i<=n){
        if(i%2==0){
            sum = sum + i;
        }
        i++;
    }

    cout<<"The Sum of n Even Number is :"<<sum<<endl;
    return 0;
}