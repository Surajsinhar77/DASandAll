#include<iostream>
#include "BinaryTreeNode.h"
using namespace std;

binaryTreeNode<int> * levelWiseInput(){
    int rootData;
    cout << "Enter the RootData : ";
    cin>> rootData;

    binaryTreeNode<int> * root = new binaryTreeNode<int>(rootData); 
    queue<binaryTreeNode<int>*>  pendingNode;
    pendingNode.push(root);
    while(!pendingNode.empty()){
        binaryTreeNode<int> * front = pendingNode.front();
        pendingNode.pop();
        int leftData,rightData;
        cout<< "Enter The data for : "<<front->data<<" left node :";
        cin>>leftData;
        if(leftData!=-1){
            binaryTreeNode<int> * leftNode =  new binaryTreeNode<int>(leftData);
            front->left = leftNode;
            pendingNode.push(leftNode);
        }
        cout<< "Enter The data for : "<<front->data<<" Right node :";
        cin>>rightData;
        if(rightData!=-1){
            binaryTreeNode<int> * rightNode = new binaryTreeNode<int>(rightData);
            front->right = rightNode;
            pendingNode.push(rightNode);
        }
    }
    return root;
}


int main(){

}