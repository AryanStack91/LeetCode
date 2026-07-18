class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> mp;

        for (int i : nums) {
            mp[i]++;
        }
        int max_f = 0;
        for (auto& i : mp) {
            if (i.second > max_f)
                max_f = i.second;
        }

        int ans = 0;

        for (auto& i : mp) {
            if (i.second == max_f)
                ans += i.second;
        }
        return ans;
    }
};