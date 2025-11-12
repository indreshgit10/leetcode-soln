class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> ans;
        if(s.size()<10) return ans;

        deque<char> x(s.begin(), s.begin()+10);


        unordered_map<string, int> seen;
        seen[string(x.begin(), x.end())]++;

        for(int i=10; i<s.size(); i++){
            x.pop_front();
            x.push_back(s[i]);
            seen[string(x.begin(), x.end())]++;
        }
        
        for(auto &i: seen){
            if(i.second>1) ans.push_back(i.first);
        }
return ans;
}    
};