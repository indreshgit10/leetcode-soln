class Solution {
public:
     int findmax(vector<int>& piles) {
        int maxi = INT_MIN;
        for (auto &i : piles) {
            maxi = max(maxi, i);
        }
        return maxi;
     }

     long long find(vector<int>& piles, int mid) {
        long long totalh = 0;
        for (int i = 0; i < piles.size(); i++) {
            totalh += ceil((double)piles[i] / (double)mid);
            if (totalh > 1e9) break;
        }
        return totalh;
     }

    int minEatingSpeed(vector<int>& piles, int h) {
        long long low = 1;
        long long high = findmax(piles);

        while (low <= high) {
            long long mid = low + (high - low) / 2;
            long long hours = find(piles, mid);

            if (hours <= h) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return (int)low;
    }
};
