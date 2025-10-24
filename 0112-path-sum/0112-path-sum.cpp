class Solution {
public:
    bool solve(TreeNode* root, int targetSum){
        if(!root) return false; 

        if(!root->left && !root->right) {
            return (targetSum == root->val);
        }
        if(solve(root->left, targetSum - root->val)) {
            return true;    }

        if(solve(root->right, targetSum - root->val)) {
            return true;
        }
        return false;
    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        return solve(root, targetSum);
    }
};
