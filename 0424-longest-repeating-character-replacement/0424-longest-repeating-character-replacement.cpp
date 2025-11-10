class Solution {
public:
    int characterReplacement(string s, int k) {

        int l=0;
        int r=0;
        int maxl=0;
        int maxf=0;

        unordered_map<char,int> m;

        while(r<s.size()){

            m[s[r]-'A']++;
            maxf= max(maxf, m[s[r]-'A']);

            while((r-l+1- maxf) >k){
                 m[s[l]-'A']--;
                 

                 
                 l++;
            }

            if(r-l+1 - maxf<=k){
                maxl= max(maxl, r-l+1);
            }
            r++;
        }
        return maxl;
    }
};