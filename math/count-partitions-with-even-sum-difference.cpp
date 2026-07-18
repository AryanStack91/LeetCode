class Solution {
public:
    int countPartitions(vector<int>& nums) {
        vector<int> a(nums.size(), 0);

        // prefix sum
        int x = 0;
        int xx = nums.size() - 1;
        for (int i = nums.size() - 1; i >= 0; i--) {
            x += nums[i];
            a[xx--] = x;
        }

        int ans = 0;
        int y = 0;
        for (int i = 1; i < nums.size(); i++) {

            y += nums[i - 1];

            if ((y - a[i]) % 2 == 0)
                ans++;
        }
        return ans;
    }
};