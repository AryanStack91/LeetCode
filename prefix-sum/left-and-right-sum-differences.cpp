class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();

        vector<int> left(nums.size(), 0);
        vector<int> right(nums.size(), 0);

        int sum = 0;
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                sum += nums[i];
            } else {
                left[i] = sum;
                sum += nums[i];
            }
        }
        sum = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (i == n - 1) {
                sum += nums[i];
            } else {
                right[i] = sum;
                sum += nums[i];
            }
        }

        for (int i = 0; i < n; i++) {
            nums[i] = abs(right[i] - left[i]);
        }
        return nums;
    }
};