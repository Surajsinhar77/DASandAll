#include<iostream>
#include<queue>
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
