class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return help(nums, k) - help(nums, k - 1);
    }
    int help(auto& a, int g) {
        if (g < 0) return 0;
        int n = a.size(), l = 0, r = 0, sum = 0, res = 0;
        while (r < n) {
            sum += a[r]%2;
            while (sum > g) sum -= a[l++]%2;
            res += r - l + 1;   
            r++;
        }
        return res;
    }
};