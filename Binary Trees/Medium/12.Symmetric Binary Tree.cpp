/* Given the root of a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center). */

class Solution {
public:

    bool checkSymmetricity(TreeNode* left, TreeNode* right){
        if(left==nullptr && right==nullptr){ //both are null
            return true;
        }
        if(left==nullptr || right==nullptr){ //only one is null
            return false;
        }
        if(left->val != right->val){
            return false;
        }
        return (
            checkSymmetricity(left->left,right->right) &&
            checkSymmetricity(left->right,right->left)
        );
    }

    bool isSymmetric(TreeNode* root) {
        if(root==nullptr){
            return true;
        }
        return checkSymmetricity(root->left,root->right);
    }
};