#include<iostream>
#include<string>
using namespace std;

int subSeq(string str, string output[]){
    if(str.empty()){
        output[0] = "";
        return 1;
    }

    string substr = str.substr(1);
    int n = subSeq(substr, output);
    for(int i = 0; i < n; i++){
        output[i + n] = str[0] + output[i];
    }
    return n*2;
}

int main(){
    
    string str = "abc", output[100];

    int n = subSeq(str, output);
    for(int i =0; i<n; i++){
        cout<<output[i]<<" ";
    }
    return 0;
}