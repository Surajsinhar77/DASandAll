#include<iostream>
#include "BinaryTreeNode.h"

binaryTreeNode<int> * buildTree(int * preorder, int preLength, int * inorder, int inOrder){
    
}

int main(){
    int size;
    cin >> size;
    int *pre = new int[size];
    int *in = new int[size];
    for (int i = 0; i < size; i++) cin >> pre[i];
    for (int i = 0; i < size; i++) cin >> in[i];
    binaryTreeNode<int> * root = buildTree(pre, size, in, size);
    // displayBinaryTreeLevelWise(root);
    return 0;
}