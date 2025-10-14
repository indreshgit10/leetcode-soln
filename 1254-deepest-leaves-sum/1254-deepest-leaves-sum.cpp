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
    
    void findh(TreeNode* root,int height, int &h){
        if(!root){
            h=max(h,height);
            return;
        }
        findh(root->left, height+1,h);
        findh(root->right,height+1,h);
    }

    void solve(TreeNode* root, int h, int &ans, int currh){
        if(root==nullptr) return;
        if(currh==h){ 
        ans+=root->val;
        return;
        }

        solve(root->left, h, ans, currh+ 1 );
        solve(root->right, h, ans, currh+ 1 );

    }
     

    int deepestLeavesSum(TreeNode* root) {
        int h=0;
        int ans=0;
        findh(root,0,h);
        solve(root,h,ans,1);
        
        return ans;
    }
};