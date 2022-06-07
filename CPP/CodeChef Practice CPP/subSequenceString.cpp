#include <iostream>
using namespace std;

int subSeq(string input,string output[]){
     if(input.empty()){
          output[0] = "";
          return 1;
     }
     
     string subString = input.substr(1);
     int n = subSeq(subString,output);
     for(int i = 0; i<=input.size(); i++){
          output[i + n] = input[0] + output[i]; 
     }
     return 2*n;
}

int main() {
	
	string giveinput;
	cin>>giveinput;
	
	string * givenOutput = new string[1000];     
	
	int subSeqStringSize = subSeq(giveinput, givenOutput);
	for(int i = 0 ; i<subSeqStringSize; i++){
	     cout<<givenOutput[i]<<endl;
	}
	return 0;
}
