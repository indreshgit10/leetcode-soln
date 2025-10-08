class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {

        set<int> s(friends.begin(),friends.end());
        vector<int> ans;

        for(auto &i:order){
           if(s.find(i)!=s.end()) ans.push_back(i);
        }
        return ans;
    }
};