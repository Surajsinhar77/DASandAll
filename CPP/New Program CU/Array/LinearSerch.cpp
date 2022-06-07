#include<iostream>
using namespace std;

int main() {

	int n,f,ary[n];
	cout<<"Enter th size of the array: ";
	cin>>n;

	cout<<"Enter th element of the array :"<<endl;
	for(int i = 0 ; i<n; i++) {
		cin>>ary[i];
		
	}

	cout<<"Printinf th element of the array :=> \t";
	for(int i = 0 ; i<n; i++) {
		cout<<ary[i]<<" ";
		cout<<" -|"<<i<<"|"<<"\t";
	}
    
	
	
	return 0;
}