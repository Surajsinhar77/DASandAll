#include<iostream>
#include<string.h>
using namespace std;

int aryLenght(char str[]){
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    return i;
}

bool checkPalindrome(char str[]){
    
    int i = getAryLenght(str);
    int size = 1e6;
    char str2[size];
    int j=0;
    int k = i-1;

    while(i>j){
        str2[j] = str[k];
        j++;
        k--;
    }
    
    // cout<<endl;
    str2[i] = '\0';
    // cout<<i<<endl;
    // cout<<str2<<endl;
    // cout<<str<<endl;
    bool get = strcmp(str,str2)==0;
    if(get == 0){
        return true;
    }else{
        return false;
    }
}

int main(){
    
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << (checkPalindrome(str) ? "true" : "false");
    return 0;
}