class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> nums;
        
        for(int i=0;i<n;i++){
            int a = start+2*i;
            nums.push_back(a);
        }
        int ans = 0;
        for(int i = 0;i <nums.size();i++){
                ans = ans ^ nums[i];
        }
       return ans;
    }
};