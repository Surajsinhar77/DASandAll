#include<iostream>
#include<queue>
#include "treeNode.h"
using namespace std;


treeNode <int> * takeInputLevelWise(){
    int rootdata;
    cout<< "Enter root data :";
    cin>>rootdata;
    treeNode <int> * root = new treeNode<int>(rootdata);

    queue<treeNode<int>*> pendingNode;
    pendingNode.push(root);

    treeNode <int> * front = root;
    while (pendingNode.size() != 0){
        front = pendingNode.front();
        pendingNode.pop();
        int numChild;
        cout << "Enter the no of nodes for "<< front->data<< " : ";
        cin>>numChild;
        for(int i=0; i<numChild; i++){
            int childData;
            cout << "Enter the data for "<<i<< "th child of "<<front->data<<" : ";
            cin>>childData;
            treeNode <int> * child = new treeNode <int>(childData);
            front->children.push_back(child);
            pendingNode.push(child);
        }
    }
    return root;
}

// take Input Tree function
treeNode <int> * takeInput(){
    int treedata;
    cout << "Enter the data ";
    cin>>treedata;
    treeNode <int> * root = new treeNode <int> (treedata);
    int n;
    cout << "Enter the no of Children : ";
    cin>>n;
    for(int i =0; i<n; i++){
        treeNode <int> * child = takeInput();
        root->children.push_back(child);
    }
    return root;
}

// Print Function in node 
void printTree(treeNode <int> * root){
    if(root == NULL){
        return;
    }
    cout << root->data << " : "; 

    for(int i=0; i< root->children.size(); i++){
        cout << root->children[i]->data ;
        if(i < root->children.size() - 1){
            cout << ",";
        }
    }
    cout<<endl;
    for(int i = 0; i< root->children.size(); i++){
        printTree(root->children[i]);
    }
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
    printTree(root);
    // ---------------------------------------------------------------------------------------------
    // =============================================================================================

    // cout << root->data << endl;
    // treeNode <int> * child = root->children.at(0);
    // cout << child->data << endl;
    // child = root->children.at(1);
    // cout << child->data << endl;

    // This is how i made to traverse the tree to print the data
    // treeNode <int> * head = root;
    // int i = 0;
    // while(i != root->children.size()+1){
    //     cout << head->data << endl;
    //     if(i < root->children.size())
    //         head = root->children.at(i);
    //     i++;
    // }
    return 0;
}