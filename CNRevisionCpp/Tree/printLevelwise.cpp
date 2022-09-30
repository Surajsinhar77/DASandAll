#include<iostream>
#include "treeNode.h"
using namespace std;

void printLevelWise(treeNode<int>*root, int k){
    if(root == NULL){
        return;
    }

    if(k == 0){
        cout<<root->data<<" ";
    }
    for(int i =0; i<root->children.size(); i++){
        printLevelWise(root->children[i],k-1);
    }
}

int main(){
    treeNode <int> * root = takeInputLevelWise();
    cout<< " Enter the Level in which You want to print : "<<endl;
    int k;
    cin>>k;
    printLevelWise(root,k);
    return 0;
}