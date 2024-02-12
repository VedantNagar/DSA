/* You are given a binary tree having 'n' nodes.

The boundary nodes of a binary tree include the nodes from the left and right boundaries and the leaf nodes, each node considered once.

Figure out the boundary nodes of this binary tree in an Anti-Clockwise direction starting from the root node. */

void traverseLeft(TreeNode<int> *root,vector<int>&ans){
    if((root==nullptr) || ((root->left==nullptr) && (root->right==nullptr))){
        return;
    }
    ans.push_back(root->data);
    if(root->left){
        traverseLeft(root->left,ans);
    }
    else{
        traverseLeft(root->right,ans);
    }
}

void traverseLeaf(TreeNode<int> *root,vector<int>&ans){
    if(root==nullptr){
        return;
    }
    if(root->left==nullptr && root->right == nullptr){
        ans.push_back(root->data);
        return;
    }
    traverseLeaf(root->left,ans);
    traverseLeaf(root->right,ans);
}

void traverseRight(TreeNode<int> *root,vector<int>&ans){
    if((root==nullptr) || ((root->left==nullptr) && (root->right==nullptr))){
        return;
    }
    if(root->right){
        traverseRight(root->right,ans);
    }
    else{
        traverseRight(root->left,ans);
    }
    ans.push_back(root->data);
}

vector<int> traverseBoundary(TreeNode<int> *root)
{
    vector<int>ans;
	if(root==nullptr){
        return ans;
    }
    ans.push_back(root->data);

    //traversing left part
    traverseLeft(root->left,ans);

    //traversing the leaf nodes using inorder traversal
    //left leaf nodes
    traverseLeaf(root->left,ans);
    //right leaf nodes
    traverseLeaf(root->right,ans);

    //traversing right part
    traverseRight(root->right,ans);

    return ans;
}
