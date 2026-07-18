class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& inte) {
        int n = inte.size();
        sort(inte.begin(), inte.end());

        vector<vector<int>> ans;

        for (int i = 0; i < n; i++) {

            if (ans.empty() || ans.back()[1] < inte[i][0]) {
                ans.push_back(inte[i]);
            }

            else {
                ans.back()[1] = max(ans.back()[1], inte[i][1]);
            }
        }
        return ans;
    }
};