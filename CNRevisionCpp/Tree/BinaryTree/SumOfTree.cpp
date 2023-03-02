#include<iostream>
#include "BinaryTreeNode.h"
using namespace std;


int sumOfTree(binaryTreeNode<int> * root){
	if(root == NULL){
		return 0;
	}
	
	// int ans;
	int ans1 = sumOfTree(root->left);
	int ans2 = sumOfTree(root->right);
	
	return ans1+root->data+ans2;
}

int main(){
	binaryTreeNode<int> * root;
	root = levelWiseInput();
	
	cout<<"This is the sum of Node : "<<sumOfTree(root)<<endl;
	
	displayBinaryTreeLevelWise(root);
	return 0;
}
