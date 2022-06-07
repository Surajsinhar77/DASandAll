#include<iostream>
using namespace std;

// int lasta(int arr[],int n,int j){
//     arr[n] = j;
//     return n = n-1;
// }

void arrange(int arr[], int n){
    
    int fstHalf = (n-1)/2;
	int j = 1;
	for(int i=0; i <= fstHalf; i++){
		arr[i] = j;
		j = j+2;
	}

	int k = 0;
	if(n%2==0){
		k = n;
	}else{
		k = n-1;
	}
	
	for(int i = fstHalf+1; i<n; i++){
		arr[i] = k;
		k = k-2;
	}
}

int main(){

    int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int *arr = new int[n];
		arrange(arr, n);
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		delete [] arr;
	}
    return 0;
}