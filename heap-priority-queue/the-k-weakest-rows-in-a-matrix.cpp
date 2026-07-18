class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int, int>> ans;

        for (int i = 0; i < mat.size(); i++) {
            int sum = 0;

            for (int j = 0; j < mat[i].size(); j++) {
                if (mat[i][j] == 1) {
                    sum++;
                }
            }

            ans.push_back({sum, i});
        }
        sort(ans.begin(), ans.end());

        vector<int> res;
        int i = 0;
        while (k--) {
            res.push_back(ans[i++].second);
        }
        return res;
    }
};