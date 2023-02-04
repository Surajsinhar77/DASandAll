#include<iostream>
#include "BinaryTreeNode.h"
using namespace std;


int NoOfNodeInTree(binaryTreeNode<int> * root){
    if(root == NULL){
        return 0;
    }

    int ans = 0;
    ans  = ans +  NoOfNodeInTree(root->left);
    ans  = ans +  NoOfNodeInTree(root->right);
    return ans+1;
}

int main(){
    binaryTreeNode<int> * root;
    root =  levelWiseInput();

    cout<< "The no of node is :  "<<NoOfNodeInTree(root)<<endl;

    displayBinaryTree(root);
}
