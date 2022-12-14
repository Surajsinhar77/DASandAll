#include<iostream>
#include<queue>
using namespace std;

template <typename T>
class BinaryNode{
    public:
    T data;
    BinaryNode<T> * left;
    BinaryNode<T> * right;

    BinaryNode(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

BinaryNode<int> * craeteBinaryTree(){
    int data; cin>>data;

    if(data!= -1){
        return NULL;
    }

    BinaryNode<int> * newNode = new  BinaryNode<int>(data);
    BinaryNode<int> * root = newNode;
    queue<BinaryNode<int> *> pendingNode;
    BinaryNode<int> * front;
    while(!pendingNode.empty()){
        front = pendingNode.front();
        pendingNode.pop();

        cout<<"Enter for root data left : "<<front->data<<" : ";
        cin>>data;
        if(data!= -1){
            BinaryNode<int> * newNode = new BinaryNode<int>(data);
            front->left = newNode;
            pendingNode.push(newNode);
        }

        cout<<"Enter for root data right : "<<front->data<<" : ";
        cin>> data;
        if(data!= -1){
            BinaryNode<int> * newNode = new BinaryNode<int>(data);
            front->right = newNode;
            pendingNode.push(newNode);
        }
    }
    return root;
}

void DisplaybinaryNode(BinaryNode<int> * root){
    if(root==NULL){
        return;
    }

    cout<< " root Node "<<root->data<<endl;

    queue<BinaryNode<int> *> pendingNode;
    pendingNode.push(root);
    BinaryNode<int> * front;
    while(!pendingNode.empty()){
        front = pendingNode.front();
        pendingNode.pop();

        if(front->left != NULL){
            cout<<front->left->data<<" : ";
            pendingNode.push(front->left);
        }

        if(front->left != NULL){
            cout<<front->right->data<<" : ";
            pendingNode.push(front->right);
        }

        if(front->left != NULL || front->right != NULL){
            cout<<endl;
        }
    }
}

int main(){
    BinaryNode<int> * root;
    root= craeteBinaryTree();

    DisplaybinaryNode(root);
}