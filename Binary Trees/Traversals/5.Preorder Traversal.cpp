/* Given the root of a binary tree, return the preorder traversal of its nodes' values.
 */

class Solution {
public:

    void preorderTraversing(TreeNode* root, vector<int>&ans){
        if(root==nullptr){
            return;
        }
        else{
            ans.push_back(root->val);
            preorderTraversing(root->left,ans);
            preorderTraversing(root->right,ans);
        }
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        preorderTraversing(root,ans);
        return ans;
    }
};