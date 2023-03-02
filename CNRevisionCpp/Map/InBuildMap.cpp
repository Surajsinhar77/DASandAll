#include<iostream>
#include<unordered_map>

using namespace std;

int main(){

    unordered_map<string , int> map1;  // this is how we can create object of map 

    pair<string, int> p1("naam", 5);  //creating pair object

    map1.insert(p1); // this way we can also insert piar in the map 

    map1["kaam"] = 7; // this is how we can insert value and key

    cout<<map1["ram"]; // this is how we print value using key 

    // map1.at("haan")  =  5 ;

    cout<<map1.size()<<endl;

    cout<<map1["naam"]<<" "<<map1["kaam"]<<" "<<map1["ram"]<<" "<<endl; // this is how we can print the value of the value
    

    return 0;
}