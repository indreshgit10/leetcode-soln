class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int i=0;
        int t=minutes;
        int starting =0;
        int r=minutes;
        int count=0;

        for(int i=0;i< minutes && i <customers.size(); i++){
            if(grumpy[i]==1){
                count+= customers[i];
            }
            
        }

        int maxi=count;

        while(r<customers.size()){
            if(grumpy[r]==1){
                count+=customers[r];
            }
            if(grumpy[r-minutes]==1){
                count-=customers[r-minutes];
            }
            
            if(count>maxi){
                maxi= count;
                starting=r- minutes+1;
            }
             r++;
        }

        int j=0;
        int ans=0;
        while(j<customers.size()){
            if(grumpy[j]==0){
               ans+=customers[j];
            }
            j++;
        }

      for(int k= starting ; k< starting + minutes && k<customers.size(); k++){
        if(grumpy[k]==1){
            ans+=customers[k];
        }
      }
        return ans;
        
    }
    
};