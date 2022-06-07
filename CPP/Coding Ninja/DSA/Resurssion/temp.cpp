#include<iostream>
using namespace std;


void checkAb(char input[]) {
    cout<<"aaya"<<endl;
    int i =0;
    while(input[i] != '\0'){
        cout<<input[i]<<endl;
        i++;
    }   
}

int main(){
    
    // string str[100] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

    // cout<<str[2].length();
    // cout<<str[2][0];
    
    char input[100];
    cin>>input;

    checkAb(input);
    // cout<<ans;
    return 0;


    
    return 0;
}