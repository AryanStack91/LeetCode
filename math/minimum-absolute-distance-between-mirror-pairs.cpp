class Solution {
public:
    int minMirrorPairDistance(vector<int>& nums) {
        int ans = INT_MAX;
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            auto it = mp.find(nums[i]);
            if ((it != mp.end())) {
                ans = min(ans, abs(i - mp[nums[i]]));
            }
            mp[reverse(nums[i])] = i;
        }
        if (ans == INT_MAX) {
            return -1;
        } else {
            return ans;
        }
    };

    int reverse(int n) {
        int ans = 0;
        while (n > 0) {
            int l_d = n % 10;
            ans = ans * 10 + l_d;
            n = n / 10;
        }
        return ans;
    }
};