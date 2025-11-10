class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {

        unordered_set<int> s;
        
        for(auto &i: nums){
            s.insert(i);
        }
        int n= s.size();
        int l=0, r=0, count=0;

        unordered_map<int, int> m;

        while(r<nums.size()){
            m[nums[r]]++;

            while(m.size()==n){
                count+= nums.size()-r;
                 m[nums[l]]--;
                 if (m[nums[l]] == 0) {
                    m.erase(nums[l]);
                }
                l++;
            }
            r++;
        }
       return count;   
    }
};