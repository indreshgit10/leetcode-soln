class Solution {
public:
    int maximumPossibleSize(vector<int>& nums) {
        
        stack<int> st; 
        st.push(nums[0]);

        for(int i=1; i<nums.size(); i++){
            if(st.top()>nums[i]) continue;
            else st.push(nums[i]);

        }
        return st.size();
    }
};