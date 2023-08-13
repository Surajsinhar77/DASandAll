#include<iostream>
using namespace std;
#include "BinaryTreeNode.h"


int main(){
    // binaryTreeNode<int>* root = inputBinaryTree();
    binaryTreeNode<int>* root = levelWiseInput();
    // displayBinaryTree(root);
    displayBinaryTreeLevelWise(root);
    delete root;
}