class Solution {
public:
    bool kLengthApart(vector<int>& arr, int k) {
    int distance=0;
    int j=0;
    if(arr[0]==0){
        while(j<arr.size()&&arr[j]==0){
            j++;
        }
    }
      for(int i=j;i<arr.size();i++){
        if(arr[i]==1){
            if(distance<k&&i!=j){
               return false;
            }
            else{
                distance=0;
            }
        }
        else{
            
            distance++;
            
        }
      }
      return true;
    }
};