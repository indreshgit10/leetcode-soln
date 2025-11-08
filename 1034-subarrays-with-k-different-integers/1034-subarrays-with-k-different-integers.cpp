class Solution {
public:
    int solve(vector<int>& nums, int k) {
        int l = 0, r = 0, count = 0;
        unordered_map<int, int> m;

        while (r < nums.size()) {
            m[nums[r]]++;

            while (m.size() > k) {
                m[nums[l]]--;
                if (m[nums[l]] == 0) {
                    m.erase(nums[l]);
                }
                l++;
            }

            count += (r - l + 1);
            r++;
        }
        return count;
    }

    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return solve(nums, k) - solve(nums, k - 1);
    }
};
