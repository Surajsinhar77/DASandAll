#include<iostream>
#include<algorithm>
#include "BinaryTreeNode.h"
using namespace std;

int heightOftheTree(binaryTreeNode<int> * root){
	if(root == NULL){
		return 0;
	}
	return max(heightOftheTree(root->left)+1,heightOftheTree(root->right)+1); 
}

bool checkBalanceTree(binaryTreeNode<int> * root){
	if(root == NULL){
		return true;
	}

	bool ans = checkBalanceTree(root->left);
	ans = checkBalanceTree(root->right);

	if(heightOftheTree(root->left) - heightOftheTree(root->right) <= 1){
		return ans;
	}else{
		return false;
	}
}

int main(){
	binaryTreeNode<int> * root;
	root = levelWiseInput();
	cout<<"The Height of the Tree is : "<<heightOftheTree(root)<<endl;
	cout<<(checkBalanceTree(root)? "True" : "False");
	displayBinaryTreeLevelWise(root);
}
