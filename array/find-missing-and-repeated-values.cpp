class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();

        unordered_map<int, int> mp;
        vector<int> ans(2, 0);

        for (int i = 0; i < n; i++) {

            for (int j = 0; j < n; j++) {

                if (mp.find(grid[i][j]) != mp.end()) {
                    ans[0] = grid[i][j];
                }
                mp[grid[i][j]]++;
            }
        }

        int i = 1;

        while (i <= n * n) {
            if (mp[i] == 0) {
                ans[1] = i;
            }
            i++;
        }
        return ans;
    }
};