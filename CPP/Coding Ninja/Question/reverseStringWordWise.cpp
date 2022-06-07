#include <iostream>
// #include "solution.h";
using namespace std;

int arylen(char input[]){
    int i = 0;
    while(input[i] != '\0'){
        i++;
    }
    return i;
}

void reverseStringWordWise(char input[]) {
    // Write your code here
    
	int n = arylen(input);
    cout<<n<<endl;
    cout<<" input[n] -> "<<input[n-1]<<endl;
    int size = n-1;
    char *copy = input;
    char temp[n]; 
    temp[n] = '\0';
    

    int i=0, start = 0, end = 0,wordSize =  0;
    while(input[i] != '\0'){

        if(input[i]==' ' || i==n){
            cout<<"printing i : "<<i<<endl;
            int end = i; 
            wordSize = end-start;
            cout<<"The size of the word is : "<<wordSize<<" and the End is : "<<end<<" and start is : "<<start<<endl;

            while(start<end){
                cout<<"-"<<input[start];
                start++;
            }
            cout<<endl;
            start = end+1;
        }
        i++;
    }
}

int main() {
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input << endl;
}
