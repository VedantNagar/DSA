/* Given a binary tree, determine if it is 
height-balanced */

class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(checkingBalance(root)==-1){
            return false;
        }
        else{
            return true;
        }
    }
    
    int checkingBalance(TreeNode* root){
        if(root==nullptr){
            return 0;
        }
        else{
            int l = checkingBalance(root->left);
            if(l==-1){
                return -1;
            }
            int r = checkingBalance(root->right);
            if(r==-1){
                return -1;
            }
            if(abs(l-r)>1){
                return -1;
            }
            return max(l,r)+1;
        }
    }
};