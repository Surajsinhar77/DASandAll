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

int main(){
	binaryTreeNode<int> * root;
	root = levelWiseInput();
	
	cout<<heightOftheTree(root);
	return 0;
}
