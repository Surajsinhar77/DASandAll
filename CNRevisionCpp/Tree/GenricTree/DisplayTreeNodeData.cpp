#include<iostream>
#include "treeNode.h"
using namespace std;


void printTree(treeNode <int> root){
    if(root == NULL){
        return;
    }

    cout << root->data << " : "; 
    for(int i=0; i< root->children.size(); i++){
        cout << root->children[i]->data << ",";
    }
    cout<<endl;
    for(int i = 0; i< root->children.size(); i++){
        printTree(root->children[i]);
    }
}

int main(){
    
    return 0;
}