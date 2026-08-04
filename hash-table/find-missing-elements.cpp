class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
         vector<int> ans;

        int maxi = *max_element(nums.begin(), nums.end());
        int mini = *min_element(nums.begin(), nums.end());


        unordered_map<int,int> mp;
        for(int x : nums){
            mp[x]++;
        }

        for(int i = mini; i <= maxi; i++){
            if(mp.find(i)==mp.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};