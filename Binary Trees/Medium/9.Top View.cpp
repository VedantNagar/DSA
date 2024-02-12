/* You are given a Binary Tree of 'n' nodes.

The Top view of the binary tree is the set of nodes visible when we see the tree from the top.

Find the top view of the given binary tree, from left to right. */

#include <bits/stdc++.h>
vector<int> getTopView(TreeNode<int> *root)
{
   vector<int>ans;
   if(root==nullptr){
       return ans;
   }
   map<int,int>topNode; // hd and node->data
   queue<pair<TreeNode<int>*,int>>q; // node and hd
   q.push(make_pair(root,0)); // inserting in queue

   while(!q.empty()){
       pair<TreeNode<int>* , int> temp = q.front(); //temp={node and hd}
       q.pop();
       TreeNode<int>*frontNode = temp.first;
       int hd = temp.second;

       //if a value is already present for a HD, do nothing
       if(topNode.find(hd)==topNode.end()){//value doesn't exist
           topNode[hd]=frontNode->data;
       }
       if(frontNode->left){
           q.push(make_pair(frontNode->left, hd-1));
       }
       if(frontNode->right){
           q.push(make_pair(frontNode->right,hd+1));
       }
   }
       for(auto i:topNode){//int(hd) int(node->data)
       ans.push_back(i.second);
       }
       return ans;
}
