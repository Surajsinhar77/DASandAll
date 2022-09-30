#include<iostream>
#include "treeNode.h"
using namespace std;

int NodeCount(treeNode<int> * root){
    int ans = 1;
    
    for(int i = 0; i<root->children.size(); i++){
        int smallans = NodeCount(root->children[i]);
        ans = smallans+1;
    }
    return ans;
}  

int main(){
    
    return 0;
}