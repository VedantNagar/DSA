/* Given the root of a binary tree, return the zigzag level order traversal of its nodes' values. (i.e., from left to right, then right to left for the next level and alternate between). */

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==nullptr){
            return ans;
        }
        queue<TreeNode*>q;
        q.push(root);
        bool leftToRight = true;
        while(!q.empty()){
            int size = q.size();
            vector<int>row(size);
            /* the row vector is initialized with a fixed size to ensure that the elements are inserted at the correct index. */
            for(int i=0;i<size;i++){
            TreeNode* node = q.front();
            q.pop();

            //checking which way should enter
            int index = leftToRight ? i : (size-i-1);
            //inserting the node(s) in the row vector
            row[index]=node->val;

            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
        }
        //changing direction 
        leftToRight = !leftToRight;
        //pushing one row in the final sol
        ans.push_back(row);
        }
        return ans;
    }
};