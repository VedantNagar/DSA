/* Given a binary tree, find the lowest common ancestor (LCA) of two given nodes in the tree.

According to the definition of LCA on Wikipedia: “The lowest common ancestor is defined between two nodes p and q as the lowest node in T that has both p and q as descendants (where we allow a node to be a descendant of itself).” */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==nullptr){
            return nullptr;
        }
        else if(root->val == p->val || root->val == q->val){
            return root;
        }
        TreeNode* leftAns = lowestCommonAncestor(root->left,p,q);
        TreeNode* rightAns = lowestCommonAncestor(root->right,p,q);

        if(leftAns == nullptr && rightAns !=nullptr){
            return rightAns;
        }
        if(leftAns != nullptr && rightAns ==nullptr){
            return leftAns;
        }
        if(leftAns != nullptr && rightAns !=nullptr){
            return root;
        }
        else{
            return nullptr;
        }
    }
};