class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ans = 0;
        unordered_map<char, int> mp;
        for (auto& x : stones) {
            mp[x]++;
        }

        for (char c : jewels) {
            ans += mp[c];
        }

        return ans;
    }
};