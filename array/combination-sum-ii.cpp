class Solution {
public:
    void findcomb(int ind, int target, vector<int>& arr, set<vector<int>>& ans,
                  vector<int>& ds) {
        if (ind == arr.size()) {
            if (target == 0) {
                ans.insert(ds);
            }
            return;
        }

        // pick the element
        if (arr[ind] <= target) {
            ds.push_back(arr[ind]);
            findcomb(ind + 1, target - arr[ind], arr, ans, ds);
            ds.pop_back();
        }

        // not pick the element
        findcomb(ind + 1, target, arr, ans, ds);
    }

public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());

        set<vector<int>> ans;
        vector<int> ds;

        findcomb(0, target, candidates, ans, ds);
        vector<vector<int>> v(ans.begin(), ans.end());

        return v;
    }
};