class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()) return false;
        
        unordered_map<char, char> m1; 
        unordered_map<char, char> m2;
        
        for(int i = 0; i < s.size(); i++) {
            char cs = s[i], ct = t[i];
            
            if(m1.count(cs) && m1[cs] != ct) return false;
            if(m2.count(ct) && m2[ct] != cs) return false;
            
            m1[cs] = ct;
            m2[ct] = cs;
        }
        return true;
    }
};
