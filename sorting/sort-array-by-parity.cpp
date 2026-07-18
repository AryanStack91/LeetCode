class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i = 0, j = 0;
        int x = nums.size() - 1;
        vector<int> arr(nums.size());
        while (j < nums.size()) {
            if (nums[j] % 2 == 0) {
                arr[i++] = nums[j++];

            } else {
                arr[x--] = nums[j++];
            }
        }
        return arr;
    }
};