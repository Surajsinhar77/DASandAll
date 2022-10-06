/************************************************************

    Following is the structure for the TreeNode class

    template <typename T>
    class TreeNode {
        public:
        T data;
        vector<TreeNode<T>*> children;

        TreeNode(T data) {
            this->data = data;
        }

        ~TreeNode() {
            for (int i = 0; i < children.size(); i++) {
                delete children[i];
            }
        }
    };

************************************************************/
#include<algorithm>
#include<limits.h>
#include<vector>
#include<queue>
#include<iostream>
#include "treeNode.h"
using namespace std;

template <typename T>
class Pair{
    public:
    T sum;
    treeNode<T> * maxNode; 
};


treeNode<int> * maxSumNode(treeNode<int> * root){
    if(root == NULL){
        return root;
    }
    
    queue<treeNode<int>*> pendingNode;
	pendingNode.push(root);
    Pair<int> p1;
    p1.sum = INT_MIN;
    p1.maxNode = NULL;
    while(!pendingNode.empty()){
        treeNode<int> * front = pendingNode.front();
        pendingNode.pop();
        int n = front->children.size();
        int sum = front->data;
        for(int i = 0; i<n; i++){
            sum = sum + front->children.at(i)->data;
            pendingNode.push(front->children[i]);
        }
        
        if(p1.sum < sum ){
            p1.sum = sum;
            p1.maxNode = front;
        }
    }
    return p1.maxNode;
}


int main(){
    
    treeNode<int> * root = takeInputLevelWise();

    root = maxSumNode(root);
    printLevelWise(root);
    return 0;
}