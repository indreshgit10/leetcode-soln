class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {

        unordered_set<int> s;
        
        for(auto &i: nums){
            s.insert(i);
        }

        int n= s.size();

        s.clear();

        int count=0;
       
       for(int i=0; i<nums.size(); i++){
        for(int j=i; j<nums.size(); j++){
            s.insert(nums[j]);
            if(s.size()==n){
                count++;
            }
        }
        s.clear();
       }
       return count;   
    }
};