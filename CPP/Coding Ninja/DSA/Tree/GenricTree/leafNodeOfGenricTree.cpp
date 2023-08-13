#include<iostream>
using namespace std;

int getLeafNodeCount(TreeNode<int>* root){
    
    int ans = 0;
    if(root->children.size()==0){  // When the root have ( 0 ) children then return 1 in ans and ans + other root children 
        return 1;
    }
    
    for(int i =0; i<root->children.size(); i++){
        ans = ans + getLeafNodeCount(root->children[i]);
    }
    return ans;
}

int main(){
    
    return 0;
}