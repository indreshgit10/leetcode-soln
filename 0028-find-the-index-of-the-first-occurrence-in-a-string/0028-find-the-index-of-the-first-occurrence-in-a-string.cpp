class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = needle.size();
        int ans = -1;
          int m = haystack.size();
          if (n > m) return -1;

        for (int i = 0; i <= haystack.size() - n; i++) {
            string temp = "";                     
            for (int j = i; j < i + n; j++) {
                temp += haystack[j];
            }

            if (temp == needle) {               
                ans = i;                         
                break;
            }
        }

        return ans;
    }
};
