class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans(nums.size() + 1,0);

        for(int i = 0; i < nums.size();i++){
            ans[nums[i]]++;
        }
        int a = 0,b = 0;
         for(int i = 1; i <= nums.size(); i++){
            if(ans[i] == 0){
                b = i;
            }
            else if(ans[i] == 2){
                a = i;
            }
        }
        return {a,b};
    }
};