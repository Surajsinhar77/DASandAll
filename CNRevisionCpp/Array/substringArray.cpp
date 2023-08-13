#include<iostream>
using namespace std;
#include<math.h>


int subsetOfArray(int arr[], int n, int output[][20]){
	//if(n==0){
		
	//}
	
	if(n==1){
		output[0][0] = " ";
		output[0][n] = arr[0];
		return n+1;
	}
	
	int smallSize = subsetOfArray(arr+1, n-1, output);
	int j = 0;
	for(int i = smallSize; i<i+smallSize; i++){
		output[i][]	
	}
}

int main(){

	int n =0;
	cin>>n;
	int arry[n];
	
	for(int i=0; i<n; i++){
		cin>>arry[i];
	}
	
	int pw = pow(n,2);
	int output[pw][20];
	
	int outputSize = subsetOfArray(arry, n, output);
	
	for(int i =0; i<outputSize; i++){
		for(int j=0; j<outputSize; j++){
			cout<<output[i][j]<<" ";
		}
		cout<<endl;
	}	
	return 0;
}
