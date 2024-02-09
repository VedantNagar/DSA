/* Given the root of a binary tree, return the postorder traversal of its nodes' values.
 */

class Solution {
public:
    void postorderTraversing(TreeNode* root, vector<int>&ans){
        if(root==nullptr){
            return;
        }
        else{
            postorderTraversing(root->left,ans);
            postorderTraversing(root->right,ans);
            ans.push_back(root->val);
        }
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        postorderTraversing(root,ans);
        return ans;
    }
};