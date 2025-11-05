class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {

        int maxi=INT_MIN;
        int lsum=0,rsum=0;
        int backidx=cardPoints.size()-1;

        for(int i=0; i<k; i++){
            lsum+=cardPoints[i];
        }

        maxi=lsum;

        for(int i=k-1; i>=0; i--){
            lsum-=cardPoints[i];
            rsum+=cardPoints[backidx];
            backidx--;
            maxi=max(maxi, lsum+rsum);
        }


        return maxi;
    }
};