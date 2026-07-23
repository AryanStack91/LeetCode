class Solution {
private:
    void solve(int index, vector<int>& nums, vector<int>& temp,
               set<vector<int>>& ans) {

        if (index == nums.size()) {
            ans.insert(temp);
            return;
        }

        temp.push_back(nums[index]);
        solve(index + 1, nums, temp, ans);

        temp.pop_back();

        solve(index + 1, nums, temp, ans);
    }

public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> ans;

        vector<int> temp;

        solve(0, nums, temp, ans);

        return vector<vector<int>> (begin(ans), end(ans));
    }
};