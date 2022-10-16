#include<iostream>
#include<queue>
using namespace std;

template <typename T>
class binaryTreeNode{
    public:
        int data;
        binaryTreeNode<T> * left;
        binaryTreeNode<T> * right;

        binaryTreeNode(T data){
            this->data = data;
            left = NULL;
            right = NULL;
        }

        ~binaryTreeNode(){
            delete left;
            delete right;
        }
};

binaryTreeNode<int> * inputBinaryTree(){
    int rootData;
    cout << "Enter the data : ";
    cin>>rootData;

    if(rootData == -1){
        return NULL;
    }
    binaryTreeNode<int> * root = new binaryTreeNode<int>(rootData);
    binaryTreeNode<int> * leftNode = inputBinaryTree();
    binaryTreeNode<int> * rightNode = inputBinaryTree();
    root->left = leftNode;
    root->right = rightNode;
    return root;
}

void displayBinaryTree(binaryTreeNode<int>* root){
    if(root==NULL){
        return;
    }
    cout << root->data <<" : ";
    if(root->left!=NULL){
        cout<<" L Data : "<<root->left->data;
        if(root->right!=NULL){
            cout<<",";
        }
    }

    if(root->right!= NULL){
        cout<< " R Data : "<<root->right->data;
    }
    cout<<endl;
    displayBinaryTree(root->left);
    displayBinaryTree(root->right);
}

binaryTreeNode<int> * levelWiseInput(){
    int rootData;
    cout << "Enter the RootData : ";
    cin>> rootData;

    binaryTreeNode<int> * root = new binaryTreeNode<int>(rootData); 
    queue<binaryTreeNode<int>*>  pendingNode;
    pendingNode.push(root);
    while(!pendingNode.empty()){
        binaryTreeNode<int> * front = pendingNode.front();
        pendingNode.pop();
        int leftData,rightData;
        cout<< "Enter The data for : "<<front->data<<" left node : ";
        cin>>leftData;
        if(leftData!=-1){
            binaryTreeNode<int> * leftNode =  new binaryTreeNode<int>(leftData);
            front->left = leftNode;
            pendingNode.push(leftNode);
        }
        cout<< "Enter The data for : "<<front->data<<" Right node : ";
        cin>>rightData;
        if(rightData!=-1){
            binaryTreeNode<int> * rightNode = new binaryTreeNode<int>(rightData);
            front->right = rightNode;
            pendingNode.push(rightNode);
        }
    }
    return root;
}

void displayBinaryTreeLevelWise(binaryTreeNode<int> * root){
    if(root == NULL){
        return;
    }
    
    queue<binaryTreeNode<int>*> pendingNode;
    pendingNode.push(root);
    while(!pendingNode.empty()){
        binaryTreeNode<int> * front = pendingNode.front();
        pendingNode.pop();
        cout << front->data << " : ";
        if(front->left!=NULL){
            cout <<"L "<<front->left->data << " : ";
            pendingNode.push(front->left);
        }
        if(front->right!=NULL){
            cout <<"R "<< front->right->data;
            pendingNode.push(front->right);
        }
        cout<<endl;
    }
}