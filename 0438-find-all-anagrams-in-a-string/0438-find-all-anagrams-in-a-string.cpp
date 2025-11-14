class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        vector<int> st(26, 0);
        vector<int> ans;

        for(auto &i: p){
            st[i-'a']++;
        }

        int l=0;
        int r=0;

        vector<int> temp(26, 0);

        while(r<p.size() && r<s.size()){
           temp[s[r]-'a']++;
           r++;
        }

        if(temp==st) ans.push_back(l);

        temp[s[l]-'a']--;
        l++;
      

        while(r<s.size()){
            temp[s[r]-'a']++;
            if(temp==st) ans.push_back(l);

            temp[s[l]-'a']--;
            l++;
            r++;
        }

     return ans;
    }
};