class Solution {
public:
    void answer(vector<int>& nums, int index, vector<int> oup,
                vector<vector<int>>& ans) {
        // base case
        if (nums.size() <= index) {
            ans.push_back(oup);
            return;
        }
        // exclude
        answer(nums, index + 1, oup, ans);

        // incude
        int a = nums[index];
        oup.push_back(a);
        answer(nums, index + 1, oup, ans);

        oup.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> oup;
        int index = 0;

        answer(nums, index, oup, ans);
        return ans;
    }
};