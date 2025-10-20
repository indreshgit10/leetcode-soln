class Solution {
public:
    vector<long long> ans;

    void solve(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int size = q.size();
            long long sum = 0;

            while (size--) {
                TreeNode* curr = q.front();
                q.pop();
                sum += curr->val;
                if (curr->left)
                    q.push(curr->left);
                if (curr->right)
                    q.push(curr->right);
            }

            ans.push_back(sum);
        }
    }
    long long kthLargestLevelSum(TreeNode* root, int k) {
        solve(root);
        if (k > ans.size())
            return -1;
        sort(ans.begin(), ans.end(), greater<long long>());
        return ans[k - 1];
    }
};
