/* A path in a binary tree is a sequence of nodes where each pair of adjacent nodes in the sequence has an edge connecting them. A node can only appear in the sequence at most once. Note that the path does not need to pass through the root. */

class Solution {
private:
    int findMaxSum(TreeNode* root, int &maxi){
        if(root==NULL){
            return 0;
        }
        else{
            int left=max(0,findMaxSum(root->left,maxi));
            int right=max(0,findMaxSum(root->right,maxi));
            maxi=max(maxi,left+right+root->val);

            return max(left,right) + root->val;
        }
    }
public:
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        findMaxSum(root,maxi);
        return maxi;
    }
};