#include<iostream>
#include<queue>
using namespace std;

void printLevelWise(TreeNode<int>* root) {
    // Write your code here
    queue<TreeNode<int>*> pendingNodes;
    TreeNode<int>* front = root;
    pendingNodes.push(root);
    
    while(pendingNodes.size()!=0){
        front = pendingNodes.front();
        pendingNodes.pop();
        cout <<front->data<<":";
        for(int i =0; i< front->children.size(); i++){
            cout << front->children.at(i)->data;
            pendingNodes.push(front->children.at(i));
            if(i < front->children.size() - 1){
                cout << ",";
            }
        }
        cout<<endl;
    }
}
