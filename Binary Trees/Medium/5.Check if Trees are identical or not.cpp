/* Given the roots of two binary trees p and q, write a function to check if they are the same or not. */

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==nullptr && q==nullptr){
            return true;
        }
        if(p==nullptr && q!= nullptr){
            return false;
        }
        if(p!=nullptr && q==nullptr){
            return false;
        }
        int left=isSameTree(p->left,q->left);
        int right=isSameTree(p->right,q->right);
        bool value = p->val == q->val;

        if(left && right && value){
            return true;
        }
        else{
            return false;
        }
    }
};