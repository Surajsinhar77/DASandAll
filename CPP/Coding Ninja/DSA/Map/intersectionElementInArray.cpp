#include<iostream>
#include<unordered_map>git@github.com:Surajsinhar77/DASandAll.git

using namespace std;

void getIntersectionOfArray(int arr[], int n, int arr2[], int m){
	unordered_map<int, int> map1;
	
	for(int i=0; i<n; i++){
		map1[arr[i]]++;
	}
	
	for(int i =0; i<m; i++){
		if(map1.count(arr2[i]) > 0 && map1[arr2[i]] > 0){
			cout<<arr2[i]<<" ";
			map1[arr2[i]]--;
		}
	}		
}

int main(){

	int n;
	cout<<"enter the size of the array1 : ";
	cin>>n;
	
	int m ;
	cout<<"enter the size of the array2 : ";
	cin>>m;
	int arr[n], arr2[m];
	
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	for(int i=0; i<m; i++){
		cin>>arr2[i];
	}
	
	getIntersectionOfArray(arr, n ,arr2, m);
	return 0;
}
