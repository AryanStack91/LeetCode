class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        for (int j = 0; j < nums.size(); j++) {
            nums[i++] = nums[j] * nums[j];
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};