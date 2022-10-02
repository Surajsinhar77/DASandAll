#include<iostream>
#include "treeNode.h"
using namespace std;


bool areIdentical(TreeNode<int> * root1, TreeNode<int> * root2){
    if(root1==NULL && NULL == root2){
		return true;
    }
    // Write your code here
    if(root1 == NULL){
        return false;
    }else if(root2 == NULL){
        return false;
    }
        
    bool flag = true;
    if(root1->data!=root2->data){
        return false;
    }
    
	if(root1->children.size() != root2->children.size()){
        return false;
    }else{
        for(int i =0; i<root1->children.size(); i++){
            flag = areIdentical(root1->children[i],root2->children[i]);
        }
    }
    return flag;
}

int main(){
    treeNode<int> * root1;
    root1 = takeInputLevelWise();
    treeNode<int> * root2;
    root2 = takeInputLevelWise();
    cout << areIdentical(root1, root2);
    return 0;
}