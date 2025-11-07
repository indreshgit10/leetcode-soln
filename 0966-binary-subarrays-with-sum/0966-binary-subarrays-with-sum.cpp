class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return help(nums, goal) - help(nums, goal - 1);
    }
    int help(auto& a, int g) {
        if (g < 0) return 0;
        int n = a.size(), l = 0, r = 0, sum = 0, res = 0;
        while (r < n) {
            sum += a[r];
            while (sum > g) sum -= a[l++];
            res += r - l + 1;   
            r++;
        }
        return res;
    }
};