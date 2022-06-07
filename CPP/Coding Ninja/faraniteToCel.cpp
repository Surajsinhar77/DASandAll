#include<iostream>
using namespace std;

int main(){
    int A,E,W;

    cout<<"Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W), you need to convert all Fahrenheit values"<<endl;
    cin>>A>>E>>W;
    cout<<"\n";
    while(A<=E){
        cout<<A<<" "<<(A-32)*5/9<<endl;
        A = A+W;
    }
    return 0;
}