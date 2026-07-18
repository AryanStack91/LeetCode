class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int, int> mp;
        vector<int> ans(2);
        for (int i : nums) {
            mp[i]++;
        }
        int k = 0;
        for (auto i : mp) {
            if (i.second > 1) {
                ans[k++] = i.first;
            }
        }
        return ans;
    }
};