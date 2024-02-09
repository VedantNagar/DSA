/* Given the root of a binary tree, return the inorder traversal of its nodes' values.
 */

class Solution {
public:

    void inorderTraversing(TreeNode* root, vector<int>&ans){
        if(root==nullptr){
            return;
        }
        else{
            inorderTraversing(root->left,ans);
            ans.push_back(root->val);
            inorderTraversing(root->right,ans);
        }
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        inorderTraversing(root,ans);
        return ans;
    }
};