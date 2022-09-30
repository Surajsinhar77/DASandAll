#include<iostream>
#include "treeNode.h"
#include<algorithm>
using namespace std;

// int getHeightOftree(treeNode<int>*root){
//     int ans = 1;
//     for(int i =0; i<root->children.size(); i++){
//         int ans2 = 1 + getHeightOftree(root->children[i]);
//         if(ans<ans2){
//             ans = ans2;
//         }
//     }
//     return ans;
// }

// Using max Function of algorithms

int getHeightOftree(treeNode<int>*root){
    int ans = 1;
    for(int i =0; i<root->children.size(); i++){
        ans = max(ans,1 + getHeightOftree(root->children[i]));
    }
    return ans;
}

int main(){
    treeNode<int> * root = takeInputLevelWise();
    cout<< getHeightOftree(root);
    return 0;
}