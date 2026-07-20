class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<int> ans;
        int m = grid.size();
        int n = grid[0].size();

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                ans.push_back(grid[i][j]);
            }
        }

        reverse(ans.begin(), ans.end());
        reverse(ans.begin(), ans.begin() + k);
        reverse(ans.begin() + k, ans.end());

        int index  = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                grid[i][j] = ans[index++];
             }
        }
        return grid;
    }
};