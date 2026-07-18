class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_map<int,int> mp;
         int ans = 0;
        for(int i : candyType){
            mp[i]++;
        }
         for(auto i : mp){
            ans += 1;
            if(ans >= candyType.size() / 2)
            return ans;
         }
       
        return ans;
        
    }
};