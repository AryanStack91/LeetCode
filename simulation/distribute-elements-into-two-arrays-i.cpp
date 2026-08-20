class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> num1;
        vector<int> num2;

        for (int i = 0; i < nums.size(); i++) {
            if (i == 0) {
                num1.push_back(nums[i]);
            } else if (i == 1) {
                num2.push_back(nums[i]);
              }  else {
                    if (num1.back() > num2.back()) {
                        num1.push_back(nums[i]);
                    } else {
                        num2.push_back(nums[i]);
                    }
                }
            }

            for (int i = 0; i < num1.size(); i++) {
                nums[i] = num1[i];
            }

            int k = num1.size();
            for (int i = i; i < num2.size(); i++) {
                nums[k++] = num2[i];
            }
            return nums;
        }
    };