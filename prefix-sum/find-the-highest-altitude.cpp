class Solution {
public:
    int largestAltitude(vector<int>& gain) {

        vector<int> ans(gain.size() + 1, 0);
         
        for(int i = 1; i <= gain.size(); i++){
            ans[i] = ans[i - 1] + gain[i - 1];
        }
        return *max_element(ans.begin(), ans.end());

    
    }
};