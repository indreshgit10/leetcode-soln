class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int> q;
        int n = tickets.size();

        for (int i = 0; i < n; i++)
            q.push(i);

        int time = 0;

        while (!q.empty()) {
            int i = q.front();
            q.pop();

            tickets[i]--;
            time++;

            if (i == k && tickets[i] == 0)
                return time;

            if (tickets[i] > 0)
                q.push(i);
        }

        return time;
    }
};
