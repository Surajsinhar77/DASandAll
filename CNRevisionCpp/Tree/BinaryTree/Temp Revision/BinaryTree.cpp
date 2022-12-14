#include<iostream>
using namespace std;
#include<queue>

template <typename T>
class BinaryTree{
	public:
	T data;
	BinaryTree<T> * left;
	BinaryTree<T> * right;

	BinaryTree(T data){
		this->data = data;
		left = NULL;
		right = NULL;
	}

	~BinaryTree(){
		delete left;
		delete right;
	}
};

// BinaryTree<int> * BinaryTreeNodeInsert(){
// 	int rootData;
// 	cout<<"Enter the data : ";
// 	cin>> rootData;

// 	if(rootData == -1){
// 		return NULL;
// 	}

// 	BinaryTree<int> * root = new BinaryTree<int>(rootData);
// 	BinaryTree<int> * leftNode  = BinaryTreeNodeInsert();
// 	BinaryTree<int> * rightNode = BinaryTreeNodeInsert();
// 	root->left = leftNode;
// 	root->right = rightNode;
// 	return root;
// }

BinaryTree<int> * BinaryNodeDataLevelWise(){
	int rootData;
	cout<< "Root data  : ";
	cin>> rootData;
	BinaryTree<int> * root = new BinaryTree<int>(rootData);
	queue<BinaryTree<int> * > pendingNode;
	pendingNode.push(root);
	BinaryTree<int> * front;
	while(!pendingNode.empty()){
		front = pendingNode.front();
		pendingNode.pop();
		cout<< "Enter The data for : "<<front->data<<" left node : ";
		int data; cin>>data;
		if(data != -1){
			BinaryTree<int> * newNode = new BinaryTree<int>(data);
			front->left = newNode;
			pendingNode.push(front->left);
		}
		cout<< "Enter The data for : "<<front->data<<" right node : ";
		cin>>data;
		if(data != -1){
			BinaryTree<int> * newNode = new BinaryTree<int>(data);
			front->right = newNode;
			pendingNode.push(front->right);
		}
	}
	return root;
}

// void DisplayBinaryTree(BinaryTree<int> * root){
// 	if(root == NULL ){
// 		return;
// 	}

// 	cout<<root->data<<" : ";
// 	if(root->left != NULL){
// 		cout<<" L node : "<<root->left->data<<" , ";
// 	}

// 	if(root->right != NULL){
// 		cout<<" R node : "<<root->right->data;
// 	}
// 	cout<<endl;
// 	DisplayBinaryTree(root->left);
// 	DisplayBinaryTree(root->right);
// }

void displayLevelWise(BinaryTree<int> * root){
	if(root == NULL){
		return;
	}

	cout<<"The Root Node "<<endl;
	cout<<root->data<<" "<<endl;
	queue<BinaryTree<int> *>  pendingNode;
	pendingNode.push(root);

	BinaryTree<int> * front;
	while(!pendingNode.empty()){
		front = pendingNode.front();
		pendingNode.pop();

		if(front->left != NULL){
			cout<<front->left->data<<" ";
			pendingNode.push(front->left);
		}

		if(front->right != NULL){
			cout<<front->right->data<<" ";
			pendingNode.push(front->right);
		}

		if(front->left != NULL || front->right != NULL){
			cout<<endl;
		}
	}
	// cout<<endl;
}

int main(){
	BinaryTree<int> * root;
	root = BinaryNodeDataLevelWise();

	displayLevelWise(root);
}
