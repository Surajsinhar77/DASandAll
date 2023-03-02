#include<iostream>
#include<unordered_map>
#include<queue>
#include<stack>


// PENDING TILL NOW 

using namespace std;

int sumPair(int arr[], int n){
	unordered_map<int, int> map1;
	
	queue<int> q1;
	
	for(int i=0; i<n; i++){
		map1[arr[i]]++;
	}
	
	for(int i=0; i<n; i++){
		q1.push(arr[i]);
	}
	
	int count=0;
	
	while(!q1.empty()){
		if(q1.front() > 0){
			if( map1.count(-(q1.front() )) > 0){
				count++;
				map1[q1.front()]--;
				q1.pop();
			}
		}else{
			if(map1.count(+(q1.front())) > 0 ){
				count++;
				map1[q1.front()]--;
				q1.pop();
			}
		}
		
		q1.pop();
	}
	return count;
}

int main(){
	int n;
	cout<<"Enter the size of the array : ";
	cin >> n;
	int arr[n];
	
	for(int i =0; i<n; i++){
		cin>>arr[i];
	}
	cout<<sumPair(arr, n);
	return 0;
}
