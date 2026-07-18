class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> ans(friends.size(), 0);
        unordered_map<int, int> mp;

        for (int i : friends) {
            mp[i]++;
        }

        int x = 0;

        for (int i : order) {
            if (mp.find(i) != mp.end()) {
                ans[x++] = i;
            }
        }
        return ans;
    }
};