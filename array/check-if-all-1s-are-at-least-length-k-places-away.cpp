class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int x = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                x = i;
                break;
            }
        }

        int cnt = 0;
        for (int i = x; i < nums.size(); i++) {
            if (nums[i] == 1 && i > x) {
                if (cnt < k)
                    return false;
                else {
                    cnt = 0;
                    continue;
                }
            }
            if (nums[i] ==  0) {
                cnt++;
            }
        }
        return true;
    }
};