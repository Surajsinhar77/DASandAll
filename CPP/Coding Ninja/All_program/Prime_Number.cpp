#include<iostream>
using namespace std;

int main(){

    cout<< "Enter the number n for the "<<endl;
    int n;
    cin >>n;
    int i=2;

    while(i<n){

        if (n%i==0){
            cout << "This "<<n<<" is not a prime number" << endl;
            break;
        }
        else{
            if(i==n-1){
                cout << "This "<<n<<" is a prime number" << endl;
            }
        }
        i++;
    }
    return 0;
    
}