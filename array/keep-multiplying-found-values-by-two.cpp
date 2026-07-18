class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_map<int, int> mp;

        for (int i : nums) {
            mp[i]++;
        }

        int ans = original;

        for (int i = 0; i < nums.size(); i++) {
            if (mp.find(ans) != mp.end()) {
                ans = ans * 2;
            }
        }
        return ans;
    }
};