class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 0);

        for (int i = 0; i < nums.size(); i++) {
           int x = nums[i] % n;

           int index = (x + i) % n;

           if(index < 0){
            index += n;
           }

           ans[i] = nums[index];
        }
        return ans;
    }
};