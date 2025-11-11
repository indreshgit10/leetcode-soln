class Solution {
public:
    int solve(vector<int>& nums, int threshold, int mid) {
        int result = 0;
        for (auto &i : nums) {
            result += ceil((double)i / mid);
        }
        return result;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {

        int low = 1; 
        int high = INT_MIN;
        for (auto &i : nums) {
            high = max(high, i);
        }

        int ans = -1; 
        while (low <= high) {
            int mid = low + (high - low) / 2;

            int ans2 = solve(nums, threshold, mid); 

            if (ans2 <= threshold) { 
                ans = mid;           
                high = mid - 1;     
            } 
            else {
                low = mid + 1;      
            }
        }
        return ans; 
    }
};
