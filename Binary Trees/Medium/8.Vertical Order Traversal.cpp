/* Given the root of a binary tree, calculate the vertical order traversal of the binary tree.

For each node at position (row, col), its left and right children will be at positions (row + 1, col - 1) and (row + 1, col + 1) respectively. The root of the tree is at (0, 0).

The vertical order traversal of a binary tree is a list of top-to-bottom orderings for each column index starting from the leftmost column and ending on the rightmost column. There may be multiple nodes in the same row and same column. In such a case, sort these nodes by their values. */

class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int> > >nodes; //1st int = hd; 2nd int=level ; multiset= nodes
        queue <pair<TreeNode*,pair<int,int> > > q;
        vector<vector<int>> ans;
        q.push({root,{0,0}});
        while(!q.empty()){
            auto p = q.front();
            q.pop();
            TreeNode* node = p.first; //node = root
            int hd = p.second.first , lvl= p.second.second; //hd=0 ; lvl=0 hd=horizontal distance
            nodes[hd][lvl].insert(node->val); // eg: entering root's value for 0 hd and 0 lvl

            if(node->left){
                q.push({node->left,{hd-1,lvl+1}});
            }
            if(node->right){
                q.push({node->right,{hd+1,lvl+1}});
            }
        }
        for(auto i:nodes){
            vector<int>col;
            for(auto j:i.second){// map<int,multiset<int> > {mapping of level and nodes}
            col.insert(col.end(),j.second.begin(), j.second.end());
            //this line of code inserts elements from the beginning to the end of the 'j.second' container into the 'col' container, starting from the position one past the last element in 'col'. 
            //It effectively appends the elements of 'j.second' to the end of 'col'.
            }
            ans.push_back(col);
        }
        return ans;
    }
};