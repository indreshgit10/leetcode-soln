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
     vector<string> ans;

    void solve(TreeNode* root,string paths ){
        if(!root->left && !root->right){
            ans.push_back(paths);
            return;
        }
        if( root->left){
            solve(root->left, paths+"->"+to_string(root->left->val));
        }
        if( root->right){
            solve(root->right, paths+"->"+to_string(root->right->val));
        }
        


    }
    vector<string> binaryTreePaths(TreeNode* root) {
        
        string paths= to_string(root->val);

        solve(root,paths);
        return ans;
    }
};