class Solution {
public:
    string decodeString(string s) {
        stack<char> st;
        string ans = "";

        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ']') {
                st.push(s[i]);
            } else {
                string str = "";
                while (!st.empty() && st.top() != '[') {
                    str += st.top();
                    st.pop();
                }
                st.pop();

                string num = "";
                while (!st.empty() && isdigit(st.top())) {
                    num += st.top();
                    st.pop();
                }
                reverse(num.begin(), num.end());
                int count = stoi(num);

                string repeated = "";
                while (count--) repeated += str;

                for (int j = repeated.size() - 1; j >= 0; j--) {
                    st.push(repeated[j]);
                }
            }
        }

        while (!st.empty()) {
            ans = st.top() + ans;
            st.pop();
        }

        return ans;
    }
};
