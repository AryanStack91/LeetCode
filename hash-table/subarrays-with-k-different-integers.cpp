class Solution {
public:
    int sub(vector<int>& nums, int k) {
        int cnt = 0, l = 0, r = 0;
        unordered_map<int, int> mp;
        if (k < 0) {
            return 0;
        }
        while (r < nums.size()) {

            mp[nums[r]]++;

            while (mp.size() > k) {
                mp[nums[l]]--;

                if (mp[nums[l]] == 0) {
                    mp.erase(nums[l]);
                }
                l++;
            }
            cnt += r - l + 1;
            r++;
        }
        return cnt;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {

        return sub(nums, k) - sub(nums, k - 1);
    }
};