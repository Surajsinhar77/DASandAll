#include<iostream>
#include<unordered_map>
using namespace std;

#define ll long long

class Solution{
	public:
	bool isArraysEqual(ll *arr,ll *arr2, int n){
		unordered_map<ll, int> map1;
		
		bool ans = false;
		
		for(int i =0; i<n; i++){
			map1[arr[i]]++;
		}
		
		for(int i =0; i<n; i++){
			if(map1[arr2[i]] > 0){
				ans = true;
				map1[arr2[i]]--;
			}else{
				return false;
			}
		}
		return ans;
	}
};

int main(){
	int n;
	cout<<"Enter the size of the Array : ";
	cin>>n;
	
	ll arr[n],arr2[n];
	for(int i =0; i<n; i++){
		cin >> arr[i];
	}
	
	for(int i =0; i<n; i++){
		cin >> arr2[i];
	}
	Solution ob1;
	cout<< ob1.isArraysEqual(arr, arr2, n);
}
