class Solution {
public:
    int subwithsum(vector<int>& nums, int goal) {
        if (goal < 0) {
            return 0;
        }

        int cnt = 0, sum = 0, l = 0, r = 0;

        while (r < nums.size()) {

            sum += nums[r];

            while (sum > goal) {
                sum = sum - nums[l];
                l++;
            }

            cnt = cnt + (r - l + 1);
            r++;
        }

        return cnt;
    }

    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return subwithsum(nums, goal) - subwithsum(nums, goal - 1);
    }
};