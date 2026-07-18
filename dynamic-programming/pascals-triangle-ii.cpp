class Solution {
public:
    vector<int> getRow(int n) {
        vector<vector<int>> pascle(n + 1);

        for (int i = 0; i <= n; i++) {
            pascle[i].resize(i + 1);

            for (int j = 0; j < i + 1; j++) {
                if (j == 0 || j == i) {
                    pascle[i][j] = 1;
                } else
                    pascle[i][j] = pascle[i - 1][j] + pascle[i - 1][j - 1];
            }
        }
        vector<int> ans = pascle[n];
        return ans;
    }
};