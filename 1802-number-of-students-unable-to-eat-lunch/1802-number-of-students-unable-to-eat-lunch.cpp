class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        for(auto &i: students){
            q.push(i);
        }
        int i=0;
        int count=0;

        while(!q.empty()){
            if(q.front()==sandwiches[i]){
                q.pop();
                i++;
                count=0;
            }
            else{
                q.push(q.front());
                q.pop();
                count++;
            }
            if(count==q.size()) break;
        }
        return q.size();
    }
};