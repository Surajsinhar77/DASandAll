#include<iostream>
#include<unordered_map>
#include<string> 

using namespace std;

//NOTE: WE CAN USE ITERATOR ERASE, FIND FUNCTION IN VECTOR ALSO --:--
// map Have pair class objects which first variable have key and the second varaible have value ;

int main(){
	unordered_map<string, int> map1;
	
	//unordered_map<string, int>::iterator it; // pair Object Address
	
	//it = map1.begin();
	
	map1["abc"] = 1;
	map1["abc1"] = 2;
	map1["abc2"] = 3;
	map1["abc3"] = 4;
	map1["abc4"] = 5;
	map1["abc5"] = 6;
	
	
	//cout<<map1["abc"]<<endl;
	unordered_map<string, int>::iterator it = map1.begin();
	
	/*
	for(it; it!=map1.end(); it++){
		cout<<it->first<<endl;
	}
	*/
	
	
	for(int i=1; i<map1.size(); i++){
		cout<<" The key is : "<<it->first <<" and the value is "<<it->second<<endl;
		it++;
	}
	
	// this way we can find the key and value in map 
	unordered_map<string, int>::iterator it2 = map1.find("abc3");
	cout<<" The Key "<<it2->first<<" The value "<<it2->second<<endl; 
	
	// erase function 
	//map1.erase(it2); // we can give pointer also to the erase function
	
	
	
	/*
	for(int i = 0; i<map1.size(); i++){
		if(i==0){
			cout<<map1["abc"]<<" ";
		}else{
			cout<<map1["abc"]<<" ";
		}
	}
	*/
	
	return 0;
}
