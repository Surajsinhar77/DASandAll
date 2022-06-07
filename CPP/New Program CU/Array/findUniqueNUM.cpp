#include<iostream>
using namespace std;

int findUnique(int ary[],int n){
    int temp = 0;
    for(int i=0; i<n;){
        for(int j=0;j<n; j++){
            if(ary[i] == ary[j] && i != j){
                i++;
            }else{
                if(j==n-1){
                    // cout<<"UNiqueNO : "<<ary[i]<<endl;
                    return ary[i];
                }
            }    
        }
    }
}

int main(){
	int t;
	cin >> t;

	while (t--){
		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; ++i){
			cin >> input[i];
		}

        int one = 0;
		one =  findUnique(input, size);
        cout<<one<<endl; 
	}
	return 0;
}

// 1
// 11
// 5 3 1 5 1 3 4 7 4 8 8 

// 1
// 5
// 3 1 4 3 4 

// 1
// 7
// 2 3 1 6 3 6 2