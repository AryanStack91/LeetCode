class Solution {
private:
    void solve(int ind, int k, int sum, vector<int>& temp,
               vector<vector<int>>& ans) {

        if (sum == 0 && temp.size() == k) {
            ans.push_back(temp);
            return;
        }

        if (sum <= 0 || temp.size() > k) {
            return;
        }

        for (int i = ind; i <= 9; i++) {
            if (i <= sum) {
                temp.push_back(i);
                solve(i + 1, k, sum - i, temp, ans);
                temp.pop_back();

            } else {
                break;
            }
        }
    }

public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> temp;

        solve(1, k, n, temp, ans);
        return ans;
    }
};