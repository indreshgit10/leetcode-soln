class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<int> x;

        for(auto &i: nums){
            x.push_back(abs(i));
        }

        sort(x.begin(), x.end());

        int z=0;
        int y=x.size()-1;
        long long ans=0;

        while(y>z){
            ans+=x[y]*x[y] - x[z]*x[z];
            z++;
            y--;
        }

        if(y==z){
            ans+=x[y]*x[y];
        }
        return ans;
    }
};