#include<iostream>
#include <cstring>
using namespace std;

void trimSpaces(char input[]){
    
    char *copy = input;
    char temp[1000000];
    int i = 0, j = 0;
    while(copy[i] != '\0'){
        if(copy[i] == ' '){
            i++;
        }else{
            input[j] = copy[i];
            i++;
            j++;
        }
    }
}

int main(){
    char input[1000000];
    cin.getline(input, 1000000);
    trimSpaces(input);
    cout << input << endl;
    return 0;
}