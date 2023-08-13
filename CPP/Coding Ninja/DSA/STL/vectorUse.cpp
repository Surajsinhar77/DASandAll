#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    /*  vector is similar to the array but it is template of the class so it have some function . 
    1. object.push_back() to insert
    2. object.pop_back() to delete last element 
    3. object.size() to know the how many element present in the vector
    4. object.capicity() to know the capicity of the vector
    */
    vector <int> v;  // this is how to make int vector 

    v.push_back(2);  // this is how to insert element in the vector 
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);

    cout << v.size() << endl;           // use to know the no of element in the vector 
    v.pop_back();                       // use to delete the last element in the vector
    cout << v.size() << endl;
    cout << v.capacity() << endl;       // to know the size of the vector 
    return 0;
}