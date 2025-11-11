class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
         int ans=0;
        int t=k;
        int sum=0;
        int i=0;
        while(t){
            sum+=arr[i];
            t--;
            i++;
        }
        int avg= sum/k;
        if(avg>=threshold) ans++;

        int r=k;
        int l=0;

        while(r<arr.size()){
            sum-=arr[l];
            l++;
            sum+=arr[r];

            avg= sum/k;

            if(avg>=threshold) ans++;
            r++;
        }
        return ans;
    }
};