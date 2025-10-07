class Solution {
public:
    bool check(string &result) {
        int n = result.size();
        for (int i = 0; i < n / 2; i++) {
            if (result[i]!=result[n-1-i])
                return false;
        }
        return true;
    }

    bool isPalindrome(string s) {
        string result = "";
        for (auto &i : s) {
            if (isalnum(i)) {
                result += tolower(i);
            }
        }
        return check(result);
    }
};
