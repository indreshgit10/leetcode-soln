/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {

        queue<pair<TreeNode*, unsigned long long>> q;
        q.push({root,0});
        unsigned long long maxwidth= 0;

        while(q.size()){
            int currsize= q.size();
            unsigned long long startidx= q.front().second;
            unsigned long long endidx=q.back().second;

            maxwidth= max(maxwidth, endidx-startidx+1);

           for(int i=0; i<currsize; i++){
            auto [node, idx]= q.front();
            q.pop();
            unsigned long long currIndex = idx - startidx;
            if(node->left) q.push({node->left, 2*currIndex +1});
            if(node->right) q.push({node->right, 2*currIndex +2});
           }
        }
        return maxwidth;
    }
};