class Solution {
public:
    string minWindow(string s, string t) {
        
        unordered_map<char, int> m;
        int a = s.size();
        int b = t.size();
        int count = 0;
        int mini = INT_MAX;
        int sidx = -1;

        for (auto &i : t) m[i]++;

        int l = 0, r = 0;

        while (r < a) {
            if (m.find(s[r]) != m.end()) {
                m[s[r]]--;
                if (m[s[r]] >= 0) count++;
            }

            while (count == b) {
                if (r - l + 1 < mini) {
                    mini = r - l + 1;
                    sidx = l;
                }

                if (m.find(s[l]) != m.end()) {
                    m[s[l]]++;
                    if (m[s[l]] > 0) count--;
                }
                l++;
            }
            r++;
        }

        if (sidx == -1) return "";
        return s.substr(sidx, mini);
    }
};
