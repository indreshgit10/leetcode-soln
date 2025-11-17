class Solution {
public:

    bool solve(vector<int> &v1, vector<int> &v2){
        for(int i=0; i<v1.size(); i++){
            if(v1[i]>v2[i]) return false;
        }
        return true;
    }
    bool checkIfCanBreak(string s1, string s2) {
        vector<int> v1;
        vector<int> v2;

        for(char c:s1) v1.push_back(int(c));
        for(char c:s2) v2.push_back(int(c));

        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());

        bool compare1= solve(v1, v2);
        bool compare2= solve(v2,v1);

        return compare1 || compare2;

    }
};