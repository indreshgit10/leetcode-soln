class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {

        int count = 0;

        for (int i = 1; i < nums.size(); ) {
            int diff = nums[i] - nums[i - 1];
            int n = 2;
            while (i < nums.size() - 1 && nums[i + 1] - nums[i] == diff) {
                n++;
                i++;
            }

            if (n >= 3) {
                count += (n - 2) * (n - 1) / 2;
            }

            i++;
        }
        return count;
    }
};
