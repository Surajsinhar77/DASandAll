#include<unordered_map>
#include<iostream>
#include<string>
#include<vector>
#include<limits.h>

using namespace std;

int highestFrequency(int arr[], int n) {
    if(n == 0){
        return 0;
    }
    unordered_map<int, int> map1;
    vector<int> v1;

    for(int i =0; i<n; i++){

        if(map1.count(arr[i]) > 0){
            map1[arr[i]]++;
            continue;
        }else{
            map1[arr[i]] = 1;
            v1.push_back(arr[i]);
        }
    }
    int max = INT_MIN;
    int to_return = 0;
    for(int i =0; i<v1.size(); i++){
        if( max < map1[v1.at(i)] ){
            max  = map1[v1[i]];
            to_return = v1[i];
        }
    }
    return to_return;
}

int main(){
	int n;
	cout<<"enter the size of array : ";
	cin>>n;
	int arr[n];
	
	for(int i =0; i<n; i++){
		cin>>arr[i];
	}
	
	cout<<highestFrequency(arr, n);
}
