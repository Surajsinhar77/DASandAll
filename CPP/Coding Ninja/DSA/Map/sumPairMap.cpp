#include<iostream>
#include<unordered_map>
#include<queue>
#include<stack>


// PENDING TILL NOW 

using namespace std;

int pairSum(int *arr, int n) {
  
  unordered_map<int, int> map1;

  queue<int> q1;

  for (int i = 0; i < n; i++) {
    map1[arr[i]]++;
  }

  
  int count = 0;

  for (int i = 0; i < n; i++) {
    if (arr[i] > 0) {
      if (map1.count(-(arr[i])) > 0) {
        count = count + map1[arr[i]] * map1[-(arr[i])];
        map1.erase(arr[i]); // we can use this erase function also
        map1.erase(-(arr[i]));
      }

    }else if (arr[i] == 0) {
      count = count + map1[arr[i]] - 1;
      map1[arr[i]]--;
    }
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
	cout<<pairSum(arr, n);
	return 0;
}
