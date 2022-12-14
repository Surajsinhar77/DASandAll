#include<iostream>
using namespace std;
#include "BinaryTreeNode.h"

void printhelper(binaryTreeNode<int> * root , int & level){
    if(root == NULL){
        return;
    }
    cout<<root->data<<endl;
    queue<binaryTreeNode<int> * > pendingNode;
    pendingNode.push(root);
    binaryTreeNode<int> * front;
    
    while(!pendingNode.empty()){


        while (pendingNode.size()>0){
            front = pendingNode.front();
            pendingNode.pop();

            if(front->left != NULL){
                cout<<front->left->data<<" ";
                // pendingNode.push(front->left);
            }

            if(front->right != NULL){
                cout<<front->right->data<<" ";
                // pendingNode.push(front->right);
            }
        }
            if(front->left != NULL){
                pendingNode.push(front->left);
            }

            if(front->right != NULL){
                pendingNode.push(front->right);
            }
        cout<<endl;
    }
}

void printLevelWise(binaryTreeNode<int> * root ){
    int level = 0;
    printhelper(root, level);
}

int main(){
    binaryTreeNode<int> * root  = levelWiseInput();
    printLevelWise(root);
}