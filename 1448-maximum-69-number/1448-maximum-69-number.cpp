class Solution {
public:
    int maximum69Number (int num) {
       
       vector<int> nums;
       
       while(num){
        int d=num%10;
        nums.push_back(d);
        num/=10;
       }
        
        reverse(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==6){
                nums[i]=9;
                break;
            }
        }

        for(auto &i: nums){
           num=num*10+ i;
        }
        return num;
    }
};