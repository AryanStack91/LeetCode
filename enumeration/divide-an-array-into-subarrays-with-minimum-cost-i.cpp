class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int mini = INT_MAX;
        int smini = INT_MAX;
        int x = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < mini) {
                mini = nums[i];
                x = i;
            }
        }
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < smini && x != i) {
                smini = nums[i];
            }
        }
        return nums[0] + mini + smini;
    }
};