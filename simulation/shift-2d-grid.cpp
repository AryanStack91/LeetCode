class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();

        while (k--) {
            int i = n - 2;
            int j = n - 1;

            while (i >= 0) {
                for (int x = 0; x < m; x++) {
                    swap(grid[x][i], grid[x][j]);
                }
                i--;
                j--;
            }
            int val = grid[m - 1][0];
            for (int x = m - 1; x >= 1; x--) {
                grid[x][0] = grid[x - 1][0];
            }

            grid[0][0] = val;
        }

        return grid;
    }
};