class Solution {
public:
    int solve(vector<int>& weights, int days, int mid) {
        int ans = 1;
        int count = 0;

        for (int i = 0; i < weights.size(); i++) {
            if (count + weights[i] > mid) {
                ans++;
                count = weights[i];
            } else {
                count += weights[i];
            }
        }
        return ans;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);
        int minans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int ans = solve(weights, days, mid);

            if (ans > days) {
                low = mid + 1;
            } else {
                minans = mid;
                high = mid - 1;
            }
        }
        return minans;
    }
};
