/* Given the root of a binary tree, return the length of the diameter of the tree.

The diameter of a binary tree is the length of the longest path between any two nodes in a tree. This path may or may not pass through the root. */

class Solution {
private:
    int findMax(TreeNode* root, int &diameter){
        if(root==nullptr){
            return 0;
        }
        int l=findMax(root->left,diameter);
        int r=findMax(root->right,diameter);
        diameter=max(diameter,l+r);
        return 1+max(l,r);
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter=0;
        findMax(root,diameter);
        return diameter;
    }
};