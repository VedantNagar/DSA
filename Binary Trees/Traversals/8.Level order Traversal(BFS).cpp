/* Given the root of a binary tree, return the level order traversal of its nodes' values. (i.e., from left to right, level by level). */

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==nullptr){
            return ans;
        }
        queue<TreeNode*>sol;
        sol.push(root);
        while(!sol.empty()){
            int size = sol.size();
            vector<int>row;
            for(int i=0;i<size;i++){
                TreeNode* node = sol.front();
                sol.pop();
                if(node->left !=nullptr){
                    sol.push(node->left);
                }
                if(node->right !=nullptr){
                    sol.push(node->right);
                }
                row.push_back(node->val);
            }
            ans.push_back(row);
        }
        return ans;
    }
};