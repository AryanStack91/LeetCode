class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int m) {
        while (k--) {
            int minindex = 0;
            int mini = INT_MAX;
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] < mini) {
                    mini = nums[i];
                    minindex = i;
                }
            }
            nums[minindex] = nums[minindex] * m;
        }
        return nums;
    }
};