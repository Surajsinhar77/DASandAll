#include<iostream>
#include<vector>
using namespace std;

vector<int> findFirstAndLastIndex(vector<int> arr, int n, int x){
	vector<int> v1;
	bool check_1 = true;
	
	for(int i = 0; i<n; i++){
		if(check_1 && arr[i] == x){
			v1.push_back(i);
			v1.push_back(i);
			check_1 = false;
		}else{
			if(arr[i] == x){
				v1.pop_back();
				v1.push_back(i);
			}
		}
	}
	
	if(v1.size() == 0){
		v1.push_back(-1);
		v1.push_back(-1);
	}
	
	return v1;
}

int main(){
	vector<int> arr;
	
	int data;
	cin>>data;
	while(data != -1){
		arr.push_back(data);
		cin>> data;
	}
	
	int toFind; cout<<"Enter the which you want to find : ";
	cin>>toFind;
	
	vector<int> ans = findFirstAndLastIndex(arr, arr.size(), toFind);
	
	while(!ans.empty()){
		cout<<ans.front()<<" ";
		ans.pop_back();
	}
	
	return 0;
}
