class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int v = 0;
        unordered_map<int,int> mp;
        for(int i = 0; i < nums.size() ;i++){
            mp[nums[i]]++;
        }
        for(auto x : mp){
            int a = x.second;
            if(a > 1){
              v = x.first; 
            }

        }
        return v;
    }
};