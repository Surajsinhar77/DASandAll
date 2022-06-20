#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int n;
	cin >> n;
	
	int i=0;
	
	while(i<n){
	    int j = i;
	    while(j<n+i){
	        char ch = 'A'+j;
	        cout<<ch;
	        j++;
	    }
	    cout<<endl;
	    i++;
	}
	return 0;
}
