class Solution {
public:

     int solve(vector<int>& bloomDay, int m, int k,int mid){
        int count=0;
        int ans=0;
           for(int i=0; i<bloomDay.size(); i++){
            if(bloomDay[i]<=mid){
                count++;
            }
            else {
                ans+= count/k;
                count=0;
            }
           }
           ans += count / k;

           return ans;
     }
    int minDays(vector<int>& bloomDay, int m, int k) {

        int low=INT_MAX;
        int high= INT_MIN;

        for(auto &i: bloomDay){ 
            high= max(i, high);
            low= min(i, low);
        }

        int ans=-1;

        while(low<=high){
            int mid= low + (high- low)/2;
            int a= solve(bloomDay, m,k,mid);
            if(a <m){
                low=mid+1;
            }
            else {
                ans=mid;
                high= mid-1;
            }
        }
        return ans;
    }
};