#include<iostream>
#include "BinaryTreeNode.h"
using namespace std;

void displayPreOrder(binaryTreeNode<int> * root){
    if(root==NULL){
        return;
    }

    cout<<root->data<<" ";
    displayBinaryTree(root->left);
    displayBinaryTree(root->right);
}

int main(){
    binaryTreeNode<int> * root;
    root = levelWiseInput();

    displayPreOrder(root);
    return 0;
}

// 10 20 30 40 50 60 70 80 -1 -1 -1 -1 -1 -1 -1 -1 