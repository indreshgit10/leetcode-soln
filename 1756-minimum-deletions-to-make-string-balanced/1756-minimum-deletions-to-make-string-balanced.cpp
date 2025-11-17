class Solution {
public:
    int minimumDeletions(string s) {

        stack<char> st;
        int count=0;

        for(int i=0; i<s.size(); i++){
            

            while(st.size() && st.top()=='b' && s[i]=='a'){
                
             st.pop();
             count++;
             i++;
                
        }
        st.push(s[i]);
        }
        return count;  
    }
};