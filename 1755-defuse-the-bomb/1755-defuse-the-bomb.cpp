class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int> nums;
        int a=3;
        while(a){
        for(auto &i: code){
            nums.push_back(i);
        }
        a--;
    }

      vector<int> ans;

      for(int i=code.size(); i<2*code.size(); i++){
        if(k==0) ans.push_back(0);
        else if(k>0){
            int t=k;
            int f=i+1;
            int sum=0;
            while(t--){
             sum+= nums[f];
             f++;
            }
            ans.push_back(sum);
        }
        else{
             int t=-k;
            int f=i-1;
            int sum=0;
            while(t--){
             sum+= nums[f];
             f--;
            }
            ans.push_back(sum);
        }
        }
        return ans;

      }

};