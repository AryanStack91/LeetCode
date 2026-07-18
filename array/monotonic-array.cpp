class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int inc = 1;
        int dec = 1;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] < nums[i + 1]) {
                inc++;
            } else if (nums[i] > nums[i + 1]) {
                dec++;
            } else {
                inc++;
                dec++;
            }
        }
        if (inc == nums.size() || dec == nums.size()) {
            return true;
        }
        return false;
    }
};