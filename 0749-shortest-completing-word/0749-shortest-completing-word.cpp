class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        vector<int> count(26, 0);
        for(char c : licensePlate) {
            if(isalpha(c)) count[tolower(c) - 'a']++;
        }
        string ans = "";
        for(string w : words) {
            vector<int> temp(26, 0);
            for(char c : w) temp[c - 'a']++;
            bool ok = true;
            for(int i = 0; i < 26; i++) {
                if(temp[i] < count[i]) {
                    ok = false;
                    break;
                }
            }
            if(ok && (ans == "" || w.size() < ans.size())) ans = w;  }
        return ans;
    }
};
