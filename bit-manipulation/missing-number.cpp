class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0,x;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int n=nums.size();
          x=(n*(n+1))/2;
          return x-sum;
    }
    
};