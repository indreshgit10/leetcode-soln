class Solution {
public:
    bool canSplit(vector<int>& nums, int k, int mid) {


        int count = 1, sum = 0;
        for (int i = 0; i < nums.size(); i++) {

            if (sum + nums[i] > mid) {

                count++;
                sum = nums[i];
                if (count > k)
                    return false;
            } else {
                sum += nums[i];
            }
        }
        return true;
    }

    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);


        int ans = high;
        while (low <= high) {
            
            int mid = low + (high - low) / 2;
            if (canSplit(nums, k, mid)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};
