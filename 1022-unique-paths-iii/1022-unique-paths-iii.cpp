class Solution {
public:
    int ans = 0;
    int totalEmpty = 0;
    int startx, starty;

    void dfs(vector<vector<int>>& grid, int x, int y, int remain) {
        if (x < 0 || y < 0 || x >= grid.size() || y >= grid[0].size() ||
            grid[x][y] == -1)
            return;

        if (grid[x][y] == 2) {
            if (remain == 0)
                ans++;
            return;
        }

        grid[x][y] = -1;

        dfs(grid, x + 1, y, remain - 1);
        dfs(grid, x - 1, y, remain - 1);
        dfs(grid, x, y + 1, remain - 1);
        dfs(grid, x, y - 1, remain - 1);

        grid[x][y] = 0;
    }

    int uniquePathsIII(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] != -1)
                    totalEmpty++;
                if (grid[i][j] == 1) {
                    startx = i;
                    starty = j;
                }
            }
        }
        dfs(grid, startx, starty, totalEmpty - 1);
        return ans;
    }
};
