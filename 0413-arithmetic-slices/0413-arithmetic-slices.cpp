class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {

        int ans=0;

       for(int i=0; i<nums.size();i++){
        unordered_set<int> s;
        for(int j=i+1; j<nums.size(); j++ ){

            int a= nums[j]-nums[j-1];
            s.insert(a);

            if(j-i+1>2 && s.size()==1) ans++;
            
        }
       }
       return ans;
    }
};