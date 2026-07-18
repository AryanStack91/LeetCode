class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>mp;
        int r = 0;
        for(int i :nums){
           r = r +  mp[i]++;
        }
        return r;
    }
};