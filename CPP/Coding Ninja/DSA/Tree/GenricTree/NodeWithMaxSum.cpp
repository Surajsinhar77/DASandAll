TreeNode<int> * maxSumNode(TreeNode<int> * root){
    if(root == NULL){
        return root;
    }
    
    queue<TreeNode<int>*> pendingNode;
	pendingNode.push(root);

    Pair<int> p1;
    p1.sum = INT_MIN;
    p1.maxNode = NULL;

    while(!pendingNode.empty()){
        TreeNode<int> * front = pendingNode.front();
        pendingNode.pop();

        int n = front->children.size();
        int sum = front->data;

        for(int i = 0; i<n; i++){
            sum = sum + front->children.at(i)->data;
            pendingNode.push(front->children[i]);
        }
        
        if(p1.sum < sum ){
            p1.sum = sum;
        	p1.maxNode = front;
        }
    }
    return p1.maxNode;
}
