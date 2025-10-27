class Solution {
public:
    int numberOfBeams(vector<string>& bank) {

        int n= bank.size();
        vector<int> ans;
        for(int i=0; i<n; i++){
            int count=0;
            for(int j=0; j<bank[i].size(); j++){
                if(bank[i][j]== '1') count++;
            }
            ans.push_back(count);
        }
        vector<int> an;
        for(int i=0; i<ans.size(); i++){
            if(ans[i] !=0) an.push_back(ans[i]);
        }
        int x=an.size();
        if(x>1) {
            int laser=0;
            for(int i=0; i<an.size()-1;i++){
                laser+= an[i]*an[i+1];
            }
            return laser;

        }
        else return 0;
    }
};