#include<iostream>
#include "treeNode.h"
#include<algorithm>
#include<queue>
using namespace std;


int maxSumOfNodeData(treeNode<int> * root, int level ){
    int data = 0;

    for(int i =0; i <root->children.size(); i++){
        if(level==1){
            int ans  = maxSumOfNodeData(root->children[i],level-1);
            if(data<ans){
                data = ans;
            }
        }else{
            data = data + maxSumOfNodeData(root->children[i],level-1);
        }
    }
    if(level==1){
        data = data;
    }else{
        data = data + root->data;
    }
    return data;
}

treeNode<int> * getMaxNode(treeNode<int> root, int maxData){
    
}

treeNode<int> * maxSumOfNode(treeNode<int> * root){
    int maxData = maxSumOfNodeData(root,1);
    cout <<" --> "<< maxData <<endl;
    return getMaxNode(root, maxData);
}

int main(){
    
    treeNode<int> * root = takeInputLevelWise();

    root = maxSumOfNode(root);
    // printLevelWise(root);
    return 0;
}