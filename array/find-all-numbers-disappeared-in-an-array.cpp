class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int, int> mp;

        vector<int> ans;

        for (int i : nums) {
            mp[i]++;
        }
        int j = 1;
        for (int i = 0; i < nums.size(); i++) {

            if (mp.find(j) != mp.end()) {
                j++;
                continue;
            } else {
                ans.push_back(j);
                j++;
            }
        }
        return ans;
    }
};