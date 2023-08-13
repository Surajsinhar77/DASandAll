#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

vector<int> removeDuplicate(int arr[], int n){
    vector<int> v1;
    unordered_map<int, int> map1;

    for(int i =0; i<n; i++){
        if(map1.count(arr[i]) > 0){
            continue;
        }
        map1[arr[i]];
        v1.push_back(arr[i]);
    }
    return v1;
}

int main(){
    int arr[]  = {2 , 5, 6, 7, 1 , 2 , 3 , 2 , 5 ,6, 9, 1};

    int sizeArr = sizeof(arr)/sizeof(int);
    vector<int> v1 = removeDuplicate(arr, sizeArr);

    for(int i =0; i<v1.size(); i++){
        cout<<v1.at(i)<<" ";
    }
}