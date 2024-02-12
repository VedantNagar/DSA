/* You have been given a Binary Tree of 'n' nodes, where the nodes have integer values

Print the LEFT view of the binary tree. */
void leftView(BinaryTreeNode<int>* root, vector<int>&ans,int level){
    if(root==nullptr){
        return;
    }
    if(level == ans.size()){
        ans.push_back(root->data);
    }
    leftView(root->left,ans,level+1);
    leftView(root->right,ans,level+1);
}

vector<int> printLeftView(BinaryTreeNode<int>* root) {
    vector<int>ans;
    leftView(root,ans,0);
    return ans;
}

/* Given the root of a binary tree, imagine yourself standing on the RIGHT side of it, return the values of the nodes you can see ordered from top to bottom. */

class Solution {
public:

    void rightView(TreeNode* root, vector<int>&ans, int level){
        if(root==nullptr){
            return;
        }
        if(level == ans.size()){
            ans.push_back(root->val);
        }
        rightView(root->right,ans,level+1);
        rightView(root->left,ans,level+1);
    }

    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        rightView(root,ans,0);
        return ans;
    }
};