class Solution {
public:
    int thirdMax(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int ans = nums[nums.size() - 1];

        int x = 2;
        if (nums.size() <= 2) {
            return ans;
        }
        for (int i = nums.size() - 1; i >= 0; i--) {
            if (nums[i] < ans && x > 0) {
                ans = nums[i];
                x--;
            }
        }
        return x == 0 ? ans : nums[nums.size() - 1];
    }
};