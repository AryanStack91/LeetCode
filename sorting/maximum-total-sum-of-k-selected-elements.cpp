class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        long long ans = 0;

        sort(nums.begin(), nums.end(), greater<int>());

        for (int i = 0; i < k; i++) {
            if (mul == 0) {
                ans += nums[i];
            } else {
                ans += (long long)nums[i] * mul;
                
                mul--;
            }
        }
        return ans;
    }
};