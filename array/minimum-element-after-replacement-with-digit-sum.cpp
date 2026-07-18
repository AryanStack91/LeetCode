class Solution {
public:
    int minElement(vector<int>& nums) {

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] < 9) {
                continue;
            } else {
                string s = to_string(nums[i]);
                 int ans = 0;

                for (int j = 0; j < s.length(); j++) {
                    ans += (s[j] - '0');
                }

                nums[i] = ans;
            }
        }

        int mini = INT_MAX;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < mini){
                mini = nums[i];
            }
        }
        return mini;
    }
};