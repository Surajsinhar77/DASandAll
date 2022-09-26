#include <vector>
#include <queue>
using namespace std;

template <typename T>
class treeNode{
    public:
    T data;
    vector <treeNode <T> * > children;  

    treeNode(int data){
        this->data = data;
    }

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
};