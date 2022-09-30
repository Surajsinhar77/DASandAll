#include<iostream>
#include<queue>
#include "treeNode.h"
using namespace std;


// Count the size of the node 
int NodeCount(treeNode<int> * root){
    int ans = 1;
    for(int i = 0; i<root->children.size(); i++){
        ans += NodeCount(root->children[i]);
    }
    return ans;
}  

int main(){
    
    // treeNode <int> * root = new  treeNode <int>(1);
    // // root->data = 1;
    // treeNode <int> * child1 = new treeNode <int>(2);
    // // child1->data = 2;
    // treeNode <int> * child2 = new treeNode <int>(3);
    // treeNode <int> * child3 = new treeNode <int>(4);
    // child2->data = 3;

    // root->children.push_back(child1);
    // root->children.push_back(child2);
    // root->children.push_back(child3);

    // =============================================================================================
    // ---------------------------------------------------------------------------------------------
    // treeNode <int> * root  = takeInput();
    
    treeNode <int> * root  = takeInputLevelWise();
    printLevelWise(root);
    cout << NodeCount(root);
    return 0;
}