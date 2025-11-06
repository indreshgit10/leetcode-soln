class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        int counta = 0, countb = 0, countc = 0;
        int ans = 0;
        int st = 0;

        for (int end = 0; end < n; end++) {
           
            if (s[end] == 'a') counta++;
            if (s[end] == 'b') countb++;
            if (s[end] == 'c') countc++;

          
            while (counta && countb && countc) {
                ans += (n - end); 

                if (s[st] == 'a') counta--;
                if (s[st] == 'b') countb--;
                if (s[st] == 'c') countc--;
                st++;
            }
        }

        return ans;
    }
};
