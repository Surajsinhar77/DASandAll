#include<iostream>
#include "treeNode.h"
using namespace std;

treeNode <int> * takeInput(){
    int treedata;
    cout << "Enter the data ";
    cin>>treedata;
    treedata <int> * root = new treedata(treedata);
    int n;
    cout << "Enter the no of Children : ";
    cin>>n;
    for(int i =0; i<n; i++){
        treeNode <int> * child = takeInput();
        root->children.push_back(child);
    }
    return root;
}

int main(){
    
    return 0;
}