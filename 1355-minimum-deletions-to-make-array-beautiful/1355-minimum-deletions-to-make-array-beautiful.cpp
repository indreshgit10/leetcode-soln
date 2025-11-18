class Solution {
public:
    int minDeletion(vector<int>& nums) {

        if(nums.size()==0) return 0;
        if(nums.size()==1) return 1;
        
        int stidx=0;
        stack<int> st;
        st.push(nums[0]);
        int changes=0;

        for(int i=1; i<nums.size(); i++){
            if(stidx%2==0 && st.top()==nums[i]){
                changes++;
                continue;
            }
            else {
                st.push(nums[i]);
                stidx++;
            }
        }
        if(st.size()%2==0) return changes;
        else return changes+1;
    }
};