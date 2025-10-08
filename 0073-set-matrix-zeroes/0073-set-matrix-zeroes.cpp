class Solution {
public:
    void setzerorow(int i, vector<vector<int>>& matrix) {
        int n = matrix[0].size();
        for (int x = 0; x < n; x++) {
            matrix[i][x] = 0;
        }
    }

    void setzerocol(int j, vector<vector<int>>& matrix) {
        int n = matrix.size();
        for (int x = 0; x < n; x++) {
            matrix[x][j] = 0;
        }
    }

    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<pair<int, int>> zeros;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                if (matrix[i][j] == 0) {
                    zeros.push_back({i, j});
                }
            }
        }

        for (auto &p : zeros) {
            setzerorow(p.first, matrix);
            setzerocol(p.second, matrix);
        }
    }
};
